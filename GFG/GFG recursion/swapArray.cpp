#include <bits/stdc++.h>

using namespace std;

void swp(int a[],int s ,int e)
{
    a[s]=a[s]^a[e];
    a[e]=a[s]^a[e];
    a[s]=a[s]^a[e];
}

void Arswap(int ar[],int s,int e)
{   
    cout<<"\n";
    if(s>=e)
    {
        return;
    }
     swp (ar,s,e);
     s++;e--;
     Arswap(ar,s,e);
}


int main()
{   
    int i,n;
    cout<<"Enter no of array element: ";
    cin>>n;
    /*static */int ar[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    Arswap(ar,0,n-1);
    cout<<"\n";
    {   for(i=0;i<n;i++)
        {
        cout<<ar[i]<<"\t";
        }
    }
    return 0;
}