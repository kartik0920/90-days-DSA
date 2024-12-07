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

void sort(vector<int> &arr)
{
    int zcnt = 0, ocnt = 0;
    for (auto i : arr)
    {
        if (i == 0)
        {
            zcnt++;
        }
        else if (i == 1)
        {
            ocnt++;
        }
    }

    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (zcnt > 0)
        {
            arr[i] = 0;
            zcnt--;
        }
        else if (ocnt > 0)
        {
            arr[i] = 1;
            ocnt--;
        }
        else
        {
            arr[i] = 2;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 0, 1};
    sort(arr);
    printArr(arr);
    return 0;
}