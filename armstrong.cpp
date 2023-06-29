#include <bits/stdc++.h>
using namespace std;
//armstrong number
int main(){
	int n;
	int sum,ans;
	cin>>n;
	int in = n;
	int pow_num=0;
	while(n){
		pow_num += 1;
		n/=10;
	}
	n = in;
	while(n){
		sum = n%10;
		ans += pow(sum,pow_num);
		//sum = 0;
		n = n/10;
	}
	bool flag = ans==in ? true : false;
	cout<<flag<<endl;
	return 0;
}
