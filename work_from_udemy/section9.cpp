//
// Created by Keertikumar Kubareea on 2024-03-12.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/*
 * Section 9: Controlling Program Flow
 * Topics covered: if-statements, switch-case, for & while loops, nested conditions and nested loops
 * NOTES:
 *
 */

int main() {
 // cout << "Start of Project 1: Letter grade" << endl;
 //
 // int score {};
 //
 // /*
 //  * Input validation below using do-while loop
 //  */
 // do {
 //  cout << "Please enter your score on the exam (0 - 100): ";
 //  cin >> score;
 //  if (score < 0 or score > 100) {
 //   cout << "Invalid score. Valid range is 0 - 100." << endl;
 //  }
 // } while(score < 0 or score > 100);
 // cout << "Score of " << score << " is in the valid range of 0 - 100. " << endl;
 //
 // //Input validation done!
 //
 // string letter_grade {};
 // if (score > 90) {
 //  if (score >= 95) {
 //   letter_grade = "A+";
 //  } else {
 //   letter_grade = 'A';
 //  }
 // }
 // else if (score > 80)
 //  letter_grade = 'B';
 // else if (score > 70)
 //  letter_grade = 'C';
 // else if (score > 60)
 //  letter_grade = 'D';
 // else
 //  letter_grade = 'F';
 // cout << "A score of " << score << " is a letter grade of: " << letter_grade << endl;
 // cout << "End of Project 1" << endl;

 // cout << "Start of Project 2: Money loan" << endl;
 //
 // const vector<double> loans {180.83, 200.10, 310.90, 400.90, 700.10};
 // double total {0.0};
 // double avg {};
 //
 // // Ranged-based for-loop
 // for (auto one_loan : loans) {
 //  total += one_loan;
 // }
 //
 // avg = total / loans.size();
 //
 // // From <iomanip> to set the decimal places to 2
 // cout << fixed << setprecision(2);
 // cout << "I am owed an average of $" << avg << " by " << loans.size() << " people!" << endl;
 //
 // cout << "End of Project 2" << endl;

 // cout << "Start of Project 3: String iteration" << endl;
 // for (auto character : "My name is Jarvis") {
 //  //Replace all space characters by @
 //  if (character != ' ') {
 //   cout << character;
 //  } else {
 //   cout << '@';
 //  }
 // }
 // cout << endl;
 // cout << "End of Project 3" << endl;

 // cout << "Start of Project 4: Do-while loop Menu Application" << endl;
 //
 // char choice {};
 //
 // do {
 //  cout << "===================" << endl;
 //  cout << "Make your choice: " << endl;
 //  cout << "1 - Do this" << endl;
 //  cout << "2 - Do that" << endl;
 //  cout << "3 - Do something else" << endl;
 //  cout << "Q/q - Quit" << endl;
 //  cout << endl;
 //  cout << "Your choice: ";
 //  cin >> choice;
 //  cout << "You chose " << choice << " - ";
 //  switch (choice) {
 //   case '1':
 //    cout << "doing this ..." << endl;
 //    break;
 //   case '2':
 //    cout << "doing that ..." << endl;
 //    break;
 //   case '3':
 //    cout << "doing something else ..." << endl;
 //    break;
 //   case 'q':
 //    case 'Q':
 //     cout << "Quitting Application ..." << endl;
 //     break;
 //   default:
 //    cout << "Illegal entry - Try Again" << endl;
 //  }
 // } while (choice != 'q' and choice != 'Q');
 //
 // cout << "Thanks for using our Application" << endl;
 //
 // cout << "End of Project 4" << endl;

 // cout << "Start of Project 5: Nested Loops" << endl;
 //
 // vector<vector<int>> vector_2d  //vector containing vectors which contain integers
 // {
 //  {1, 2, 3},
 //  {10, 20, 30, 40},
 //  {100, 200, 300, 400, 500}
 // };
 //
 // for (auto vec : vector_2d) {
 //  for (auto value : vec) {
 //   cout << value << " ";
 //  }
 //  cout << endl;
 // }
 //
 // cout << "End of Project 5" << endl;

 cout << "Start of Section Challenge" << endl;

 vector<int> nums {};
 char choice {};
 bool quit_requested{false};


 double total{};
 double mean{};

 int max{};
 int min{};

 cout << "Welcome to the Number System!" << endl;

 do {
  cout << "What would you like to do? " << endl;
  cout << "P - Print the numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display the Mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the Largest number" << endl;
  cout << "Q - Quit the application" << endl;
  cout << "Make your choice: ";
  cin >> choice;
  cout << endl;

  if (choice == 'p' || choice == 'P') {
   if (nums.empty()) {
    cout << "[] - List of integers is empty" << endl;
    continue;
   } else {
    cout << "List of numbers: [ ";
    for (int i{0}; i < nums.size(); i ++) {
     cout << nums.at(i) << " ";
    }
    cout << "]" << endl;
   }
  } else if (choice == 'a' || choice == 'A') {
   int num{};
   cout << "What number would you like to add?: ";
   cin >> num;
   cout << endl;
   cout << "Thank you!" << endl;
   nums.push_back(num);
   cout << num << " has been added. " << endl;
  } else if (choice == 'm' || choice == 'M') {

   if (nums.empty()) {
    cout << "There are no numbers in the list! " << endl;
    continue;
   }

   for (int i {0}; i < nums.size(); i ++) {
    total += nums.at(i);
   }
   mean = total / nums.size();

   cout << fixed << setprecision(2);
   cout << "The calculated mean of the " << nums.size() << " numbers = " << mean << endl;

   //reset the variables
   total = 0.00;
   mean = 0.00;

  }else if (choice == 's' || choice == 'S') {

   if (nums.empty()) {
    cout << "There are no numbers in the list! " << endl;
    continue;
   }

   min = nums.at(0);

   for (int i {1}; i < nums.size(); i ++) {
    if (nums.at(i) < min) {
     min = nums.at(i);
    }
   }
   cout << "The smallest number is " << min << endl;

  } else if (choice == 'l' || choice == 'L') {

   if (nums.empty()) {
    cout << "There are no numbers in the list! " << endl;
    continue;
   }

   max = nums.at(0);

   for (int i {1}; i < nums.size(); i ++) {
    if (nums.at(i) > max) {
     max = nums.at(i);
    }
   }
   cout << "The largest number is " << max << endl;

  }else if (choice == 'q' || choice == 'Q') {
   quit_requested = true;
  }else {
   //Illegal entry
   cout << choice << " is an illegal choice entry. Please try again." << endl;
  }
  cout << "-------------------------------------" << endl;
 } while(!quit_requested);


 cout << "End of Section Challenge" << endl;

 return 0;
}