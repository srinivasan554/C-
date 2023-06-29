#include <iostream>
#include <vector>
using namespace std;
vector<int> dp(1000,-1);
int dfs(int start,int target){
	if(start>target) return 0;
	if(start==target) return 1;
	if(dp[start]!=-1) return dp[start];
	dp[start] = dfs(start+1,target) + dfs(start+2,target);
	return dp[start];
}
int main(){
	//memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	int ans = dfs(0,n);
	cout<<ans<<endl;
	return 0;
}
