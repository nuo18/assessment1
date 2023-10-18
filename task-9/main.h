#pragma once
#include <math.h>

//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

// Define a Vector2 structure
struct Vector2
{
    float x;
    float y;
};

// Euclidean distance formula
float GetDistanceBetweenPoints(Vector2 a, Vector2 b)
{
    float distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));

    return distance;
}

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance