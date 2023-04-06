class Solution {
public:
void Solve(vector<int>& nums,int index,vector<vector<int>>&ans)
  {
      if(index>=nums.size())
      {
          ans.push_back(nums);
          return;
      }
      for(int i=index;i<nums.size();i++)
      {
          swap(nums[index],nums[i]);
          Solve(nums,index+1,ans);
          swap(nums[index],nums[i]);
      }
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
        int index=0;
        Solve(nums,index,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
