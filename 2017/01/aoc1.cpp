#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    // Open the input file
    std::ifstream inputfile("input.txt");

    // Read in the input data
    std::string inputdata;
    inputfile >> inputdata;

    //std::cout << inputdata << "\n";
    std::cout << inputdata.size() << "\n";
}
