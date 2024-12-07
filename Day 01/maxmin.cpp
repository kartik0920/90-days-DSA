#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void maxMin(vector<int> arr)
{
    if (arr.empty())
    {
        cout << "Empty array" << endl;
        return;
    }
    int min = arr[0], max = arr[0];
    for (auto i : arr)
    {
        if (min > i)
        {
            min = i;
        }
        if (max < i)
        {
            max = i;
        }
    }
    cout << max << " : MAX" << endl;
    cout << min << " : MIN" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 7};
    maxMin(arr);
    return 0;
}