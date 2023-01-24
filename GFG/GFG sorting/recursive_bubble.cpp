#include<bits/stdc++.h>
using namespace std;


void bubblesort(int a[], int low, int high)
{
    if(high==0)
    {
        return;
    }
    for(int i=0;i<high;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    return bubblesort(a,low,high-1);
}

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int n=10;
    bubblesort(a,0,n);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}



/*


#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution
{
    public:
    void bubbleSort(int arr[], int n)
    {
        if(n==1){
            return;
        }
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
         bubbleSort(arr,n-1);
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}


*/