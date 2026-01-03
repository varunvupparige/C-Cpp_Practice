#include <iostream>
#include <string.h>
#include <vector>

#define N 100

using namespace std;

class RingBuffer {
    
    private:
        int head;
        int tail;
        int size;
        int capacity;
        std::vector<int> buffer;

    public:
        RingBuffer(int Cap) {
            capacity = Cap;
            head = 0;
            tail = 0;
            size = 0;
            buffer = std::vector<int>(Cap);
        }

        void write(int data) {

            if(size == capacity) {
                std::cout << "Can't write, no space; Try overwriting";
                return;
            }
            
            buffer[tail] = data;
            tail = (tail + 1) % capacity;
        }

        void overwrite(int data) {

            if(size != capacity) {
                write(data);
            }
            else {
                buffer[tail] = data;
                head = (head + 1) % capacity;
                tail = (tail + 1) % capacity;
            }
        }

        void clear() {
            head = 0;
            tail = 0;
            size = 0;
        }

        bool is_empty() {
            return (size == 0);
        }
};