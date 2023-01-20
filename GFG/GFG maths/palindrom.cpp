//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string s;
		    int pal=0;
		    int m=n,rem=0,c=0;
		    while(m!=0){
		        m = m/10;
		        c++;
		    }
		    //printf("%d\n",c);
		    m=n;
		    while(m!=0){
		        rem=m%10;
		        //printf("rem = %d\n",rem);
		        //printf("c = %d\n",c);
		        pal=pal+(rem*pow(10,c-1));
		        //printf("pal = %d\n",pal);
		        c--;
		        m=m/10;
		    }
		    //printf("%d\n",pal);
		    if(pal==n){
		        s="Yes";
		    }
		    else{
		        s="No";
		    }
		    return s;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
