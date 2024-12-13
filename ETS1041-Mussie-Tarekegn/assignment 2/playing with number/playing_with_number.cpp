#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int choice,number,temp,di=0,rev=0,tr;
 
  do{
  cout<<"enter the question you want"<<endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. sum of First and last digit" << endl;
    cout << "5. Swap first and last digit" << endl;
    cout << "6. check weather it is Palindrome" << endl;
    cout << "7. Frequency of first digit" << endl;
    cout << "8. check weather it is Strong number" << endl;
    cout << "9. check weather it is Perfect number" << endl;
    
    cin>>choice;
      cout<<"enter the number"<<endl;
  cin>>number;
    switch(choice){
    case 1: {while(number>0){
    di=number%10;
    rev=10*rev+di;
    number=number/10;
    }
    cout<<rev<<":is the reverse number";

        break;}
        case 2:
            {

            int coun=0;
        while(number>0){
            coun++;
            number=number/10;
        }
        cout<<coun<<":is the digit number";

        break;}

        
        case 3:{int pro=1;
            while(number>0){
                di=number%10;
                if(di%2==0){
                    pro*=di;
                }
                number/=10;
            }
            cout<<pro<<":is the product of the even no";
           break;}
        case 4:{
               int last,first,sum=0;
           last=number%10;
           first=number;
           while(first>=10){
           first/=10;
           }
           sum=last+first;
           cout<<"the sum is:"<<sum<<",the first numb:"<<first<<",the last numb:"<<last;
          break; }
        case 5:{int temp=0,last,first,sum=0;
           last=number%10;
           first=number;
           while(first>=10){
           first/=10;
           }
           temp=last;
           last=first;
           first=temp;
           cout<<"last"<<last<<endl;
           cout<<"first"<<first<<endl;
            break;
           }
        case 6:{temp=number;
           while(number>0){
            di=number%10;
            rev=rev*10+di;
            number/=10;
           }
           if(rev==temp){
            cout<<"it is palanidirom";
           }
           else{
            cout<<"it is not pala";
           }
           break;
           }
        case 7: { int first,coun=0,temp=number;
           first=number;
           while(first>=10){
            first/=10;
           }
           while(temp>0){

            if(temp%10==first){
                coun++;


            }
           temp/=10;
           }
            cout<<"the frequency of the first number is:"<<coun;
           break;
           }
        
        case 8:{
               int sfac=0,fac,temp=number;
               while(number>0){
                di=number%10;
                fac=1;
                for(int i=1;i<=di;i++){
                    fac*=i;
                }
                sfac+=fac;
                number/=10;
               }
               if(sfac==temp){
                cout<<"it is strong number";

               }
               else{
                cout<<"it is not strong number";
               }
                break;}
        case 9:{
                int sumOfDivisors = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
                sumOfDivisors += i;
        }
        if (sumOfDivisors == number)
            cout << "The number is a Perfect number." << endl;
        else
            cout << "The number is not a Perfect number." << endl;
        break;
    }


}cout<<"\nenter 1 to continue and zero to terminate: ";
  cin>>tr;}
  while(tr==1);
  cout<<"\nthank you for using our program !";
    return 0;
}