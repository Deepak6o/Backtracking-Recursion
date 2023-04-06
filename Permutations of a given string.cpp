//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void Solve(string S,int index,set<string> &ans)
	{
	    if(index>=S.length())
	    {
	        ans.insert(S);
	        return;
	    }
	    
	    for(int i=index;i<S.length();i++)
	    {
	        swap(S[index],S[i]);
	        Solve(S,index+1,ans);
	        swap(S[index],S[i]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>ans;
		    int index=0;
		    Solve(S,index,ans);
		    
		    vector<string> res;
		    for(auto it: ans)
		    {
		        res.push_back(it);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
