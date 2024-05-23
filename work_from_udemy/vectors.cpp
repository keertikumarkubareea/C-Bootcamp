// vectors - when we do not know the actual size of the data structure
// vector is a dynamic array
// part of the standard template library
/**
 * can grow/shrink at execution time
 * similar semantics and syntax as arrays
 * very efficient
 * provide bounds checking
 * cool functions: sort, reverse, find and more
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <char> vowels;
    /*vector <int> test_scores (5); constructor-like specifying the size of the vector. */

    vector <int> test_scores {50, 30, 60, 20, 10};

    int first_score = test_scores.at(0); //.at operation with the index as argument
    int second_score = test_scores.at(1);

    //push_back -> append in Java -> increases the size dynamically
    cout<<first_score<<endl;
    cout<<second_score<<endl;

    return 0;
}

