// https://practice.geeksforgeeks.org/problems/break-a-number5913/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int waysToBreakNumber(int n){
        long mod = (1e9 + 7);
        return ((long)(n + 1) * (long)(n + 2) / 2) % mod;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.waysToBreakNumber(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends





