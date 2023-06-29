#include <iostream>
#include <vector>
using namespace std;
int amount;
vector<int> dp(amount+1,INT_MAX-1);
int help(vector<int>& nums,int amount){
	if(amount == 0) return 0;
	if(amount<0) return INT_MAX;
	if(dp[amount]!=INT_MAX-1) return dp[amount];
	
	for(int i=0;i<nums.size();i++){
		dp[amount] = 1 + min(help(nums,amount-nums[i]),dp[amount]);
	}
	return dp[amount];
}

int main(){
	vector<int> nums = {1,2,3};
	amount = 5;

	int ans = help(nums,amount);
	if(ans==INT_MAX) cout<<-1<<endl;
	else cout<<ans<<endl;

}
