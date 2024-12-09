#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int ans = a * pow(a, b - 1);
    return ans;
}

int main()
{
    int a = 1, b = 4;
    cout << pow(a, b) << endl;
    return 0;
}