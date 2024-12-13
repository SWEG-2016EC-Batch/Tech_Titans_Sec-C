#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float working_hour, bonus_rate, base_salary,net_salary,pension, tax=0, extra_working_hour=0,bonus, gross_salary;
/*	string name;
	cout<<"Enter your name: ";
	cin>>name;*/
	c:
	cout<<"Enter your base salary: ";
	cin>>base_salary;
	if(cin.fail()|| base_salary<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto c;
		}
	a:
		cout<<"Enter your weekly working hour: ";
		cin>>working_hour;
		if(cin.fail()||working_hour<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto a;
		}
		
		if(working_hour>40){
			b:
		cout<<"Enter your over-time bonus rate per hour: ";
		cin>>bonus_rate;
		if(cin.fail()||bonus_rate<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto b;
		}
			extra_working_hour=working_hour-40;
		}
		
		pension=(base_salary)*0.07;
		
		bonus=extra_working_hour*bonus_rate*4;
		
		gross_salary = base_salary + bonus;
		
		if(base_salary > 200 && base_salary < 600)
		tax=gross_salary*0.10;
		else if(base_salary > 600 && base_salary < 1200)
		tax=gross_salary*0.15;
		else if(base_salary > 1200 && base_salary < 2000)
		tax=gross_salary * 0.2;
		else if(base_salary > 2000 && base_salary < 3500)
		tax=gross_salary * 0.25;
		else if(base_salary > 3500)
		tax=gross_salary * 0.3;
		net_salary=gross_salary-pension-tax;
		
	//	cout<<"Employee name: "<<name<<endl;
		cout<<"Your bonus payment is: "<<bonus<<endl;
		cout<<"Your pension deducted is: "<<pension<<endl;
		cout<<"Your tax deducted is: "<<tax<<endl;
		cout<<"Your gross salary is: "<<gross_salary<<endl;
		cout<<"Your net salary is: "<<net_salary<<endl;
	return 0;
}
