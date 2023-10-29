//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int l=n;
        int ans=0;
        while(n>0){
            int p=n%10;
            ans+=(p*p*p);
            n=n/10;
        }
        if(ans==l){
            return "Yes";
        }
        else{
            return "No";
        }     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends