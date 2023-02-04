/*Row with max 1s*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max=0,c,r;
	    for(int i=0;i<n;i++)
	    {
	        c=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1)  c++;
	        }
	        if(max<c){  
	            max =c;
	            r=i;
	        }
	    }
	    if(max==0) return -1;
	    else return r;
	}

};

//{ Driver Code Starts.
int main() 
{
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    return 0;
}