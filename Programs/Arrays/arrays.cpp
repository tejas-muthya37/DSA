#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

void reverseArray(int arr[], int size)
{
    int temp;
    int newSize;
    if (size % 2 == 0)
        newSize = size / 2;
    else
        newSize = floor(size / 2);
    for (int i = 0; i < newSize; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
}

int main()
{

    // int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // int result = sumOfArray(arr, 5);

    // cout << result;

    int arr[10] = {5, 7, -12, 11, 8, -6, 10, 0, 1, -1};

    // int key;

    // cin >> key;

    // cout << linearSearch(arr, 10, key);

    reverseArray(arr, 10);

    printArray(arr, 10);

    return 0;
}