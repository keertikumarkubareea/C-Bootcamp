#include <iostream>
using namespace std;

// element_type array_name [dimension_1_size] [dimension_2_size];
//int movie_rating [3][4]; // not initialized. 3 rows and 4 columns. Total number of elements = 12 integers
// int movie_rating [rows] [columns];

// declaring the array :

int main(){
    int movie_rating [3][4] = 
        {
            {0, 1, 2, 3},
            {0, 0, 0, 5},
            {5, 3, 3, 2}
        };
        
    return 0;
}

