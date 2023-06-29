#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int fact = n-1;
	int corner = n-1;
	for(int i=1;i<=n;i++){
		for(int j = n-1;j>=i;j--){
			cout<<" ";
		}
		int con;
		for(int k=1;k<=i;k++){
			if(k==1){
				cout<<i;
				con = i;
				
			}
			else{
				cout<<con+fact;
				--fact;
				con = con +fact;
				
			}
		}
		fact = n-1;
		cout<<endl;
	}
	return 0;
}
