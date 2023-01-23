#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void print2DVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        printVector(arr[i]);
    }
    cout << endl;
}

void swapAlternate(int arr[], int length)
{
    int temp;

    for (int i = 1; i < length; i = i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }
}

int findUnique(int arr[], int length)
{
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

int findDuplicate(int arr[], int length)
{
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < length; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

// Time complexity exceeded

// vector<int> findIntersection(int arr1[], int length1, int arr2[], int length2)
// {
//     vector<int> result;
//     for (int i = 0; i < length1; i++)
//     {
//         for (int j = 0; j < length2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 result.push_back(arr2[j]);
//                 arr2[j] = -1;
//                 break;
//             }
//             else if (arr1[i] < arr2[j])
//                 break;
//         }
//     }
//     return result;
// }

vector<int> findIntersection(vector<int> arr1, int m, vector<int> arr2, int n)
{
    vector<int> result;
    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            result.push_back(arr2[j]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return result;
}

int checkIfElementInVector(vector<int> arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

bool uniqueNoOfOccurences(vector<int> arr)
{
    vector<int> uniqueElements;
    vector<int> count;

    for (int i = 0; i < arr.size(); i++)
    {
        int returnedIndex = checkIfElementInVector(uniqueElements, arr[i]);
        if (returnedIndex == -1)
        {
            uniqueElements.push_back(arr[i]);
            count.push_back(1);
        }
        else
        {
            count[returnedIndex] += 1;
        }
    }

    for (int i = 0; i < count.size(); i++)
    {
        for (int j = i; j < count.size(); j++)
        {
            if ((count[i] == count[j]) && (i != j))
            {
                return false;
            }
        }
    }

    return true;
}

vector<int> findAllDuplicates(vector<int> arr)
{
    vector<int> result;
    vector<int> unique;

    for (int i = 0; i < arr.size(); i++)
    {
        int returnedIndex = checkIfElementInVector(unique, arr[i]);

        if (returnedIndex == -1)
            unique.push_back(arr[i]);
        else
            result.push_back(arr[i]);
    }

    return result;
}

vector<vector<int>> sumOfPairs(vector<int> arr, int sum)
{
    vector<vector<int>> result;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                result.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
            }
        }
    }

    sort(result.begin(), result.end());

    return result;
}

vector<int> sort01(vector<int> arr)
{
    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] == 0)
            i++;
        if (arr[j] == 1)
            j--;
        if (arr[i] == 1 && arr[j] == 0)
        {
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
    return arr;
}

vector<vector<int>> findTriplets(vector<int> arr, int key)
{
    vector<vector<int>> result;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    result.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return result;
}

vector<int> sort012(vector<int> arr)
{

    int zeroCount = 0;
    int oneCount = 0;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            zeroCount += 1;
        else if (arr[i] == 1)
            oneCount += 1;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i < zeroCount)
            result.push_back(0);
        else if (i < (zeroCount + oneCount))
            result.push_back(1);
        else
            result.push_back(2);
    }

    return result;
}

int main()
{

    vector<int> arr1;

    for (int i = 0; i < 8; i++)
    {
        int input;
        cin >> input;
        arr1.push_back(input);
    }

    vector<int> result = sort012(arr1);

    printVector(result);

    return 0;
}