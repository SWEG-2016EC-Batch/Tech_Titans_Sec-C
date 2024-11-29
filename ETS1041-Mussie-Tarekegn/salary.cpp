#include <iostream>

using namespace std;

int main(){
float working_hr,bonus_rate,base_salary,gross_salary,net_salary,bonus_payment,pensions=0.05,tax=0.15,pension_deduction,tax_deduction;
cout<<"enter your working hour per week:";
cin>>working_hr;
cout<<"enter your bonus rate per hour:";
cin>>bonus_rate;
cout<<"enter your base salary:";
cin>>base_salary;
bonus_payment=working_hr*bonus_rate;
gross_salary=bonus_payment+base_salary;
pension_deduction=gross_salary*pensions;
tax_deduction=gross_salary*tax;
net_salary=gross_salary-pension_deduction-tax_deduction;
cout<<"your Bonus payment is :"<<bonus_payment<<endl;
cout<<"your Gross salary is:"<<gross_salary<<endl;
cout<<"your Pension deduction is:"<<pension_deduction<<endl;
cout<<"your Tax deduction is:"<<tax_deduction<<endl;
cout<<"your Net salary is:"<<net_salary<<endl;
return 0;
}
