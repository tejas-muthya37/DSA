#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;

    // int n = 10;
    // int a = 0;
    // int b = 1;

    // cout << a << ' ' << b << ' ';

    // for (int i = 1; i <= n; i++)
    // {
    //     int nextNumber = a + b;
    //     cout << nextNumber << ' ';
    //     a = b;
    //     b = nextNumber;
    // }

    int n;
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= floor(n / 2); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "prime";
    else
        cout << "not a prime";

    return 0;
}