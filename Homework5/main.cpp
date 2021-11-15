// Riley Johnston
// CS137
// Homework 5

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int SIZE = 5;
    Package *boxes[SIZE];
    double total = 0.0;
    
    OvernightPackage box1("Bruce Wayne", "10000 Gotham Drive", "Gotham", "NY", "21032", "Barry Allen", "1567 Crimson Ave", "Central City", "IL", "43776", 98.5, 6.50, 2.50);
    
    OvernightPackage box2("John Stewart", "50 Space Way", "San Diego", "CA", "90002", "Diana Prince", "6767 Amazon Street", "Louisville", "KY", "41313", 42.00, 3.50, 1.75);
    
    TwoDayPackage box3("Victor Stone", "111 Super Lane", "Miami", "FL", "11778", "Arthur Curry", "50 Fish Face Plaza", "Providence", "RI", "67432", 235.8, 3.65, 20.00);
    
    TwoDayPackage box4("Harley Quinn", "1234 Go Street", "Arkham City", "NY", "22123", "Selena Kyle", "231 Feline Ave", "Portland", "OR", "87904", 76.3, 8.8, 14.50);
    
    TwoDayPackage box5("Oliver Queen", "550 Arrow Court", "Starling City", "NY", "70776", "Malcolm Merlyn", "1234 Archer Place", "New York City", "NY", "11259", 15.2, 4.4, 150.0);
    
    boxes[0] = &box1;
    boxes[1] = &box2;
    boxes[2] = &box3;
    boxes[3] = &box4;
    boxes[4] = &box5;
    
    cout << fixed << setprecision(2);
    
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Box # " << i + 1 << endl;
        cout << "---------------------" << endl;
        boxes[i]->print();
        
        cout << "Shipping cost: $" << boxes[i]->calculateCost() << endl;
        cout << endl << endl;
        
        total += boxes[i]->calculateCost();
    }
    
    cout << endl << endl;
    cout << "Grand total for ALL packages sent: $" << total << endl << endl;
    
    
    return 0;
}
