class Solution {
public:
void Solve(int n,int k,vector<vector<int>>&ans,vector<int>&temp,int start)
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=start;i<=n;i++)
    {
        temp.push_back(i);
        Solve(n,k,ans,temp,i+1);
        temp.pop_back();

    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
       
        Solve(n,k,ans,temp,1);
        return ans;
        
    }
};
