#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>

# include "functional1.hpp"

std::vector<double> discount_factor(const std::vector<double> rate, const std::vector<double> maturity)
{
    std::size_t size = rate.size();
    std::vector<double> res(size);
    for(size_t i = 0; i < size; ++i)
    {
        res[i] = std::exp(-rate[i] * maturity[i]);
    }
    return res;
}

double discount_factor(double rate, double maturity)
{
    double res = std::exp(-rate * maturity);
    return res;
}

