//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    set<char>st;
	    int n=str.size();
	    string s="";
	    for(int i=0;i<n;i++){
	        if(st.find(str[i])==st.end()){
	            st.insert(str[i]);
	            s+=str[i];
	        }
	    }
	    
	    
	    
	return s;   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends