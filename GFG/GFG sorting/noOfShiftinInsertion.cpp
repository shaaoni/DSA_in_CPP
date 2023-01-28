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
    int a[]={12,15,1,5,6,14,11};
    int n =7;
    int c,allc=0;

    for(int i=0;i<n;i++){
        int j=i,c=0;
        while(j>0){
            if(a[j]< a[j-1]){
                swap(a[j],a[j-1]);
                c++;
            }
            j--;
        }
        allc += c;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<allc<<endl;
}