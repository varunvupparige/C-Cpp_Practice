#include <iostream>
#include <algorithm>

void rotate_custom(int *start,  int *rotate_pt, int *end) {

    int size = (int)(end - start);

    std::reverse(start, rotate_pt);
    std::reverse(rotate_pt, end);
    std::reverse(start, end);   
}

int main() {

    int data[] = {1, 2, 3, 4, 5};
    rotate_custom(data, data + 2, data + 5);

    for(auto i: data) {
        std::cout << i << " " ;
    }
}