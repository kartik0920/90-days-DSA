#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void reverse(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (e >= s)
    {
        swap(arr[s++], arr[e--]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 7};
    printArr(arr);
    reverse(arr);
    printArr(arr);
    return 0;
}