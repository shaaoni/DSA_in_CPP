#include<bits/stdc++.h>
using namespace std;

void frequency(int a[], int n)
{
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }

    for(auto x:mpp){
        cout<< x.first<<" "<<x.second<<endl;
    }
}



int main()
{
    int a[] = {10,5,20,20,10,5,5,1,15,1};
    int n = sizeof(a)/sizeof(a[0]);
    frequency(a,n);
}