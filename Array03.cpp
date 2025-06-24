class Solution {
  public:
    void reverse(stack<int>& arr){
        stack<int> st1;
        stack<int> st2;
        int n = arr.size();
        for(int i=0;i<n;i++){
            st1.push(arr.top());
            arr.pop();
        }
        for(int i=0;i<n;i++){
            st2.push(st1.top());
            st1.pop();
        }
        for(int i=0;i<n;i++){
            arr.push(st2.top());
            st2.pop();
        }
        return;
    }
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        stack<int> left;
        stack<int> right;
        
        for(int i=d;i<n;i++){
            right.push(arr[i]);
        }
        
        for(int i=0;i<d;i++){
            left.push(arr[i]);
        }
        int p = right.size();
        int q = left.size();
        reverse(left);
        reverse(right);
        arr.clear();
        for(int i=0;i<p;i++){
            arr.push_back(right.top());
            right.pop();
        }
         for(int i=0;i<q;i++){
            arr.push_back(left.top());
            left.pop();
        }
        return;
    }
};