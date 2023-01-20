//print N to 1
#include<bits/stdc++.h>
using namespace std;

int print(int , int);

int main()
{
    int n,i;
    cout<<"Enter n and i:";
    cin>>n>>i;
    print(n,i);

}

int print(int n, int i)
{
    if(i<1)
    {
        return i;
    }
    cout<<i<<endl;
    print(n,i-1);
}