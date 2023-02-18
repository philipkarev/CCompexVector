#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

// class of compex numbers
class compex {
    int x, y; // x is real part of number, y is image part of number
public:
    compex();
    compex(int, int);

    //compex(const compex&);

    compex operator+(const compex &p) const;
    compex operator-(const compex &p) const;

    compex operator*(const compex &p) const;

    friend class CCV;
    friend ostream& operator<<(ostream& os, const compex& p);
};