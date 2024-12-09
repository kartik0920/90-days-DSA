#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
}

void sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int ele = arr[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i - 1] >= arr[i])
        {
            swap(arr[i - 1], arr[i]);
        }
    }
    sort(arr, s, e - 1);
}

int main()
{
    vector<int> arr = {1, 4, 2, 4, 5};
    int s = 0, e = arr.size() - 1;
    sort(arr, s, e);
    printArr(arr);
    return 0;
}