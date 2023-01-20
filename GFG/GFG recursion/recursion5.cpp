//print n to 1 by backtrack
#include<bits/stdc++.h>
using namespace std;

int print(int, int);

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
    print(n,i+1);
    cout<<i<<endl;
}