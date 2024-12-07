#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sayDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    vector<string> mapping = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(n / 10);
    cout << mapping[n % 10] << " ";
}
int main()
{
    int n;
    cin >> n;
    sayDigits(n);
    return 0;
}