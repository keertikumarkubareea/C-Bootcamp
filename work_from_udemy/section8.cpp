//
// Created by Keertikumar Kubareea on 2024-03-05.
//
#include <iostream>
#include <vector>
using namespace std;

/**
 * Section 8: Statements and operators
 * NOTES:
 * most operators are binary - operate on 2 operands
 * Some are unary = operate on 1 operate
 * @return
 */
int main() {

    // cout << "Project 1: Converting Euros to USD (1 EURO = 1.09 USD)" << endl;
    // const double factor {1.09};
    // double amount_eu {0.0};
    // cout << "Enter your amount of money in EUROs: ";
    // cin >> amount_eu;
    // cout << endl;
    // double amount_usd = amount_eu * factor;
    // cout << "Equivalent amount in USD = $" << amount_usd << " USD" << endl;
    // cout << "END of Project 1" << endl;

    // cout << "Project 2: Cast Typing for average" << endl;
    // int num1{}, num2{}, num3{};
    // int total {0};
    // const int count {3};
    // cout << "Please enter 3 numbers separated by spaces: ";
    // cin >> num1 >> num2 >> num3;
    // total = num1 + num2 + num3;
    // cout << "Total = " << total << endl;
    // double avg {0.0};
    // // avg = total / count; // No type casting - integer - loss of information due to truncation
    // avg = static_cast<double> (total) / count; // Type cast total from int to double. count will be promoted to double too
    // cout << "Average = " << avg << endl;
    // cout << "END of Project 2" << endl;

    // cout << "Project 3: Testing for equality" << endl;
    //
    // bool equal_result {false};
    // bool not_equal_result {false};
    //
    // cout << boolalpha; // when invoked, the results of bool variables will be true/false instead of 1/0
    // Use this for relational operators as well
    // int num1{}, num2{};
    // cout << "Enter 2 numbers: ";
    // cin >> num1 >> num2;
    // cout << endl;
    //
    // equal_result = num1 == num2;
    // cout << "Equal?: " << equal_result << endl;

    // char char1{}, char2{};
    // cout << "Enter 2 chars: ";
    // cin >> char1 >> char2;
    // cout << endl;
    // equal_result = char1 == char2;
    // cout << "Equal?: " << equal_result << endl;

    /*
     * Can work with doubles but be careful with approximations. 12.0 will be equal to 11.9999999999
     * C++ stores doubles as approximations
     * There will be specific libraries to compare these
     *
     */

    // cout << "END of Project 3" << endl;

    cout << "Start of Section Challenge" << endl;
    /*
     * 1 dollar = 100 cents
     * 1 quarter = 25 cents
     * 1 dime = 10 cents
     * 1 nickel = 5 cents
     * 1 penny = 1 cent
     */

    cout << "Please enter your amount in cents: ";
    int cents {0};
    cin >> cents;
    int dollars {cents / 100};
    cents %= 100;
    int quarter {cents / 25};
    cents %= 25;
    int dime {cents / 10};
    cents %= 10;
    int nickel {cents / 5};
    cents %= 5;
    int penny {cents / 1};
    cout << "You need: " << dollars << " dollars, " << quarter << " quarters, ";
    cout << dime << " dimes, " << nickel << " nickels, and " << penny << " pennies." << endl;

    cout << "End of Section Challenge" << endl;
    return 0;
}

