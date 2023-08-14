//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int max = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            max = a[i];
        }
        int *freq = (int *)calloc(max+1,sizeof(int));
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
            if(freq[a[i]]>=k)
            return a[i];
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends