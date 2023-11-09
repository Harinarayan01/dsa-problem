//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool hari(int ao){
        int apple=0;
        int ans=ao;
        while(ao>0){
            int p=ao%10;
            apple=apple*10+p;
            ao=ao/10;
        }
        if(apple==ans){
            return 1;
        }
    return 0;        
    }
    int PalinArray(int a[], int n)
    {
       for(int i=0;i<n;i++){
           if(hari(a[i])!=1){
               return 0;
              
           }
          
       }
    return 1;   
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends