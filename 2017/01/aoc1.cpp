// Calculates solution to Advent of Code 2017 Day 1

#include <cstdio>
#include <iostream>

int main(int argc, char** argv)
{
    // Open the input file
    std::FILE* file_id = std::fopen("input.txt", "r");

    unsigned int sum = 0;

    // Prime the loop by grabbing the first character
    unsigned int digit_current;
    std::fscanf(file_id, "%1u", &digit_current);

    // Save the first digit, we need it at the end
    unsigned int digit_first = digit_current;

    int digit_next = 0;

    // Keep looping until there are no more digits
    while (std::fscanf(file_id, "%1u", &digit_next) != EOF)
    {
        if (digit_current == digit_next)
        {
            sum += digit_current;
        }

        digit_current = digit_next;
    }

    // Handle the wrap-around at the end as a special case
    if (digit_first == digit_current)
    {
        sum += digit_current;
    }

    // Print the sum
    std::cout << sum << "\n";

    return 0;
}
