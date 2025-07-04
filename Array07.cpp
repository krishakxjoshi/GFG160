class Solution {
  public:
    int maximumProfit(vector<int> &arr) {
        // code here
        int profit=0;
        int i=0 ,j=0;
        for(j=1;j<arr.size();j++){
            if(arr[j-1]>arr[j] && j-1!=i){
                profit+=(arr[j-1]-arr[i]);i=j;
            }
            else if(arr[j-1]>arr[j] && j-1==i)i=j;
        }
        profit+=arr[j-1]-arr[i];
        return profit;
    }
};