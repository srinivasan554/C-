#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solve(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    vector<int> dp(A.size());
    vector<int> sol;
    dp[0] = A[0];
    for(int i=1;i<A.size();i++){
        dp[i] = dp[i-1] + A[i];
    }
    for(int i=0;i<B.size();i++){
        if(B[i]<dp[0]){
            sol.push_back(0);
        }
        else{
            int l=0,r=dp.size()-1,mid;
            while(l<=r){
                mid = (l+r)/2;
                if(dp[mid]==B[i]){
                    break;
                }
                else if(dp[mid]>B[i]) r= mid -1;
                else l = mid + 1;
            }
            if(dp[mid]<=B[i]) sol.push_back(mid+1);
            else sol.push_back(mid);
        }
    }
    return sol;
}
void print(vector<int> sol){
    for(int i=0;i<sol.size();i++) cout<<sol[i]<<", ";
    cout<<endl;
}

int main(){
    vector<int> A = {23, 36, 58, 59};
    vector<int> B = {3, 207, 62, 654, 939, 680, 760};
    vector<int> sol = solve(A,B);
    print(sol);
    return 0;
}
