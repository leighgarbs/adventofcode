// Calculates solution to Advent of Code 2017 Day 2

#include <cstdio>
#include <iostream>
#include <vector>

unsigned int circind(unsigned int index, unsigned int length)
{
    return index % length;
}

int main(int argc, char** argv)
{
    // Open the input file
    std::FILE* file_id = std::fopen("../input.txt", "r");

    unsigned int sum = 0;

    // For this part everything goes into a vector first
    std::vector<unsigned int> inputdata_vec;

    unsigned int digit_current = 0;

    // Keep looping until there are no more digits
    while (std::fscanf(file_id, "%1u", &digit_current) != EOF)
    {
        inputdata_vec.push_back(digit_current);
    }

    // Now we have the whole list.  Go over it again and calculate the desired
    // sum
    unsigned int halflen = inputdata_vec.size() / 2;
    for (unsigned int i = 0; i < inputdata_vec.size(); i++)
    {
        if (inputdata_vec[i] ==
            inputdata_vec[circind(i + halflen, inputdata_vec.size())])
        {
            sum += inputdata_vec[i];
        }
    }

    //std::cout << inputdata_vec.size() << "\n"
    //          << index_circular(2152, inputdata_vec.size()) << "\n";

    // Print the sum
    std::cout << sum << "\n";

    return 0;
}
