#include <iostream>
#include <math.h>

using namespace std;

int fibonacci(int n)
{
    int first = 0;
    int second = 1;

    for (int i = 1; i <= n - 2; i++)
    {
        int current = first + second;
        if (i == n - 2)
            return current;
        first = second;
        second = current;
    }
}

int ap(int n)
{
    return (3 * n + 7);
}

int calculateSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count += 1;
        n = n >> 1;
    }
    return count;
}

int main()
{

    // 1. Change calculator using switch

    // int n;
    // cin >> n;

    // int thousands = 0, hundreds = 0, fifties = 0, tens = 0, ones = 0;

    // while (n != 0)
    // {
    //     if (n / 1000 >= 1)
    //     {
    //         thousands += (n / 1000);
    //         n = n % 1000;
    //     }
    //     else if (n / 100 >= 1)
    //     {
    //         hundreds += (n / 100);
    //         n = n % 100;
    //     }
    //     else if (n / 50 >= 1)
    //     {
    //         fifties += (n / 50);
    //         n = n % 50;
    //     }
    //     else if (n / 10 >= 1)
    //     {
    //         tens += (n / 10);
    //         n = n % 10;
    //     }
    //     else
    //     {
    //         ones += n;
    //         n = n % 1;
    //     }

    //     switch (n)
    //     {
    //     case 1 ... 9:
    //         ones += n;
    //         n = 0;
    //         break;
    //     case 10 ... 49:
    //         tens += n / 10;
    //         n = n % 10;
    //         break;
    //     case 50 ... 99:
    //         fifties += n / 50;
    //         n = n % 50;
    //         break;
    //     case 100 ... 999:
    //         hundreds += n / 100;
    //         n = n % 100;
    //         break;
    //     default:
    //         thousands += n / 1000;
    //         n = n % 1000;
    //     }
    // }

    // cout << "thousands " << thousands << endl;
    // cout << "hundreds " << hundreds << endl;
    // cout << "fifties " << fifties << endl;
    // cout << "tens " << tens << endl;
    // cout << "ones " << ones << endl;

    // 2. Fibonacci

    // int n;
    // cin >> n;

    // int result = fibonacci(n);

    // cout << result;

    // 3. AP

    // int n;
    // cin >> n;

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << ap(i) << ' ';
    // }

    // 4. Calculate set bits

    // int m, n;
    // cin >> m >> n;

    // int result = calculateSetBits(m) + calculateSetBits(n);

    // cout << result;

    return 0;
}