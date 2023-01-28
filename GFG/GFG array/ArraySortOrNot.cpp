/*Find out the given array is sorted or not*/


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        //int n = sizeof(arr)/sizeof(arr[0]);
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=arr[i];
        }
        int j = sizeof(a)/sizeof(a[0]);
        sort(a,a+j);
        int f=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=arr[i])
            {
                f=0;
            }
        }
        return f;
    }
};

//{ Driver Code Starts.

int main() 
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    return 0;
}