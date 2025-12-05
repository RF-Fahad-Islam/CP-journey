#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        long long int arr[n];  // Use a fixed size array or dynamic allocation
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }

        long long int oddlist[n];  // Use a fixed size array or dynamic allocation
        int j=0;
        long long int evensum = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0){
                oddlist[j] = arr[i];
                j++;
            }
            else{
                evensum += arr[i];
            }
        }

        if(j==0) {
            printf("%d\n",0);
            continue;
        }
        

        //sort
        for (int i = 0; i < j; i++)
        {
            for (int m = i+1; m < j; m++)
            {
                if (oddlist[i]<oddlist[m])
                {
                    int temp = oddlist[i];
                    oddlist[i] = oddlist[m];
                    oddlist[m] = temp;
                }
                
            }      
        }
        
        for (int i = 0; i < (j + 1) / 2; i++)  // Integer division with ceiling effect
        {
            evensum += oddlist[i];
        }
        printf("%lld\n",evensum);
        
    }
    
    
    return 0;
}