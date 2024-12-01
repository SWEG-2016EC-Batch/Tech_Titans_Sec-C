#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x,y,power;
	a:
		cout<<"Enter the number: ";
		cin>>x;
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto a;
		}
		b:
		cout<<"Enter the exponent: ";
		cin>>y;
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto b;
		}
		power=pow(x,y);
		cout<<"the number "<<x<<" raised to"<<y<<" is: "<<power<<endl;

  return 0;	
}
