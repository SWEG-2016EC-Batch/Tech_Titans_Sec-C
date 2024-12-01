#include <iostream>

using namespace std;

int main() {
	float gallon,miles_per_gallon,mile;
	a:
		cout<<"Enter the capacity of your automobile fuel tank in gallons: ";
		cin>>gallon;
		if(cin.fail()||gallon<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto a;
		}
		b:
		cout<<"Enter the miles per gallon your automoblie can be driven: ";
		cin>>miles_per_gallon;
		if(cin.fail()||miles_per_gallon<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto b;
		}
		mile=miles_per_gallon*gallon;
		cout<<"The number of miles your automobile can drive without refueling is: "<<mile<<" miles"<<endl;
	return 0;
}
