
void solve(vector<string> &ans, string output, int index, int N) {

  if (index == N) {
    ans.push_back(output);
    return;
  }
  if (index == 0 || (index > 0 && output[index - 1] == '0')) {
        // If it's the first character or the previous character is '0',
        // we can add '0' or '1' to the output.
        solve(ans, output + '0', index + 1, N);
        solve(ans, output + '1', index + 1, N);
    }

    if(output[index-1]=='1'){
        solve(ans,output+'0',index+1,N);
        
    }

   
}
vector<string> generateString(int N) {
  vector<string> ans;
  string output = "";
  int index = 0;
  solve(ans, output, index, N);

  return ans;
}
