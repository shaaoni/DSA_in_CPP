//print from sum of 1st n numbers
#include<bits/stdc++.h>
using namespace std;

int sumation(int, int);

int main()
{
    int s=0,n;
    cout<<"Enter n: ";
    cin>>n;
    sumation(s,n);
    
}

int sumation(int s,int n)
{
    if(n<1)
    {
        cout<<s<<endl;
        return s;
    }
    sumation(s+n,n-1);
    
}