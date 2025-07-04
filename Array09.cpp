class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
       if(arr.empty())return 0;
       int maxi=arr[0],mini=arr[0],cur=arr[0];
       for(size_t i=1;i<arr.size();i++){
           int num=arr[i];
           if(num<0)swap(maxi,mini);
           maxi=max(num,maxi*num);
           mini=min(mini*num,num);
           cur=max(maxi,cur);
       }
       return cur;
    }
};