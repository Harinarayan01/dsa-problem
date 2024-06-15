//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    sort(arr,arr+N);
	    vector<int>result(N);
	    int start=0;int end=N-1;
	    for(int i=0;i<N;i++){
	        if(i%2!=0){
	            result[i]=arr[start];
	            start=start+1;
	            
	        }
	        else{
	            result[i]=arr[end];
	            end=end-1;
	        }
	    }
	return result;    
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends