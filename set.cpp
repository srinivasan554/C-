#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(1);
	s.insert(2);
	auto pos = s.find(1);
	if(pos != s.end()) cout<<"true";
	else cout<<"false";
	return 0;
}
