//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int n=S1.size();
    int m=S2.size();
    int i=0,j=0;
    string ss="";
    while(i<n && j<m){
        ss+=S1[i];
        ss+=S2[j];
        i++;
        j++;
        
    }
    while(i==n && j!=m){
        ss+=S2[j];
        j++;
    }
     while(j==m && i!=n){
        ss+=S1[i];
        i++;
    }
return ss;    
}