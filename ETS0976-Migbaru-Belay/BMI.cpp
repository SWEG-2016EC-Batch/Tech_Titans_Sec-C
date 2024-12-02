#include <iostream>

using namespace std;

int main() {
	float weight, height, BMI;
	char num;
	bool flag=1;
	while(flag){
		cout<<"Enter your weight in kilogram: ";
		cin>>weight;
		if(cin.fail()||weight<=0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
		 flag=1;
		}
		else{
		
	
		cout<<"Enter your height in meter: ";
		cin>>height;
		if(cin.fail()||height<=0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			flag=1;
		}
		else{
		BMI=weight/(height*height);
		if(BMI<18.5){
			cout<<"You are under weight"<<endl;
		}
		else if(BMI>=18.5 && BMI<=24.5){
			cout<<"You are normal weight"<<endl;
		}
		else{
			cout<<"You are over weight "<<endl;
		}
		cout<<"If you don't want to continue press 0 otherwise press any key to continue. "<<endl;
		cin>>num;
		if(num=='0')
		break; }}
	}
	return 0;
}
