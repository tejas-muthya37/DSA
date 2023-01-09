#include <iostream>
using namespace std;

int main()
{

    // 1.

    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (n >= i)
    // {
    //     int j = 1;
    //     while (n >= j)
    //     {
    //         cout << count << ' ';
    //         j++;
    //         count++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 2.

    // int n;
    // cin >> n;
    // int i = 1;
    // while (n >= i)
    // {
    //     int count = i;
    //     int j = 1;
    //     while (i >= j)
    //     {
    //         cout << count << ' ';
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 3.

    // int n;
    // cin >> n;
    // int i = 1;
    // while (n >= i)
    // {
    //     char ch = 'A' + (i - 1);
    //     int j = 1;
    //     while (n >= j)
    //     {
    //         cout << ch << ' ';
    //         j++;
    //         ch++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 4.

    // int n;
    // cin >> n;
    // int i = 1;
    // while (n >= i)
    // {
    //     int j = i;
    //     int k = 1;
    //     while (n - j > 0)
    //     {
    //         cout << ' ';
    //         j++;
    //     }
    //     while (k <= i)
    //     {
    //         cout << '*';
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 5.

    // int n;
    // cin >> n;
    // int i = 1;
    // while (n >= i)
    // {
    //     int j = i;
    //     int k = 1;
    //     while (k < i)
    //     {
    //         cout << ' ';
    //         k++;
    //     }
    //     while (n - j >= 0)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 6.

    // int n;
    // cin >> n;
    // int i = 1;
    // while (n >= i)
    // {
    //     int j = i;
    //     int k = 1;
    //     while (n - j > 0)
    //     {
    //         cout << ' ';
    //         j++;
    //     }
    //     while (k <= i)
    //     {
    //         cout << i;
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 7.

    // int n;
    // cin >> n;
    // int i = 1;

    // while (n >= i)
    // {
    //     int j = 1, k = 1;
    //     int a = i;
    //     int r = i - 1;
    //     while (n - a > 0)
    //     {
    //         cout << ' ';
    //         a++;
    //     }
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     while (k < i)
    //     {
    //         cout << r;
    //         k++;
    //         r--;
    //     }
    //     i++;
    //     cout << endl;
    // }

    // 8.

    int n;
    cin >> n;
    int i = 1;
    while (n >= i)
    {
        int j = i;
        int k = 1;
        int m = (i - 1) * 2;
        int p = i;
        int s = n + 1 - i;
        while (n - j >= 0)
        {
            cout << k;
            j++;
            k++;
        }

        while (m > 0)
        {
            cout << '*';
            m--;
        }

        while (n >= p)
        {
            cout << s;
            s--;
            p++;
        }

        i++;
        cout << endl;
    }

    return 0;
}