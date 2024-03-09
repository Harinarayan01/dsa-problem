//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        
        for(int i=0; i<n; i++){
            m1[a[i]]++;
        }
        
        for(int i=0; i<m; i++){
            m2[b[i]]++;
        }
        
        int c = 0;
        
        for(auto it : m1){
            
            auto it2 = m2.find(it.first);
            if(it2 != m2.end()){
                c+= min(it.second, it2->second);
            }
        }
        return c;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int a[n], b[m];
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < m; i++) cin >> b[i];
        Solution obj;
        cout << obj.minRemove(a, b, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends