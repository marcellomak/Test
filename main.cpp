#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>
#include <climits>
#include "functional1.hpp"

double halfnumber(double x);

int main(int argc, char* argv[])
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n"; cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}

double halfnumber(double x)
{
    x = x/2;
    return x;
}
