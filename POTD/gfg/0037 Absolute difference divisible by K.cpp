class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        long cnt = 0;
        for(int i=0; i<n; i++){
            arr[i] = (arr[i] + k) % k ;
        }
        
        vector<long> v(k) ;
        // unordered_map<int, int> v;
        for(int j=0; j<n; j++){
            v[arr[j]]++;
        }
        
        for(int j=0; j<k; j++){
            cnt += (v[j] * (v[j] - 1))/2;
        }
        
        return cnt;
    }
};
