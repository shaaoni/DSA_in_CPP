#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findIntersection(int arr1[], int arr2[], int n, int m)
    {
        // two pointer approach
        vector<int>inter;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                //arr1[i]==arr2[j];
                inter.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return inter;

        // brute force approach
        /*
        vector<int>ans;
        vector<int>visited(arr2.size(),0);
        int i =0;j=0;
        for(i=0;i<arr1.size();i++){
            for(j=0;j<arr2.size();ij++){
                if(arr1[i]==arr2[j] && visited[j]==0){
                    ans.push_back(arr2[j]);
                    visited[j]=1;
                    break;
                }
                else if(arr2[j]>arr1[i]) break;
            }
        }
        */
    }
};

int main() 
{
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findIntersection(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	
	return 0;
}