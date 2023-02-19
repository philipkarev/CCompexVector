#include "compex.h"


compex::compex() {

    this->x = 0;
    this->y = 0;
}


compex::compex(int x, int y) {

    this->x = x;
    this->y = y;
}


/*compex::compex(const compex& p) {
    compex(p.x, p.y);
}*/


compex compex::operator+(const compex &p) const {

    compex r(x + p.x, y + p.y);
    return r;
}


compex compex::operator-(const compex &p) const {

    compex r(x - p.x, y - p.y);
    return r;
}


compex compex::operator*(const compex &p) const {

    compex r(this -> x * p.x - this -> y * p.y, this -> x * p.y + this -> y * p.x);
    return r;
}


ostream& operator << (ostream& os, const compex& d) {

    os << d.x << " + " << d.y << "i";
    return os;
}