#include <iostream>
using namespace std;

int main()
{
    // **
    // int a = 2;
    // int b = a + 1;

    // if ((a = 3) == b)
    // {
    //     cout << a; // answer
    // }
    // else
    // {
    //     cout << a + 1;
    // }

    // **
    // char ch;
    // cin >> ch;

    // if (ch >= '0' && ch <= '9')
    // {
    //     cout << "number";
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << "capital";
    // }
    // else if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "small";
    // }

    // **
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // **
    // int n;
    // cin >> n;

    // int i = 1;
    // int sum = 0;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << sum;

    // **
    // int n;
    // cin >> n;

    // int i = 2;
    // int sum = 0;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    //     i = i + 2;
    // }
    // cout << sum;

    // **
    // int n;
    // cin >> n;
    // int i = 2;
    // while (n >= i)
    // {
    //     if (i == n)
    //     {
    //         cout << "prime";
    //         break;
    //     }
    //     else if (n % i == 0)
    //     {
    //         cout << "not prime";
    //         break;
    //     }
    //     i++;
    // }

    // **
    int r = 3;
    int i = 1;

    while (i <= r)
    {
        int j = 1;
        while (j <= r)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}