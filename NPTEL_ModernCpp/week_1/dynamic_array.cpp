// This script shows different ways of constructing a dynamically sized array

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Enter number of elements" << endl;
    int count;
    cin >> count;

    vector<int> arr1(count,0);
    arr1.resize(count+1);

    int* arr2 = (int *) malloc(sizeof(int)*count);
    for(int i = 0; i < count; ++i) {
        arr2[i] = i;
    }

    int *arr3 = new int[count];
    for(int i = 0; i < count; ++i) {
        arr3[i] = i;
    }
}