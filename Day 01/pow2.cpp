#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool pow2(int n)
{

    return !(n & n - 1);
}

int main()
{
    int n = 32;
    if (pow2(n))
    {
        cout << "TRUE ";
    }
    else
    {
        cout << "False";
    }
    return 0;
}