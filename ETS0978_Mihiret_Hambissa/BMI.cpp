#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

// Function to determine BMI category
string determineBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        return "Normal weight";
    } else {
        return "Overweight";
    }
}

int main() {
    char choice;
    do {
        double weight, height;

        // Input weight and height
        cout << "Enter weight (in kg): ";
        cin >> weight;

        cout << "Enter height (in meters): ";
        cin >> height;

        // Validate height and weight
        if (weight <= 0 || height <= 0) {
            cout << "Invalid input! Weight and height must be positive values.\n";
            continue; // Restart loop if invalid input
        }

        // Calculate BMI
        double bmi = calculateBMI(weight, height);

        // Display BMI and category
        cout << fixed << setprecision(2);
        cout << "Your BMI: " << bmi << "\n";
        cout << "Category: " << determineBMICategory(bmi) << "\n";

        // Ask if user wants to calculate for another person
        cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated. Stay healthy!\n";
    return 0;
}
