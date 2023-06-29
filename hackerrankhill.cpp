#include <iostream>
#include <cctype>
using namespace std;

int main(){
	//char a[8] = {'d','d','u','u','u','u','d','d'};
	char a[8] = {'u','d','d','d','u','d','u','u'};
	int size = sizeof(a)/sizeof(a[0]);
	int lvl = 0; //sea level
	int v = 0;  //valley
	for(int i=0;i<size;i++){
		if(toupper(a[i])=='U') ++lvl;
		else if(toupper(a[i])=='D') --lvl;

		if(lvl == 0 && toupper(a[i])=='U') v++;
	}
	cout<<v<<endl;
	return 0;
}
