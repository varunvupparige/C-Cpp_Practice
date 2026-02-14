// this script implements binary search algorithm without using any library

#include <iostream>
#include <algorithm> // only for qsort
using namespace std;

void bsearch(int* data, int high, int low, int ele) {
    int mid;
    mid = low + (high - low)/2;
    
    if (low <= high) {
        if (data[mid] == ele) {
            cout << "Found at " << mid << endl;
        }
        else if(data[mid] > ele) {
            bsearch(data,mid-1,low,ele);
        }
        else {
            bsearch(data,high,mid+1,ele);
        }
    }
    else {
        cout << "not found" << endl;
        return;
    }
}

int main() {

    int input_data[] = {23, 12, 0, 8, 99, 1};
    int size = sizeof(input_data)/ sizeof(input_data[0]);
    sort(input_data, input_data + size);
    bsearch(input_data,size,0,12);
}