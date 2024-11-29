#include <iostream>

using namespace std;

int main()
{
    float capacity_fule_tank,mile_pergallon,total_mile;
    cout<<"enter the tank capacity for gallon:";
    cin>>capacity_fule_tank;
    cout<<"enter mile per hour the automobile can drive:";
    cin>>mile_pergallon;
    total_mile=capacity_fule_tank*mile_pergallon;
    cout<<"The number of mile the automobile can drive without refueling is: "<<total_mile<<"miles";
    return 0;
}
