#include <iostream>
#include <string.h>
#include <cstring>
#include <ctype.h>
#include <iomanip>
using namespace std;

int main() {
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
        cout << "1. Add employee. \n2. Remove employee. \n3. Search for an employee.\n4. Summary report \n5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear(); cin.ignore();
            cout << "Enter number only" << endl;
            goto a;
        }

        switch (choice) {
          
        }
    // Ask if the user wants to continue
    cout << "Do you want to continue? Y/N\n";
    cin >> x;          
} while (x == 'Y' || x == 'y');  // Loop to continue or exit

    return 0;  // End the program
}
