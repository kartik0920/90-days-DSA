#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(vector<int> arr, int index, int key)
{
}

bool binarySearch(vector<int> arr, int key)
{
    return solve(arr, 0, key);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 4;
    binarySearch(arr, key) ? cout << "found " << endl : cout << "Not found" << endl;
    return 0;
}