#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

using namespace complexnumbers;
int main()
{

    Complex c1(2, 3);
    Complex c2(c1);
    // cout << "Hello world";
    Complex c3;
    c3 = c2;
    cout << c1 << " " << c3 << endl;

    return 0;
}
