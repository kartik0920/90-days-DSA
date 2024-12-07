#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void countIncrease(int n)
{
    if (n == 0)
    {
        return;
    }
    countIncrease(n - 1);
    cout << n << " ";
}

void countDecrease(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    countDecrease(n - 1);
}

int main()
{
    int n;
    cin >> n;
    countIncrease(n);
    cout << endl;
    countDecrease(n);
    return 0;
}