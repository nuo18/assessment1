#include <random>
#include <iostream>
#include <algorithm>

//Properties for the RNG
std::random_device device;
std::mt19937 randomGenerator(device());

/// <summary>
/// Returns a random integer between {min} and {max}
/// </summary>
/// <param name="min">The minimum value</param>
/// <param name="max">The maximum value</param>
/// <returns>A random integer</returns>
int random(int min, int max)
{
    //We have to do this because if the ranges aren't
    //ordered then C++ will throw an error
    int trueMin = std::min(min, max);
    int trueMax = std::max(max, min);

    //Build a uniform distribution
    std::uniform_int_distribution<int> udist(trueMin, trueMax);

    //Sample the distribution using the generator
    return udist(randomGenerator);
}