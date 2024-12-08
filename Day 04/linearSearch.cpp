#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(vector<int> arr, int index, int key)
{
    if (arr[index] == key)
    {
        return 1;
    }
    if (index == arr.size())
    {
        return 0;
    }
    bool ans = solve(arr, index + 1, key);
    return ans;
}

bool linearSearch(vector<int> arr, int key)
{
    return solve(arr, 0, key);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 4;
    linearSearch(arr, key) ? cout << "found " << endl : cout << "Not found" << endl;
    return 0;
}