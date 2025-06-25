class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n= arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        arr.clear();
        for(const auto & pair : mp){
            int key = pair.first;
            int value = pair.second;
            if(value>n/3)arr.push_back(key);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};