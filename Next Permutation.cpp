class Solution {
public:
int next(vector<int> & nums)
{
    return next_permutation(nums.begin(),nums.end());
}
    void nextPermutation(vector<int>& nums) {
        next(nums);
    }
};
