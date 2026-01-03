#include <stdio.h>
#include <iostream>
#include <vector>

#define N 100

using namespace std;

class CicrularBuffer {

    private:
        int front;
        int back;
        int capacity;
        int size;
        vector<int> buffer;

    public:
        CicrularBuffer(int cap) {
            capacity = cap;
            buffer = std::vector<int>(capacity);
            front = 0;
            back = 0;
            size = 0;
        }

        void write(int data) {

            if (size == capacity) {
                buffer[front] = data;
                front = (front + 1) % capacity;
                back = (back + 1) % capacity;
            }

            else {
                buffer[front] = data;
                front = (front + 1) % capacity;
            }
        }

        int read() {
            if (size <= 0) {
                std::cout << "nothing to read";
                return 0;
            }
            else {
                int val = buffer[back];
                back = (back + 1) % capacity;
                return val;
            }
        }

        void reset() {
            front = 0;
            back = 0;
            size = 0;
        }

        bool is_empty() {
            return size == 0;
        }

        bool is_full() {
            return size == capacity;
        }

};