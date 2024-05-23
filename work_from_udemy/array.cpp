// Section title: Arrays and Vectors (better than Arrays)
#include <iostream>
using namespace std;

//All elements of an array should be of the same type
/**
 * Fixed in size - cannot grow or shrink at runtime
 * elements of the same type
 * stored contiguously in memory
 * elements can be directly indexed
 * Must always be initialized
 * looping is used to process
*/

int main(){
    //declaring an array: type array_name [number of elements/size]
    int test_scores [5];

    double another_array [] = {1, 2, 3, 5, 6, 7, 8, 9}; //size calculated automatically
    int element_count = 0;
    for (double elem : another_array){
        cout << elem << endl;
        element_count ++;
    }
    cout << "Size of array: " << element_count << endl;

    //accessing individual array elements
    cout << "Second element in another_array is at index 1 and is = " << another_array[1] << endl;

    int scores [5] = {}; // all 5 values initialized to zero in this manner
    for (int num : scores){
        cout << num << endl;
    }

    // outputing the array
    cout << scores << endl;
    // get some hex number - memory address of the memory location where the array is stored



    return 0;
}




