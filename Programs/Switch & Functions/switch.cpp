#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    char ch;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
        break;
    case '*':
        cout << a * b;
        break;
    default:
        cout << "Invalid operation";
    }
    return 0;
}