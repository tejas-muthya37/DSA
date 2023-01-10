#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int b = 2;

    cout << "a & b " << (a & b) << endl;
    cout << "a | b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a ^ b " << (a ^ b) << endl;
    cout << "a << b " << (a << b) << endl;
    cout << "a >> b " << (a >> b) << endl;
    cout << "a++ " << (a++) << endl;
    cout << "++a " << (++a) << endl;
    cout << "a-- " << (a--) << endl;
    cout << "--a " << (--a) << endl;

    return 0;
}