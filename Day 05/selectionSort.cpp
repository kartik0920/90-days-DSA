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
    int min_index = s;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    swap(arr[s], arr[min_index]);
    sort(arr, s + 1, e);
}

int main()
{
    vector<int> arr = {1, 4, 2, 4, 5};
    int s = 0, e = arr.size() - 1;
    sort(arr, s, e);
    printArr(arr);
    return 0;
}