#include<bits/stdc++.h>
using namespace std;


void resursive_insertion(int a[], int n,int s)
{
    if(n>s) return;
    int j=n;
    while(j>0){
        if(a[j]< a[j-1]){
            swap(a[j],a[j-1]);
        }
        j--;
    }
    resursive_insertion(a,n+1,s);
}


int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int s =10;
    resursive_insertion(a,0,s);
    for(int i=0; i<s; i++)
    {
        cout<<a[i]<<" ";
    }

}

/*


#include <stdio.h>
#include <math.h>

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        arr[i] = arr[i] ^ arr[i-1];
        arr[i-1] = arr[i] ^ arr[i-1];
        arr[i] = arr[i] ^ arr[i-1];
        return;
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    int s=0;
    void insertionSort(int arr[], int n)
    {
        //code here
        if(s==n){
            return;
        }
        int j=s;
        while(j>0){
            if(arr[j]<arr[j-1]){
                insert(arr,j);
            }
            j--;
        }
        s++;
        return insertionSort(arr,n);
    }
};

int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}


*/