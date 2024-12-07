#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(vector<int> arr, int index)
{
    if (index >= arr.size())
    {
        return 1;
    }
    if (arr[index] < arr[index - 1])
    {
        return 0;
    }
    else
    {
        return 1;
    }
    solve(arr, index + 1);
}

bool isSorted(vector<int> arr)
{
    return solve(arr, 1);
}
int main()
{
    vector<int> arr = {1, 2, -4, 5, 6, 7};
    isSorted(arr) ? cout << "sorted" : cout << "Not sorted";

    return 0;
}