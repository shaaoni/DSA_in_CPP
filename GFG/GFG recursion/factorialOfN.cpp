#include<bits/stdc++.h>
using namespace std;

int factorial(int);

int main()
{
    int n,fact=1;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"factorial: "<<factorial(n);
    //cout<<"factorial: "<<n;

}

int factorial(int n)
{
    if(n==0)
    {
        //cout<<"factorial: "<<n;
        return 1;
    }
    return n*factorial(n-1);
}