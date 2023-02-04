#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //two pointer approach
        vector<int> unin;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                if(unin.size()==0 || unin.back() != arr1[i])
                {
                    unin.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(unin.size()==0 || unin.back() != arr2[j])
                {
                    unin.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i<n)
        {
            if(unin.back() != arr1[i])
                {
                    unin.push_back(arr1[i]);
                }
                i++;
        }
        while(j<m)
        {
            if(unin.back() != arr2[j])
                {
                    unin.push_back(arr2[j]);
                }
                j++;
        }
        return unin;

        /*
        // using map
        vector<int> ans;
        map<int> freq;
        for(int i=0;i<n;i++)
        {
            freq[arr1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            freq[arr2[i]]++;
        }
        for(auto & it: freq){
            ans.push_back(it.first);
        }
        return ans;
        */

       /*
            //using set
            vector<int> ans;
            set<int> freq;
            for(int i=0;i<n;i++){
                freq.insert(arr1[i]);
            }
            for(int i=0;i<m;i++){
                freq.insert(arr2[i]);
            }
            for(auto & it:freq){
                ans.push_back(freq);
            }
            return ans;
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
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	
	return 0;
}