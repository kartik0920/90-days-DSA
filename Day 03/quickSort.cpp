#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {

        if (pivot > arr[i])
        {
            cnt++;
        }
    }
    int pivot_index = s + cnt;
    swap(arr[pivot_index], arr[s]);

    int i = s, j = e;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivot_index;
}
void QuickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}
int main()
{
    vector<int> arr = {1, 2, 4, -54};
    int s = 0, e = arr.size() - 1;
    QuickSort(arr, s, e);
    printArr(arr);
    return 0;
}