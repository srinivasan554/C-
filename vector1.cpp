#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	/*vector<int> v(10);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;*/
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(auto x: s){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}
