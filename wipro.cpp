#include <iostream>
using namespace std;
int sumn(int num);
bool check(int in);

int sumn(int num){
	int sum = 0;
	while(num%10!=0){
		sum = sum + (num%10);
		num = num / 10;
	}
	return sum;
}
bool check(int in){
	if(in>=1 && in<=26){
		return true;
	}
	else return false;
}


int main(){
	int n;
	cin>>n;
	int index = sumn(n);
	char out = 64;
	bool flag = check(index);
	while(true){
		if(flag){
			out = out + index;
	    	cout<<out<<endl;
	    	break;
	    }
		else{
			index = sumn(index);
			flag = check(index);
			continue;
		}
	}
	return 0;
}
