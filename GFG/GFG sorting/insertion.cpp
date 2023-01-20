#include<bits/stdc++.h>
using namespace std;


void swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    return;
}


int main()
{
    int a[]={10,9,8,7,6,5,4,3,2,1};
    int n =10;

    for(int i=0;i<n;i++){
        int j=i;
        while(j>0){
            if(a[j]< a[j-1]){
                swap(a[j],a[j-1]);
            }
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}