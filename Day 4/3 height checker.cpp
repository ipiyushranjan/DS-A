/*
NAME: PIYUSH RANJAN
ROLL: 2013413
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        int res=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(heights[i]!=temp[i])
                res++;
        }
        return res;
    }
};
