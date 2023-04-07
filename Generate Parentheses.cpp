class Solution {
public:
void Solve(int n, vector<string>&ans,int open,int close,string output)
{
    if(open==0 && close==0)
    {
        ans.push_back(output);
        return;
    }

    if(open>0)
    {
        output.push_back('(');
        Solve(n,ans,open-1,close,output);
        output.pop_back();
    }
    if(close>open)
    {
        output.push_back(')');
        Solve(n,ans,open,close-1,output);
        output.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        int open=n;
        int close=n;
        Solve(n,ans,open,close,output);
        return ans;
    }
};
