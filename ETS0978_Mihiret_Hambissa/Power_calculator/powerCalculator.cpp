#include <iostream>
#include <cmath> 
using namespace std;

int main() {

    double x, y, result;


    cout << "Enter the value of x (base): ";
    cin >> x;
    cout << "Enter the value of y (exponent): ";
    cin >> y;

    result = pow(x, y);

    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
