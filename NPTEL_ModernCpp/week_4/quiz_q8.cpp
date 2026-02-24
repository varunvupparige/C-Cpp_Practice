#include <iostream>
using namespace std;

class Config {
    int value;
    public:
        Config(int v) : value(v) { }
        int get() {
            return value;
        }
};

class System {
    static Config config;
    public:
        static int getConfig() {
            return config.get();
        }
};

Config System::config(1);

int main() {
    
    cout << System::getConfig << endl;
}