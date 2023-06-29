#include <iostream>
using namespace std;

void fix(char b[],int truelength){
	int spacecount =0;
	for(int i=0;i<truelength;i++){
		if(b[i]==' '){
			++spacecount;
		}
	}
	//cout<<spacecount<<endl;
	int index = truelength + (spacecount*2);
	b[index] = '\0';
	for(int i=truelength-1;i>=0;i--){
		if(b[i]==' '){
			b[index-1]='0';
			b[index-2]='2';
			b[index-3]='%';
			index = index - 3;
		}
		else{
			b[index-1]=b[i];
			--index;
		}
	}
	for(int i=0;i<index;i++){
		cout<<b[i];
	}
	cout<<endl;

}

int main()
{
	char a[]="my name is john               ";
	fix(a,15);
	return 0;
}
