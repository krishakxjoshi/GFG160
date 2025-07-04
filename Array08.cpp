class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        if(n==1)return 0;
        sort(arr.begin(),arr.end());
        int ans = arr[n-1]-arr[0];
        int small = arr[0]+k;
        int large= arr[n-1]-k;
        for(int i=0;i<n-1;i++){
            int mini = min(small,arr[i+1]-k);
            int maxi = max(large,arr[i]+k);
            if(mini<0)continue;
            ans=min(ans,maxi-mini);
        }
        return ans; 
    }
};