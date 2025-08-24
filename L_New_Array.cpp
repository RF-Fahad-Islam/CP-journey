#include<bits/stdc++.h>
using namespace std;

int* array_concate(int n,int arr[],int arr2[]){
    int *c = new int[2*n];
    for (int i = 0; i < n; i++)
    {
        c[i] = arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i+n] = arr[i];
    }
    return c;
}

int main(){
    int n;
    cin >> n;
    int arr[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int *new_arr = array_concate(n,arr,arr2);
    for (int i = 0; i < 2*n; i++)
    {
        cout << new_arr[i] << " ";
    }
    
    
    return 0;
}