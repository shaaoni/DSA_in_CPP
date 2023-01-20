//print name for n times

#include<bits/stdc++.h>
using namespace std;

int print(int,int);

int main()
{
    int n,i;
    cout<<"Enter n and i: ";
    cin>>n>>i;
    print(n,i);
}

int print(int n, int i)
{
    if(i>n)
    {
        return i;
    }
    cout<<"Shrabanti Bagchi"<<endl;
    print(n,i+1);
}