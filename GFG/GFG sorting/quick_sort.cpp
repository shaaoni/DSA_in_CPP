#include<bits/stdc++.h>
using namespace std;


void swapp(int, int);
int partition(int[], int,int);
void quicksort(int[],int ,int);

void swapp(int *x, int *y){
    *x = *x^ *y;
    *y = *x^ *y;
    *x= *x^ *y;
    return;
}

int partition(int a[], int beg, int end){
    int pivot = a[beg];
    int left = beg;
    for(int i=beg;i<end;i++){
        if(pivot>a[i]){
            swapp(a[left],a[i]);
        }
        left++;
    }
    swapp(a[beg],a[left]);
    return left;
}

void quicksort(int a[], int beg, int end){
    int pivot= partition(a,beg,end);
    quicksort(a,beg,pivot);
    quicksort(a,pivot+1,end);
}

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int n = 10;
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}