//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void Solve(string S,string output,int index,set<string> &ans)
  {
      if(index>=S.length())
      {
          if(output.length()>0)
          {
              ans.insert(output);
              
          }
          return ;
      }
      
      Solve(S,output,index+1,ans);
      char element=S[index];
      output.push_back(element);
      Solve(S,output,index+1,ans);
  }
    set<string> allPossibleSubsequences(string S) {
        // code here
        set<string>ans;
        string output="";
        int index=0;
        Solve(S,output,index,ans);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends
