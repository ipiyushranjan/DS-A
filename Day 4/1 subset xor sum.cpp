/*
NAME: PIYUSH RANJAN
ROLL: 2013413
*/

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return sum(nums,0,0);
    }
    int sum(vector<int>& nums,int i, int res){
        if(i==nums.size())
            return res;
        return sum(nums,i+1,res^nums[i])+sum(nums,i+1,res);
    }
};
