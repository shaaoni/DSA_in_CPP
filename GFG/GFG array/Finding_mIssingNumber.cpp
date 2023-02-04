#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {4,1,3};
    int N = 4;
    int c = 1;
    int a=0;
    int n = sizeof(A)/sizeof(A[0]);
    // using sorting

    /*
    sort(A,A+n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(A[i]!=c){
            a=c;
            cout<<"Missing number1: "<<c<<endl;
            break;
        }
        else c++;
    } 
    if(a==0){
        cout<<"Missing number2: "<<N<<endl;
    }
    */

    // not using sorting
    int sum =0;
   for(int i=0;i<n;i++)
   {
        sum +=A[i];
   }
   cout<<"Missing number: "<<(((N*(N+1))/2)-sum);
}