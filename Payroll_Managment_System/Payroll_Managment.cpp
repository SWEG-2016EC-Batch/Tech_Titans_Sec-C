#include <iostream>
#include <string.h>
#include <cstring>
#include <ctype.h>
#include <iomanip>
using namespace std;

int main() { 
    // Variables for user input and employee details
    int gender, employee_type, num = 0;
    string Name[100];
    string Gender[100];
    string Employee[100];
    int Weekly_pay[100];
    string name;
    
    bool flag;
    char x;

    // Display the program title
    cout << setw(20) << "*" << string(48, '*') << "*" << endl;
    cout << setw(20) << "*" << string(48, ' ') << "*" << endl;
    cout << setw(20) << "*" << string(15, ' ') << "Payroll Management" << string(16, ' ') << "*" << endl;
    cout << setw(20) << "*" << string(48, ' ') << "*" << endl;
    cout << setw(20) << "*" << string(48, '*') << "*" << endl;
    do {
        // Variables for tracking the summary report
        int total_workers = 0;
        double total_payment = 0;
        int min_payment_manager, max_payment_manager = 0;
        int min_payment_hourly, max_payment_hourly = 0;
        int min_payment_commission, max_payment_commission = 0;
        int min_payment_pieceworker, max_payment_pieceworker = 0;

        int n, choice, counter1 =0, counter2 =0, counter3 =0, counter4 =0;
        flag = 0;
        

        // Display menu options
        a:
        cout << "1. Add employee. \n2. Remove employee. \n3. Search for an employee.\n4. Display the weekly pays of the employees\n5. Summary report \n6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "Enter number only" << endl;
            goto a;
        } 

        switch (choice) {
	    case 1:
                // Add employees
                b:
                cout << "Please enter the number of employees you want to add: ";
                cin >> n;
                if (cin.fail() || n < 0) {
                    cin.clear(); cin.ignore();
                    cout << "Enter number only" << endl;
                    goto b;
                }
                num += n;
                cout << "\nPlease enter their details:\n";
                for (int i = num - n; i < num; i++) {
                    cout << "Enter the name of the employee: ";
                    cin.ignore();
                    getline(cin, Name[i]);
                    i:
                    cout << "Enter gender: \n1. Male\n2. Female" << endl;
                    cin >> gender;
                    if (cin.fail() || gender < 1 || gender > 2) {
                        cin.clear(); cin.ignore();
                        cout << "Enter proper input!" << endl;
                        goto i;
                    }
                    if (gender == 1)
                        Gender[i] = "Male";
                    else
                        Gender[i] = "Female";
                    j:
                    cout << "Enter employment type: \n1. Manager\n2. Hourly worker\n3. Commission worker\n4. Piece worker" << endl;
                    cin >> employee_type;
                    if (cin.fail() || employee_type < 1 || employee_type > 4) {
                        cin.clear(); cin.ignore();
                        cout << "Enter proper input" << endl;
                        goto j;
                    }

                    if (employee_type == 1) {
                        double fixedSalary;
                        Employee[i] = "Manager";
                        c:
                        cout << "Enter fixed weekly salary: ";
                        cin >> fixedSalary;
                        if (cin.fail() || fixedSalary < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto c;
                        }
                        Weekly_pay[i] = min_payment_manager = fixedSalary;
                        cout << "Employee record added successfully!\n";
                    } else if (employee_type == 2) {
                        double hourlyWage, hoursWorked;
                        Employee[i] = "Hourly";
                        d:
                        cout << "Enter hourly wage: ";
                        cin >> hourlyWage;
                        if (cin.fail() || hourlyWage < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto d;
                        }
                        e:
                        cout << "Enter hours worked: ";
                        cin >> hoursWorked;
                        if (cin.fail() || hoursWorked < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto e;
                        }

                        if (hoursWorked <= 40) {
                            Weekly_pay[i] = min_payment_hourly = hourlyWage * hoursWorked;
                        } else {
                            Weekly_pay[i] = min_payment_hourly = (hourlyWage * 40) + (hourlyWage * 1.5 * (hoursWorked - 40));
                        }
                        cout << "Employee record added successfully!\n";
                    } else if (employee_type == 3) {
                        double weeklySales;
                        Employee[i] = "Commission";
                        f:
                        cout << "Enter gross weekly sales: ";
                        cin >> weeklySales;
                        if (cin.fail() || weeklySales < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto f;
                        }
                        Weekly_pay[i] = min_payment_commission = 250 + (0.057 * weeklySales);
                        cout << "Employee record added successfully!\n";
                    } else if (employee_type == 4) {
                        double itemsProduced, payPerItem;
                        Employee[i] = "Pieceworker";
                        g:
                        cout << "Enter number of items produced: ";
                        cin >> itemsProduced;
                        if (cin.fail() || itemsProduced < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto g;
                        }
                        h:
                        cout << "Enter payment per item: ";
                        cin >> payPerItem;
                        if (cin.fail() || payPerItem < 0) {
                            cin.clear(); cin.ignore();
                            cout << "Enter number only" << endl;
                            goto h;
                        }
                        Weekly_pay[i] = min_payment_pieceworker = itemsProduced * payPerItem;
                        cout << "Employee record added successfully!\n";
                    } else {
                        cout << "Invalid employment type. Record not added.\n";
                        continue;
                    }
                }
                break; 
            case 2:
                // Remove an employee
                cout << "Enter the name of the employee you want to remove: ";
                cin.ignore();
                getline(cin, name);
                for (int i = 0; i < num; i++) {
                    if (name == Name[i]) {
                        // Update minimum payment values if necessary
                        if (Employee[i] == "Manager") {
                            for (int k = 0; k < num; k++) {
                                if (k == i){
                                    continue;}
                                else if (Employee[k] == "Manager") min_payment_manager = Weekly_pay[k];
                            }
                        } else if (Employee[i] == "Hourly") {
                            for (int k = 0; k < num; k++) {
                                if (k == i)
                                    continue;
                                else if (Employee[k] == "Hourly") min_payment_hourly = Weekly_pay[k];                                 
                            }
                        } else if (Employee[i] == "Commission") {
                            for (int k = 0; k < num; k++) {
                                if (k == i)
                                    continue;
                                else if (Employee[k] == "Commission") min_payment_commission = Weekly_pay[k];                                    
                            }
                        } else if (Employee[i] == "Pieceworker") {
                            for (int k = 0; k < num; k++) {
                                if (k == i)
                                    continue;
                                else if (Employee[k] == "Pieceworker") min_payment_pieceworker = Weekly_pay[k];                                    
                            }
                        }
                        for (int j = i; j < num; j++) {
                            Name[j] = Name[j + 1];
                            Gender[j] = Gender[j + 1];
                            Employee[j] = Employee[j + 1];
                            Weekly_pay[j] = Weekly_pay[j + 1];
                        }
                        num--;
                        flag = 1;
                    }
                }
                for(int i=0;i<num;i++){
                	 if(Employee[i]== "Manager") counter1++;	
					 if(Employee[i]== "Hourly") counter2++;
					 if(Employee[i]== "Commission") counter3++;
					 if(Employee[i]== "Pieceworker") counter4++;
				}
                cout << "Employee removed successfully!" << endl;
                if (flag == 0)
                    cout << "\nSorry, but there is no employee with the specified name. \n";

                if (counter1==0) min_payment_manager = 0;
                if( counter2==0) min_payment_hourly = 0;
		if( counter3==0) min_payment_commission = 0;
		if( counter4==0) min_payment_pieceworker = 0;
                break;
	
            case 3:
		// Search for an employee

		cout<<"Enter the name of the employee: ";
		cin.ignore();
		getline(cin, name);
		for(int i=0;i<num;i++){
		if(name == Name[i]){
			cout<<"\n*********************** Employee Record **************************\n";
			cout << string(65, '-') << "\n";
			cout<<left<<setw(20)<<"Name"<<setw(10)<<"Gender"<<setw(25)<<"Employment type"<<setw(20)<<"Weeklypay"<<endl;
			cout << string(65, '-') << "\n";
				cout << left << setw(20) << Name[i]
                     << setw(10) << Gender[i]
                     << setw(25) << Employee[i]
                     << fixed <<setprecision(2)<<setw(20)<< Weekly_pay[i] << "\n";
			flag=1;
			break;
		}

	}
	if(flag==0){
		cout<<"\nSorry, but there is no employee with the specified name. \n";
	}
		break;
	    case 4:
		cout<<"\n*********************** Employee Weeklypay **************************\n";
		cout << string(65, '-') << "\n";
		cout<<left<<setw(20)<<"Name"<<setw(10)<<"Gender"<<setw(25)<<"Employment type"<<setw(20)<<"Weeklypay"<<endl;
		cout << string(65, '-') << "\n";
		for(int i=0;i<num;i++){	
			cout << left << setw(20) << Name[i]
                     		     << setw(10) << Gender[i]
                                     << setw(25) << Employee[i]
                     		     << fixed <<setprecision(2)<<setw(20)<< Weekly_pay[i] << "\n";
		}    
		break;
            case 5:
        // Summary report
        cout << "\n******** Summary Report ********\n" << endl;

        // Calculate the total number of workers and total payment
        for (int i = 0; i < num; i++) {
            total_workers++;
            total_payment += Weekly_pay[i];

            // Calculate minimum and maximum payments for each category
            if (Employee[i] == "Manager") {
              min_payment_manager = min(min_payment_manager, Weekly_pay[i]);
              max_payment_manager = max(max_payment_manager, Weekly_pay[i]);

            } else if (Employee[i] == "Hourly") {
                min_payment_hourly = min(min_payment_hourly, Weekly_pay[i]);
                max_payment_hourly = max(max_payment_hourly, Weekly_pay[i]);

            } else if (Employee[i] == "Commission") {
                min_payment_commission = min(min_payment_commission, Weekly_pay[i]);
                max_payment_commission = max(max_payment_commission, Weekly_pay[i]);

            } else if (Employee[i] == "Pieceworker") {
                min_payment_pieceworker = min(min_payment_pieceworker, Weekly_pay[i]);
                max_payment_pieceworker = max(max_payment_pieceworker, Weekly_pay[i]);
            }
        }


        // Display the summary report
        cout << "Total number of workers: " << total_workers << endl;
        cout << "Total payment: " << total_payment << endl;
        cout << "Minimum and Maximum Payments by Category:\n";
        cout << "Manager: Min = " << min_payment_manager << ", Max = " << max_payment_manager << endl;
        cout << "Hourly: Min = " << min_payment_hourly << ", Max = " << max_payment_hourly << endl;
        cout << "Commission: Min = " << min_payment_commission << ", Max = " << max_payment_commission << endl;
        cout << "Pieceworker: Min = " << min_payment_pieceworker << ", Max = " << max_payment_pieceworker << endl;
        
        break;
        
          
        } 
    case 6:
        // Exit the program
        cout << "Thank You!";
        return 0;

    default:
        // Handle invalid input
        cout << "Enter a proper input!" << endl;
        goto a;
    }
    // Ask if the user wants to continue
    cout << "Do you want to continue? Y/N\n";
    cin >> x;          
} while (x == 'Y' || x == 'y');  // Loop to continue or exit

    return 0;  // End the program
}
