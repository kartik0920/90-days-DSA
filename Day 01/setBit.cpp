#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countSet(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << countSet(n) << endl;
    return 0;
}