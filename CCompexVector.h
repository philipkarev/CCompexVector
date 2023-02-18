#pragma once 

#include "compex.h"

using namespace std;

class compex;

class CCV {

    compex* brr;
    int len = 0;
public:
    CCV(compex* a, int len);
    ~CCV();

    CCV(const CCV&);
    CCV(CCV&&) noexcept;

    CCV& operator=(const CCV&);
    CCV& operator=(CCV&& obj) noexcept;

    CCV operator+(const CCV& a) const; // return min of lengths
    CCV operator-(const CCV& a) const; // return min of lengths

    compex operator*(const CCV& a) const; // scalar product

    CCV& operator++();
    CCV& operator--();

    CCV operator++(int);
    CCV operator--(int);

    friend ostream& operator << (ostream&, const CCV&);
    friend CCV&& operator+(CCV&&, CCV&);
};