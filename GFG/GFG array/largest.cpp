#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int large=arr[0];
        for(int i=0;i<n;i++)
        {
            if(large<arr[i]){
                large=arr[i];
            }
        }
        return large;
    }
};


//{ Driver Code Starts.
int main()
{
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    return 0;
}