#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(int n)
{
    int ans = -1;
    int i = 0;
    int cnt = 0;
    while (n != 0)
    {
        if ((n & 1))
        {
            if (cnt >= 1)
            {
                return -1;
            }
            ans = i + 1;
            cnt++;
        }
        n = n >> 1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;
    return 0;
}