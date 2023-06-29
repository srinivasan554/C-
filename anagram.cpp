#include <iostream>
#include <string>
using namespace std;
void permutations(int depth,string& permutation,int* used,string& original){
	int length = original.length();
	if(depth == length){
		cout<<permutation<<endl;
	}
	else{
		for(int i =0;i<length;i++){
			if(!used[i]){
				used[i] = 1;
			    permutation[depth] = original[i];
			    permutations(depth+1,permutation,used,original);
			    used[i]=0;
			}
		}
	}
	
}

int main(){
	string text = "abc";
	int length = text.length();
	string permut = "\0";
	int depth = 0;
	int used[length];
	for(int i=0;i<length;i++){
		used[i] = 0;
	}
	permutations(depth,permut,used,text);
	
}
