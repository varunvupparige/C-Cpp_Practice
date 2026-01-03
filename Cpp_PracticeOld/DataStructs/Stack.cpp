#include <iostream>

#define MAX_SIZE 100

template <typename T>
class Stack{

    private:
    
        T data[MAX_SIZE];
        int top_index;

    public:

        Stack() : top_index(-1) {}

        bool empty() {
            return bool(top_index < 0);
        }

        int size() {
            return (top_index + 1);
        }

        T top() {
            return (data[top_index]);
        }

        bool push(T new_data) {
            if (top_index >= MAX_SIZE - 1) {
                std::cout << "Max size of stack reached!!! \n";
                return false;
            }

            data[++top_index] = new_data;
            return true;
        }

        bool pop() {
            if (top_index < 0) {
                std::cout << "Nothing left to pop!!! \n";
                return false;
            }

            --top_index;
            return true;
        }
};

int main() {

    Stack<int> s;

    s.push(15);
    s.push(20);
    s.push(25);

    std::cout << s.top() << "\n";
    std::cout << s.empty() << "\n";

    s.pop();

    std::cout << s.top() << "\n";

}