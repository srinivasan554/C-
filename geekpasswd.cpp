#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int N;
	cin>>N;
    std::vector<string> v;
    for(int i=0;i<=N;i++){
    	string dom;
    	std::getline(std::cin,dom);
    	v.push_back(dom);
    }
    for(int i=0;i<v.size();i++){
    	string test = v[i];
    	bool flag = false;
    	for(int x=0;x<test.length();x++){
    		
    		if(test[x]>=48 && test[x]<=57){
    			flag = true;
    			break;
			} 
			else continue;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
    cout<<endl;
	//cout<<"its in progress!!!";
	return 0;

}
