#include<bits/stdc++.h>
using namespace std;

int* running_sum(int n,int arr[]){
    int sum = 0;
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr2[i]= sum;
    }
    return arr2;
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *arr2 = running_sum(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    delete[] arr2;  // Free the dynamically allocated memory
    
    return 0;
}