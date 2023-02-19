#include <iostream>

#include "compex.h"
#include "CCompexVector.h"

int main(){

    compex ca(0,0), cb(1,1), cc(5,5), cd(10,10);
    /*
    cout << "ca = " << ca << endl;
    cout << "cb = " << cb << endl;
    cout << "cc = " << cc << endl;

    cout << "\nTests with operators of class compex:" << endl;
    cout << "cb + cc + cd = " << cb + cc + cd << endl;
    cout << "ca - cb = " << ca - cb << endl;
    cout << "ca + cb - cc - cd = " << ca + cb - cc - cd << endl;
    cout << "ca * cb = " << ca * cb << endl;
    cout << "cc * cd = " << cc * cd << endl;
    cout << "cb * cc = " << cb * cc << endl;
    */

    compex* cA3;
    cA3 = new compex[3];
    for (int i = 0; i < 3; ++i)
        cA3[i] = ca;

    compex* cB3;
    cB3 = new compex[3];
    for (int i = 0; i < 3; ++i)
        cB3[i] = cb;

    compex* cC3;
    cC3 = new compex[3];
    for (int i = 0; i < 3; ++i)
        cC3[i] = cc;

    compex* cD3;
    cD3 = new compex[3];
    for (int i = 0; i < 3; ++i)
        cD3[i] = cd;

    CCV ccvA(cA3, 3);
    CCV ccvB(cB3, 3);
    CCV ccvC(cC3, 3);
    CCV ccvD = CCV(cD3, 3); // testing copy constructor

    cout << "ccvB + ccvC = " << ccvB + ccvC;
    cout << "ccvB + ccvC - ccvD = " << ccvB + ccvC - ccvD;
    cout << "ccvA * ccvC = " << ccvA * ccvC << endl;
    cout << "ccvC * ccvD = " << ccvC * ccvD << endl;
    --ccvD;
    cout << "ccvD-- = " << ccvD; // prefix decrement is correct
//    ++ccvB;
//    cout << "ccvB = " << ccvB;
    cout << "ccvC * ccvD = " << ccvC * ccvD << endl;

    delete [] cA3;
    delete [] cB3;
    delete [] cC3;
    delete [] cD3;

    return 0;
}

