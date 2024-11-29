#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x,y,result;
  cout<<"enter the base of the number:";
  cin>>x;
  cout<<"enter the power of the number:";
  cin>>y;
  result=pow(x,y);
  cout<<x<<" power of "<<y<<" = "<<result;
  return 0;
}
