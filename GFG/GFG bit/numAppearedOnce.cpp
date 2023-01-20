#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={2,1,2,5,6,5,7,6,7};
    int x = 0;
    int i,n=9;
    for(i=0;i<n;i++){
        x = x ^ a[i];
    }
    printf("%d",x);
}
