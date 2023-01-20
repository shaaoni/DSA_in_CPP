//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>v;
        long hcf=0;
        long temp=0;
        if(A<B){
            temp=A;
            A=B;
            B=temp;
        }
        for(int i=1;i<=A;i++){
            if(A%i==0 && B%i==0){
                hcf=i;
            }
        }

        v.push_back((A*B)/hcf);
        v.push_back(hcf);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;

        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
