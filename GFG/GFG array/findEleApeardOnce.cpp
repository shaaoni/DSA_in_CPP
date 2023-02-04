#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=0;i<N;i++){
	        if(i%2==0 && A[i]!=A[i+1]){
	            return A[i];
	        }
	    }
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
        int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
}