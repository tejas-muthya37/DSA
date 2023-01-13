#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    // 1. Reverse the integer

    // int n;
    // cin >> n;
    // int ans = 0;
    // int INT_MAX = round((pow(2, 31))) - 1;
    // int INT_MIN = round((pow(-2, 31)));

    // while (n != 0)
    // {
    //     int bit = n % 10;

    //     if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
    //     {
    //         ans = 0;
    //     }
    //     else
    //     {
    //         ans = (ans * 10) + bit;
    //     }
    //     n = n / 10;
    // }

    // cout << ans;

    // 2. Complement

    // int n;
    // cin >> n;

    // int m = n;
    // int mask = 0;
    // int ans = 0;

    // while (m != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     m = m >> 1;
    // }

    // if (n == 0)
    //     ans = 1;
    // else
    //     ans = (~n) & mask;

    // cout << ans;
    // return 0;

    // 3. Power of two

    // int n;
    // cin >> n;
    // bool isPowerOf2 = true;
    // int m = n;

    // while (abs(n) != 2)
    // {
    //     if (n % 2 != 0)
    //         isPowerOf2 = false;
    //     n = n / 2;
    // }

    // if (isPowerOf2 || abs(m) == 1 || abs(m) == 2)
    //     cout << "power of 2";
    // else
    //     cout << "not power of 2";
}