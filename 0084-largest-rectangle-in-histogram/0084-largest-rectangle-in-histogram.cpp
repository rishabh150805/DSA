class Solution {
    vector<int>prevSmaller(vector <int>&arr){
       int n= arr.size();
        vector <int >ans(n);
        stack <int> s;
        for(int i=0; i<n;i++){
            while(!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        ans[i]= s.empty()? -1 : s.top();
        s.push(i);    
        }
        return ans;
    } 
    vector<int>nextSmaller(vector <int>&arr){
       int n= arr.size();
        vector <int >ans(n);
        stack <int> s;
        for(int i=n-1; i>=0 ;i--){
            while(!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        ans[i]= s.empty()? n : s.top();
        s.push(i);    
        }
        return ans;
    } 
public:
    int largestRectangleArea(vector<int>& heights) {
        vector <int> next = nextSmaller (heights);
        vector <int> prev = prevSmaller (heights);

        int ans = INT_MIN;
        for( int i=0 ; i< heights.size(); i++)
        ans = max (ans , (next[i]- prev[i]-1)* heights[i]);
    return ans;
    }
};