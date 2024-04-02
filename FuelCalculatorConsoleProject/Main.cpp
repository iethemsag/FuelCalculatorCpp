#include <iostream>
#include <string>
using namespace std;

int main() {

    // Basic Fuel Calculator Console Project

    string city; // we create variables
    float kmPeriodFuelConsumption; // we create variables
    float pathlength; // we create variables

    cout << "The city you will visit: "; // we write text to get input from the user
    getline(cin, city); // the text entered by the user is read to the end of the line and assigned to a string variable named "city".

    cout << "How many km does your car burn per hour? "; // we write text to get input from the user
    cin >> kmPeriodFuelConsumption; // we receive input from the user

    cout << "Distance to travel (km): "; // we write text to get input from the user
    cin >> pathlength; // we receive input from the user

    float toplamYakit = (pathlength / kmPeriodFuelConsumption); // we divide the input we receive from the user

    cout << city << " Fuel amount for the city: " << toplamYakit << " liter" << endl; // we print the inputs as output to the screen.

    return 0; // we use it to see that the project is running.
}

// writed Ibrahim Ethem Sag, @iethemsag