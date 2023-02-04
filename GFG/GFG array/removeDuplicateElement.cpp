/* Remove duplicate elements from sorted Array */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int c=0;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i-1]!=a[i]){
                a[++c]=a[i];
            }
        }
        return c+1;
    }
};

//{ Driver Code Starts.
int main()
{
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}