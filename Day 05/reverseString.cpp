#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(string &x, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(x[s], x[e]);
    solve(x, s + 1, e - 1);
}

string reverse(string x)
{
    int s = 0, e = x.size() - 1;
    solve(x, s, e);
    return x;
}
int main()
{
    string str = "kartik";
    cout << reverse(str) << endl;
    return 0;
}