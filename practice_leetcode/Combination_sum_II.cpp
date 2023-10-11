class Solution {
  void solve(vector<vector<int>>&ans,vector<int>&result,int index,int target,vector<int>&candidates){
    //base case
    if(target==0){
      ans.push_back(result);
      return;

    }
    //r.r
    for(int i=index;i<candidates.size();i++){
      if(i>index && candidates[i]==candidates[i-1]) continue;
      if(candidates[i]>target) break;
      result.push_back(candidates[i]);
      solve(ans,result,i+1,target-candidates[i],candidates);
      result.pop_back();

    }
  }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>result;
        solve(ans,result,0,target,candidates);
        return ans;

    }
};