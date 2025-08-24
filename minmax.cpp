#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int min_i, max_i, min = 1000000, max = -1000000;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
    }

    // Swap
    int temp = arr[min_i];
    arr[min_i] = arr[max_i];
    arr[max_i] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}