//print linearly from 1 to n but usng backtrack
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


int print(int n,int i)
{
    if(i<1)
    {
        return i;
    }
    print(n,i-1);
    cout<<i<<endl;
}