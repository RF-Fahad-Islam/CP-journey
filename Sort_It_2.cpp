#include <bits/stdc++.h>
using namespace std;
int *sort_it(int arr[], int size)
{
    int *arr2 = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + size,greater<int>());
    return arr2;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *arr2 = sort_it(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    delete[] arr2;

    return 0;
}