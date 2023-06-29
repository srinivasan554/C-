#include <iostream>
using namespace std;
string b = "   ";
void backtrack(int i,int n){
    if(i==n){
        cout<<b<<endl;
        return;
    }
    b[i] = '0';
    backtrack(i+1,n);
    b[i] = '1';
    backtrack(i+1,n);
}
int main(){
    backtrack(0,b.length());
    return 0;
}
