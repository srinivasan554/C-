#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a = {33,29};
	
	int N = a.size();
	int ans = 0;
	
	for(int i=0;i<N;i++){
		ans = ans^a[i];
	}
	
	cout<<ans<<endl;
	
	return 0;
}
