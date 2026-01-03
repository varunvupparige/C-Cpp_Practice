#include <array>
#include <vector>
#include <string>
#include <iostream>

int main() {

    std::array<std::string,3> players = {"Cris","Leo","Luis"};

    std::vector<int> countdown = {3,2,1};
    
    // element access
    std::cout << players[0] << "\n";
    std::cout << countdown.front() << "\n";
    std::cout << players.back() << "\n";

    // vector modifiers
    countdown.pop_back();
    countdown.emplace_back("Zlatan");

}