// https://practice.geeksforgeeks.org/problems/count-of-subarrays5922/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long


// } Driver Code Ends
//User function template for C++
class Solution{
public:
// 	#define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    int L = -1;
	    int R = n;
	    
	    ll ans = 0;
	    
	    for(int i=0; i<n; ++i){
	        if(arr[i] > k){
	            ll left = i- L;
	            ll right = R - i;
	            ans += left * right;
	            
	            L = i;
	        }
	        
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends





vv#define MAX 256

class Solution{
public:
	// Return number of subarrays whose maximum
	// element is less than or equal to K.
	ll countSubarray(int arr[], int n, int k) {
	    // To store count of subarrays with all
	    // elements less than or equal to k.
	    ll s = 0;

	    // Traversing the array.
	    int i = 0;
	    while (i < n) {
	        // If element is greater than k, ignore.
	        if (arr[i] > k) {
	            i++;
	            continue;
	        }

	        // Counting the subarray length whose
	        // each element is less than equal to k.
	        ll count = 0;
	        while (i < n && arr[i] <= k) {
	            i++;
	            count++;
	        }

	        // Suming number of subarray whose
	        // maximum element is less than equal to k.
	        s += ((count * (count + 1)) / 2);
	    }

	    return (((ll)n * (ll)(n + 1) / 2) - s);
	}
};




