#include <iostream>
#include "call.h"

using namespace std;

namespace call {
    int _cdecl cdevl(int a, int b, int c) { return (a + b + c); };
    int _stdcall cstd(int& a, int b, int c) { return (a * b * c); };
    int _fastcall cfst(int a, int b, int c, int d) { return (a + b + c + d); };
}


int main()
{

    int x = 3;
    int& y = x;
    int rc_cdecl = call::cdevl(2, 3, 4);
    int rc_stdcall = call::cstd(y, 3, 4);
    int rc_fastcall = call::cfst(2, 3, 4, 50);

    cout << rc_cdecl << endl;
    cout << rc_stdcall << endl;
    cout << rc_fastcall << endl;

    return 0;
}
