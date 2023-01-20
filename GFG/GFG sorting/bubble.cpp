#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    return;
}

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int n=10,j,i;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    for(i=0;i<n;i++){
        //cout<<"i= "<<i<<" ";
        for(j=0;j<n-1;j++){
            //cout<<"j= "<<j<<" ";
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                //cout<<"a[j]1= "<<a[j]<<" "<<"a[j+1]1= "<<a[j+1]<<endl;
                // a[j]  =  a[j] ^ a[j+1];
                // a[j+1] = a[j] ^ a[j+1];
                // a[j] =   a[j] ^ a[j+1];
            }
           //cout<<"a[j]2= "<<a[j]<<" "<<"a[j+1]2= "<<a[j+1]<<endl;
        }
        //cout<<" ";
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}