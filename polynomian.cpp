#include <iostream>
#include <string>
#include <vector>
#include "polynomian.h"

vector<int> stopien(const vector<string> &a, const vector<string> &b)
{
    size_t stopien1 = a.size();
    size_t stopien2 = b.size();
    vector<int> result = {static_cast<int>(stopien1-1), static_cast<int>(stopien2-1)};
    return result;
}

