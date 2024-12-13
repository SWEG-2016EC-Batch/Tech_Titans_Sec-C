#include <iostream>

using namespace std;

int main() {
	float test, quiz, project, assignment, final, total_mark;
	a:
	cout<<"Enter your test result out of 15: ";
	cin>>test;
	if(cin.fail()|| test<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto a;
		}
		b:
	cout<<"Enter your quiz result out of 5: ";
	cin>>quiz;
	if(cin.fail()|| quiz<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto b;
		}
		c:
	cout<<"Enter your assignment result out of 10: ";
	cin>>assignment;
	if(cin.fail()|| assignment<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto c;
		}
		d:
	cout<<"Enter your project result out of 20: ";
	cin>>project;
	if(cin.fail()|| project<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto d;
		}
		e:
	cout<<"Enter your final exam result out of 50: ";
	cin>>final;
	if(cin.fail()|| final<0){
			cin.clear();
			cin.ignore();
			cout<<"Enter a proper input!"<<endl;
			goto e;
		}
	total_mark= test + quiz + assignment + project + final;
	if(total_mark>=90)
	cout<<"Your grade is A+"<<endl;
	else if(total_mark<=90 && total_mark>=80)
	cout<<"Your grade is A"<<endl;
	else if(total_mark<=80 && total_mark>=75)
	cout<<"Your grade is B+"<<endl;
	else if(total_mark<=75 && total_mark>=60)
	cout<<"Your grade is B"<<endl;
	else if(total_mark<=60 && total_mark>=55)
	cout<<"Your grade is C+"<<endl;
	else if(total_mark<=55 && total_mark>=45)
	cout<<"Your grade is C"<<endl;
	else if(total_mark<=45 && total_mark>=30)
	cout<<"Your grade is D"<<endl;
	else
	cout<<"Your grade is F"<<endl;
	return 0;
}