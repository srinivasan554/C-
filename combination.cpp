#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> comb;
    void backtrack(int start,int& k,int& n){
        if(comb.size()==k){
            ans.push_back(comb);
            print();
            return;
        }
        for(int i=start;i<=n;i++){
            comb.push_back(i);
            backtrack(i+1,k,n);
            comb.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        backtrack(1,k,n);
        return ans;
    }
    void print(){
    	for(int i=0;i<comb.size();i++){
    		
			cout<<comb[i]<<",";
		}
		cout<<endl;
	}
};


int main(){
	Solution s;
	s.combine(4,2);
	s.print();
	return 0;
}
