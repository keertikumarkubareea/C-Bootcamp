#include <iostream>
using namespace std;

#include <vector>
vector <int> use_array(){

    int arr [10] = {};

    //first element = index 0
    //last element = index 9

    arr[0] = 100;
    arr[9] = 1000;
     

    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;

}