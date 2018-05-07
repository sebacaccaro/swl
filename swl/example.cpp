#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    b += 3;
    a += b;
    a = a * 4;
    a = a / 4;
    a = a * b;
    if( a > b ){
        b += a;
    }
    else {
        a += b;
        if( ( a != b && a > b ) ){
            cout << a << endl;
        }
    }
    while( a > b ){
        b += 1;
    }
    b += a;
    cout << b << endl;
    cout << 3 << endl;
}
