#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<int> arr, int &ans, int index)
{
    if (index == arr.size())
    {
        return;
    }
    ans += arr[index];
    solve(arr, ans, index + 1);
}

int sumArr(vector<int> arr)
{
    int ans = 0;
    solve(arr, ans, 0);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5};
    cout << sumArr(arr) << endl;
    return 0;
}