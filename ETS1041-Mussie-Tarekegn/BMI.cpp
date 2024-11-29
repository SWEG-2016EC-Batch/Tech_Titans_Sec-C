#include <iostream>

using namespace std;

int main()
{   int number;
cout<<"enter the number of people you want to calculate:";
cin>>number;
    float BMI,height,weight;
    char gender;
for(int i=1;i<=number;i++){
    cout<<"enter your height in meter:";
    cin>>height;
    cout<<"enter your weight in (kg):";
    cin>>weight;
    cout<<"enter your gender if you are male enter M else enter F:";
    cin>>gender;
    BMI=weight/(height*height);


    if((gender=='m'||gender=='M')&& BMI<20.5){
            cout<<"your BMI is:"<<BMI<<":You are underweight. A balanced diet and exercise might help you gain healthy weight."<<endl;
    }
    else if((gender=='m'||gender=='M')&&BMI>20.5&&BMI<26){
        cout<<"your BMI is:"<<BMI<<":Your weight is in the healthy range. Keep maintaining a healthy lifestyle!"<<endl;
    }
    else if((gender=='m'||gender=='M')&&BMI>26&&BMI<30){
        cout<<"your BMI is:"<<BMI<<":You are slightly above the healthy weight. Regular exercise and a balanced diet can help."<<endl;
    }
    else if ((gender=='f'||gender=='F')&&BMI<18.5){
        cout<<"your BMI is:"<<BMI<<":You are underweight. Consider consulting a nutritionist to improve your health"<<endl;

    }
    else if ((gender=='f'||gender=='F')&&BMI>18.5&&BMI<24){
        cout<<"your BMI is:"<<BMI<<":Your weight is within a healthy range. Great job maintaining your health!"<<endl;
    }
    else if ((gender=='f'||gender=='F')&&BMI>24&&BMI<30){
        cout<<"your BMI is:"<<BMI<<":You are slightly above the healthy weight range. Adopting healthy habits can help."<<endl;
    }
    else if(BMI>=30){
        cout<<"your BMI is:"<<BMI<<": Your BMI indicates obesity. It's important to seek advice from a healthcare provider."<<endl;
    }
    else{
        cout<<"please enter a valid gender!"<<endl;
    }

}

    return 0;
}
