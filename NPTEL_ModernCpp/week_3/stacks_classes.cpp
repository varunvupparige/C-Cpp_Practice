#include <iostream>
using namespace std;

class Stack {
    int top;
    char s[100];
    public:
        Stack() : top(-1) { }
        void push(char a) { s[++top] = a; }
        char pop() { return s[top--]; }
        void top_ele() {
            cout << s[top] << endl; 
        }
        bool isempty() { return (top == -1); }
};


int main() {
    Stack s;
    s.push('A'); s.push('B');
    s.top_ele();

    char L = s.pop();
    cout << L << endl;
    s.top_ele();

    if(s.isempty()) { cout << "Empty" << endl;}
    else { cout << "Not Empty" << endl; }
}
