/*
Cleaning service

$25 for small rooms
$35 for large rooms
sales tax rate = 6%
estimates valid for 30 days

*/

#include <iostream>
using namespace std;

int main(){

    const double SMALL_ROOM_FEE = 25;
    const double LARGE_ROOM_FEE = 35;
    const double TAX = 0.06;
    const double DAYS_VALID = 30;

    int number_of_small_rooms = 0;
    int number_of_large_rooms = 0;
    double total_cost = 0;
    double cost_after_tax = 0;

    cout << "Hello, welcome to Vivek's Room cleaning Service!\n" << endl;
    cout << "How may small rooms would you liked cleaned?: "; cin >> number_of_small_rooms;
    cout << "How may large rooms would you liked cleaned?: "; cin >> number_of_large_rooms; 

    cout << "\nEstimates for carpet cleaning service: " << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl << endl;
    cout << "Price per small room: $" << SMALL_ROOM_FEE << endl;
    cout << "Price per large room: $" << LARGE_ROOM_FEE << endl << endl;
    
    total_cost = number_of_small_rooms * SMALL_ROOM_FEE + number_of_large_rooms * LARGE_ROOM_FEE;
    cost_after_tax = total_cost * (1 + TAX);

    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << TAX * total_cost << endl;
    cout << "===================================================" << endl;
    cout << "Total estimate: $" << cost_after_tax << endl;
    cout << "This estimate is valid for " << DAYS_VALID << " days" << endl;


    return 0;
}