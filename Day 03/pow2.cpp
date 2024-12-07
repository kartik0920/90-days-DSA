#include <bits/stdc++.h>
using namespace std;

bool isPow2(int n)
{
    if (n & 1)
    {
        if (n == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if (n == 0)
    {
        return false;
    }
    n = n >> 1;
    isPow2(n);
}
int main()
{
    int n;
    cin >> n;
    isPow2(n) ? cout << "POW" : cout << "Not";
    return 0;
}