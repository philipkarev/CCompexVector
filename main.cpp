#include <iostream>

#include "compex.h"
#include "CCompexVector.h"

int main(){

    compex c(10,20), b(10,10);
    cout << "c = " << c << endl;

    c = c - b;

    cout << "c - b = " << c << endl;
//    cout << "c - b = " << c - b << endl;

    return 0;
}

