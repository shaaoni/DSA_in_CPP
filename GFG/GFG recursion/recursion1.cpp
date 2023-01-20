#include<bits/stdc++.h>
using namespace std;

int print(int,int);

int main()
{
    int n,i;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter i: ";
    cin>>i;
    print(n,i);
}

int print(int n, int i)
{
    if(i>n){
        return i;
    }
    cout<<i<<endl;
    print(n,i+1);
}