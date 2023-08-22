//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
    vector<long long>ans;
    long long gcd;
    // for(int i=1;i<=A/2;i++){
    //     if(A%i==0 && B%i==0){
    //         gcd=i;
    //     }
    // }
    gcd=__gcd(A,B);
    long long lcm=(A*B)/gcd;
    ans.push_back(lcm);
    ans.push_back(gcd);
    return ans;
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