//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int ans = 0;
        bool negative = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' and s[i] <= '9') {
                ans = ans*10 + (s[i] - '0');
            } else if (s[i] == '-' and i == 0)
                negative = true;
            else
                return -1;
        }
        return negative ? -ans : ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends