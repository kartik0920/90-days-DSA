#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(string x, int s, int e)
{
    if (s >= e)
    {
        return 1;
    }
    if (x[s] != x[e])
    {
        return 0;
    }
    bool ans = solve(x, s + 1, e - 1);
    return ans;
}

bool isPali(string x)
{
    int s = 0, e = x.size() - 1;
    return solve(x, s, e);
}
int main()
{
    string str = "xox";
    isPali(str) ? cout << "True" : cout << "false";
    cout << endl;
    return 0;
}