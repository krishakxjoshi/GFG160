class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
    unordered_set<int>st(arr.begin(),arr.end());
    if(st.size()<=1)return -1;
    arr.clear();
    for(int x : st){
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
    
    }
};