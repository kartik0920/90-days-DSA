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

void merge(vector<int> &arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    vector<int> arr1(l1), arr2(l2);
    int k = s;
    int i = 0, j = 0;
    while (i < l1)
    {
        arr1[i++] = arr[k++];
    }
    k = mid + 1;
    while (j < l2)
    {
        arr2[j++] = arr[k++];
    }

    i = 0, j = 0;
    k = s;
    while (i < l1 && j < l2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while (i < l1)
    {
        arr[k++] = arr1[i++];
    }

    while (j < l2)
    {
        arr[k++] = arr2[j++];
    }
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    quickSort(arr, s, mid);
    quickSort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int s = 0, e = arr.size() - 1;

    quickSort(arr, s, e);
    printArr(arr);
    return 0;
}