#include <iostream>
#include <math.h>
using namespace std;

// int power(int a, int b)
// {
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     return ans;
// }

// bool isEven(int num)
// {
//     if (num % 2 == 0)
//         return true;
//     return false;
// }

// int factorial(int num)
// {
//     if (num == 0 || num == 1)
//         return 1;
//     return num * factorial(num - 1);
// }

// int nCr(int n, int r)
// {
//     int result = factorial(n) / ((factorial(r) * factorial(n - r)));

//     return result;
// }

int isPrime(int n)
{
    for (int i = 2; i < floor(n / 2); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    // int a, b;
    // cin >> a >> b;

    // int ans = power(a, b);

    // cout << ans;

    ////

    // int num;
    // cin >> num;

    // bool result = isEven(num);

    // if (result)
    //     cout << "Number is even";
    // else
    //     cout << "Number is odd";

    ////

    // int n, r;
    // cin >> n >> r;

    // int result = nCr(n, r);

    // cout << result;

    ////

    // int n;
    // cin >> n;

    // int result = isPrime(n);

    // cout << result;
    // return 0;
}