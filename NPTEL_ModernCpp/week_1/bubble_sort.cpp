#include <iostream>

int main() {
    int data[] = {65, 15, 30, 89, 55};
    int temp;

    int size = sizeof(data)/sizeof(data[0]);

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (data[j] > data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    std::cout << "Sorted List:" << std::endl;

    for (int k = 0; k < size; ++k) {
        std::cout << data[k] <<" ";    
    }
}