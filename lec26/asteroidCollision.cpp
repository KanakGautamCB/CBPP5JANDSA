class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int>ns,ps;
        ps.push(-1);
        vector<int>p(heights.size()),n(heights.size());
        for(int i=0;i<heights.size();i++){
            while(ps.top()!=-1 && heights[ps.top()]>=heights[i]){
                ps.pop();
            }
            p[i]=ps.top();
            ps.push(i);
        }
        ns.push(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            while(ns.top()!=heights.size() && heights[ns.top()]>=heights[i]){
                ns.pop();
            }
            n[i]=ns.top();
            ns.push(i);
        }
        int ans=0;
        for(int i=0;i<heights.size();i++){
            int area=heights[i]*(n[i]-p[i]-1);
            ans=max(ans,area);
        }
        return ans;
        
    }
};