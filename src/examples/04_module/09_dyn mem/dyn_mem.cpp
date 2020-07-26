//dyn_mem.cpp
#include "dyn_mem.h"
#include <iostream>

using namespace std;

int *growArray (int *p_values, int *size){
    *size *=2;
    int *p_new_values= new int[*size];
    for (int i=0; i < *size; ++i) {
        p_new_values[i]= p_values[i];
    }
     delete [] p_values;
     return p_new_values;
}

void printArray (int *p_values, int size, int elements_set) {
    cout << "The total size of the array is: "<< size << '\n';
    cout << "Number of slots set so far: "<< elements_set << '\n';
    cout << "Values in the array: \n";
    for (int i= 0; i < elements_set; ++i) {
        cout << "p_values[" << i << "]= "<< p_values[i] << '\n';
    }
}
