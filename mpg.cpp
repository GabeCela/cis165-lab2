#include <iostream>
using namespace std;

int main() {
    float tank_capacity = 16;
    float travel_capacity = 312;
    float miles_per_gallon;
    
    miles_per_gallon = travel_capacity / tank_capacity;

    cout << "Fuel Usage in Miles per Gallon: " << miles_per_gallon << endl;

    return 0;
}
