class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector<int> vec;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0)vec.push_back(arr[i]);
        }
        int n= arr.size();
        arr.clear();
        for(int i=0;i<vec.size();i++){
            arr.push_back(vec[i]);
        }
        int p = n - vec.size();
        for(int i=0;i<=p;i++){
            arr.push_back(0);
        }
        return;
    }
};