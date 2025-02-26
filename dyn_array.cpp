/**
 * @file dyn_array.cpp
 * @brief A dynamic array demonstration program.
 *
 * A program that demonstrates dynamic allocation of arrays
 * on the heap.
 *
 * @author Brody Lee (blee20@georgefox.edu)
 */

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[])
{
    try {    
        // Check arg count
        if (argc != 2) {
            throw std::invalid_argument("Error: Invalid argument count");
        }
    
        // Determine array capacity from command-line args
        auto capacity = static_cast<unsigned long long>(*argv[1]);
    
        // Dynamically allocate array
        auto arr = new unsigned long long[capacity];
    
        // Populate array
        for (int i = 0; i < capacity; i++) {
            arr[i] = pow(2, i);
        }
    
        // Iterate through array and print contents to stdout
        for(int i = 0; i < capacity; i++) {
            std::cout << arr[i] << std::endl;
        }
    
        // Free allocated array
        delete[] arr;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
}

