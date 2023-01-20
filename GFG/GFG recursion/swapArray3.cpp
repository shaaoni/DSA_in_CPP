#include<bits/stdc++.h>

using namespace std;

void revAr(int[],int,int);
void swp(int[],int,int);

int main()
{
    int n,i;
    cout<<"enter n: ";
    cin>>n;
    int a[n];
    cout<<"Enter element: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    revAr(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout << a[i]<<" ";
    }
}

void revAr(int a[],int i,int n)
{
    //cout<<"\nrevAr: i= "<<i<<"n= "<<n;
    if(i>=n){
        return;
    }
    swp(a,i,n);
    revAr(a,i+1,n-i-1);
}

void swp(int a[],int i,int n)
{
    //cout<<"\nswp: i= "<<i<<"n= "<<n;
    a[i]= a[i]^a[n];
    a[n]=a[i]^a[n];
    a[i]=a[i]^a[n];
}