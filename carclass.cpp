#include <iostream>
#include <string>
#include <vector> // Needed for using std::vector
using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
// Public attributes for now; we will discuss "private" and "protected" next week
    string VIN; // Vehicle Identification Number (should be unique for each car)
    string make; // Car brand (e.g., Toyota, Ford)
    string model; // Specific model (e.g., Corolla, Mustang)
    int year; // Manufacturing year
    double mileage; // Current mileage of the car
    vector<string> owners; // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;

        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main() {
// Creating a list of four previous owners
vector<string> owners = {"Mary Brown", "Max Cooper", "Jordan Miller", "Jessica Wilson"};

// Instantiating a Car object using the constructor,
Car carObj("1G1AF1F57A7192174", "Toyota", "Corolla", 2012, 183400.0, owners);

// Displaying car details using the displayInfo method
carObj.displayInfo();

return 0;

}

// What attributes--if any--should be private, and why?
/*
The VIN, make, model, year, mileage, and owners attributes should be private because they represent sensitive
information. For example, the VIN is unique to each car, while the make, model, year, and mileage are 
important details that should not be modified incorrectly. The owners' list also contains personal data that 
should be protected. All of this information should not be accessed directly from outside the class. Instead,
public methods should be used to safely access and modify these attributes. This encapsulation ensures better 
security and protection of data through controlled access.
*/
