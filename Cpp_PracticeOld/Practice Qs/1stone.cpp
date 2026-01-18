// Background:
// You have a linear actuator that ran some test between two hardstops
// we know the location of the hardstops with respect to a defined origin (hardstop_min_mm, hardstop_max_mm).
// During the test the linear actuator hit both hard stops and all encoder_data was logged into the "data" vector.
//
// Request: Write a function that converts the data vector into millimeters. 
// * Convert the data in place.
// * Implement the function rescale and call it as provided.
// * Don't rely on std library or c math functions (no sort, min, max) etc. feel free to write your own if needed
// * use printf std::cout doesn't seem to work in coderpad
// * use pen & paper if you'd like

#include <iostream>
#include <vector>
#include <cassert>


void rescale(std::vector<uint8_t>& data, uint8_t hardstop_min, uint8_t hardstop_max) {

    int size = static_cast<int>(data.size());

    uint8_t max = data[0];
    uint8_t min = data[0];

    for (int i = 0; i < size; ++i) {
        if (data[i] > max) { max = data[i]; }
        if (data[i] < min) { min = data[i]; }
    }

    float rescale_factor = static_cast<float>(hardstop_max - hardstop_min)/(max - min);

    for (int i = 0; i < size; ++i) {
        float data_converted = (data[i] - min) * rescale_factor + hardstop_min;
        data[i] = static_cast<uint8_t>(data_converted);
    }
}

int main() {

    std::vector<uint8_t> data = {3, 8, 36, 54, 24, 14, 36};
    const uint8_t hardstop_min_mm = 10;
    const uint8_t hardstop_max_mm = 25;

    rescale(data, hardstop_min_mm, hardstop_max_mm);

    for (int i = 0; i < data.size(); ++i) {
        printf("%d, ", data[i]);
    }
    printf("\n");
    
    return 0;

}