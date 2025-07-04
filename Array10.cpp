class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // code here
        int total=0,minsum=INT_MAX,maxsum=INT_MIN,curmin=0,curmax=0;
        for(int i=0;i<arr.size();i++){
            curmax=max(arr[i],curmax+arr[i]);
            maxsum=max(maxsum,curmax);
            curmin=min(arr[i],curmin+arr[i]);
            minsum=min(minsum,curmin);
            total+=arr[i];
        }
        
        if(maxsum<0)return maxsum;
        return max(maxsum,total-minsum);
    }
};