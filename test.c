#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int maina[1000];
    int a1[1000]; //asc
    int a2[1000]; //dsc
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &maina[i]);
        a1[i] = maina[i];
        a2[i] = maina[i];
    }

    //asc
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a1[i] > a1[j]){
                int temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
        
    }
    
    //dsc
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a1[i] < a1[j]){
                int temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
        
    }

    int diff_elem_found_asc = 0;
    int diff_elem_found_dsc = 0;
    //compare
    for (int i = 0; i < n; i++)
    {
        if(maina[i] != a1[i]){
            diff_elem_found_asc = 1;
            break;
        }
    }
    
    //compare
    for (int i = 0; i < n; i++)
    {
        if(maina[i] != a2[i]){
            diff_elem_found_dsc = 1;
            break;
        }
    }
    if(!diff_elem_found_asc) printf("Ascending order");
    else if(!diff_elem_found_dsc) printf("Dsc");
    
    return 0;
}