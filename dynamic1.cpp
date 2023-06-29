#include<iostream>
#include<vector>
using namespace std;
vector<int> dp(15,0);
void counting(int n){
	
	int offset = 1;
	for(int i=1;i<=n;i++){
		if(i==2*offset){
			offset = i;
		}
		dp[i] = 1 + dp[i-offset];
	}
	return;
}
int main(){
	
	counting(15);
	for(int i=0;i<=15;i++){
		cout<<dp[i]<<","<<" ";
	}
	cout<<endl;
	return 0;
}
