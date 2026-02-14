#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

class Test {
    const char *s2, *s3, *s1;

    public:
        Test(const char* _s1, const char* _s2, const char* _s3):
        s1(setS1(_s1)), s2(setS1(_s2)), s3(setS1(_s3)) {}

        const char* setS1(const char* s) {
            cout << s << " ";
            //return strdup(s);
        }
};

int main() {

    Test obj("prog", "modern", "lol");
}