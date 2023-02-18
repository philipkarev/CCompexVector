#include "CCompexVector.h"

CCV::CCV(compex *a, int len) {

    this->len = len;

    brr = new compex[len];
    for (int i = 0; i < len; i++) {
        brr[i] = a[i];
    }
}


CCV::~CCV() {

    if (len > 0)
        delete[] brr;
}


CCV::CCV(const CCV &b) {

    this->len = b.len;

    brr = new compex[len];
    for (int i = 0; i < len; i++) {
        this->brr[i] = b.brr[i];
    }
}


CCV::CCV(CCV &&obj) noexcept {

brr = obj.brr;
len = obj.len;
obj.
len = 0;
}


CCV &CCV::operator=(const CCV &b) {

    this->len = b.len;

    brr = new compex[len];
    for (int i = 0; i < len; i++)
        this->brr[i] = b.brr[i];
    return *this;
}


CCV &CCV::operator=(CCV &&obj)

noexcept {

if (&obj == this)
return *this;
delete[]
brr;
len = obj.len;
brr = obj.brr;
obj.
len = 0;
return *this;
}


CCV CCV::operator+(const CCV &a) const {

    int l = (a.len > this->len ? this->len : a.len);
    CCV crr = CCV(a.brr, l);
    for (int i = 0; i < l; i++)
        crr.brr[i] = this->brr[i] + a.brr[i];
    return crr;
}


CCV CCV::operator-(const CCV &a) const {

    int l = (a.len > this->len ? this->len : a.len);
    CCV crr = CCV(a.brr, l);
    for (int i = 0; i < l; i++)
        crr.brr[i] = this->brr[i] - a.brr[i];
    return crr;
}


compex CCV::operator*(const CCV &a) const { // scalar product

    compex r(0, 0); // result of scalar product

    for (int i = 0; i < (a.len > this->len ? this->len : a.len); ++i) // evaluate scalar product at the beginning
        r = r + this->brr[i] * a.brr[i];

    return r;
}


CCV &CCV::operator++() { // prefix

    compex *crr = new compex[this->len + 1];
    crr[0] = (this->brr)[0];
    for (int i = 0; i < this->len; ++i)
        crr[i + 1] = (this->brr)[i];
    delete[] this->brr;
    ++(this->len);
    for (int i = 0; i < this->len; ++i)
        this->brr[i] = crr[i];

    return *this;
}


CCV &CCV::operator--() { // prefix

    if (len > 1) {
        compex *crr = new compex[len - 1];
        for (int i = 0; i < this->len - 1; ++i)
            crr[i] = (this->brr)[i + 1];
        delete[] this->brr;
        --(this->len);
        for (int i = 0; i < this->len; ++i)
            this->brr[i] = crr[i];
        return *this;
    }
    else
        cout << "\nError: incorrect data. Decrement operation is unavailable" << endl;
    return *this;
}


CCV CCV::operator++(int) { // postfix

    CCV tmp(*this);

    compex *crr = new compex[tmp.len + 1];
    for (int i = 0; i < tmp.len; ++i)
        crr[i] = tmp.brr[i];
    crr[tmp.len] = tmp.brr[tmp.len - 1];

    CCV res(crr, tmp.len + 1);

    return res;
}


CCV CCV::operator--(int) { // postfix

    CCV tmp(*this);
    if (tmp.len > 1) {
        (tmp.len)--;
    }
    else {
        cout << "\nError: incorrect data. Decrement operation is unavailable" << endl;
    }

    return tmp;
}


ostream &operator<<(ostream &stream, const CCV &s) {

    stream << "[";
    for (int i = 0; i < s.len; i++) {
        if (i != 0) {
            stream << ", ";
        }
        stream << s.brr[i];
    }
    stream << "]" << endl;
    return stream;
}