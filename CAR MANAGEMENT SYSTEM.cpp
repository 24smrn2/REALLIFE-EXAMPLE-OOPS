

#include <iostream>
using namespace std;

// Define the Car class
class Car {
public:
    // Attributes
    string brand;
    string model;
    int mileage;

    // Constructor to initialize the car
    Car(string b, string m, int mil) : brand(b), model(m), mileage(mil) {}

    // Method to drive the car
    void drive(int distance) {
        mileage += distance;
    }

    // Method to display car details
    void show_data() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Create an object of Car class
    Car myCar("Toyota", "Corolla", 5000);

    // Drive the car
    myCar.drive(150);

    // Display car details
    myCar.show_data();

    return 0;
}
