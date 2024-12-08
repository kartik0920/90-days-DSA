#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(vector<int> arr, int index)
{
    if (index == arr.size() - 1)
    {
        return 1;
    }

    if (arr[index] < arr[index - 1])
    {
        return 0;
    }
    else if (index < arr.size() - 1)
    {
        index++;
        bool ans = solve(arr, index);
        return ans;
    }
}

bool linearSearch(vector<int> arr)
{
    return solve(arr, 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    linearSearch(arr) ? cout << "Sorted " << endl : cout << "Not sorted" << endl;
    return 0;
}