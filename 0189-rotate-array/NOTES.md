time exceed
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a;
        for(int i=0;i<k;i++)
        {
            a=nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(),a);
        }
        
    }
};