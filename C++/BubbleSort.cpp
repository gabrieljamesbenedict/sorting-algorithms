#include <iostream>
#include <iomanip>
#include <cstdlib>

int main() {

    srand(time(0));

    int size = 10;
    int nums[size];


    // Assign Random Values
    for (int i = 0; i < size; i++) {
        nums[i] = rand()%100 + 1;
    }


    // Display Original Array
    for (int i = 0; i < size; i++) {

    }

    return 0;
}