#include <iostream>
using namespace std;

int main() {
   
    double tankCapacity, milesPerGallon, totalMiles;


    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tankCapacity;

 
    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;


    totalMiles = tankCapacity * milesPerGallon;


    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;

    return 0;
    
}
