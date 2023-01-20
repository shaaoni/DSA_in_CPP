#include<bits/stdc++.h>

using namespace std;


int f(int n)
{
    //cout<<(l+sl);
    if(n<=1) return n;
    int l=f(n-1);
    int sl=f(n-2);
    //cout<<(l+sl)<<" ";
    return sl+l;

}

int main()
{
    int n,l=0,sl=1;
    cout<<"Enter range: ";
    cin>>n;
    cout<<l<<" "<<sl<<" ";
    cout<<f(n);
    return 0;
}