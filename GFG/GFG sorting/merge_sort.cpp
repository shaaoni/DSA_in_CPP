#include<bits/stdc++.h>
using namespace std;


void merge(int[], int,int,int);
void merge_sort(int[],int,int);

void merge_sort(int a[], int beg, int end)
{
    if(beg<end)
    {
        int mid = beg+(end-beg)/2;
        merge_sort(a,beg,mid);
        merge_sort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}


void merge(int a[], int beg, int mid, int end)
{
    int i,j,k;
    int n1 = mid-beg+1;
    int n2= end - mid;
    int ar1[n1]; int ar2[n2];
    for(i=0;i<n1;i++)
    {
        ar1[i]= a[beg+i];
    }

    for(i=0;i<n2;i++)
    {
        ar2[i] = a[mid+1+i];
    }

    i=0;j=0;k=beg;

    while(i<n1 && j<n2)
    {
        if(ar1[i]<ar2[j])
        {
            a[k] = ar1[i];
            i++;
        }
        else{
            a[k] = ar2[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k] = ar1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]= ar2[j];
        j++;
        k++;
    }

}



int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int n=10;
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}