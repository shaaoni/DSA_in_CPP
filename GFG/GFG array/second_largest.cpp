// passed gfg testcases


#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int large, seclarge;
	    large=arr[0];
        for(int i=0;i<n;i++)
        {
            if(large<arr[i]){
                large=arr[i];
            }
        }
        seclarge = -99999;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=large){
                if(seclarge<arr[i])
                {
                    seclarge = arr[i];
                }
            }
        }
        if(seclarge==-99999) return -1;
        else return seclarge;
	}
};

//{ Driver Code Starts.

int main() {
    
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
        return 0;
}