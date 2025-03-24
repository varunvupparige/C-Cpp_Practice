#include <iostream>
#include <cmath>

using namespace std;


int main() {

    string cri = "Ronaldoooooo!";
    cout << cri.size() << endl;
    cout << cri.find("Ron",0) << endl;
    cout << cri.substr(8,3) << endl;

    cout << "Hello World" << endl;

    int num = 10;
    num = pow(num,5);
    cout << floor(4.8);
    cout << fmax(3,10);


    return 0;
}