#include<iostream>
#include<bits/stdc++.h>

using namespace std;

unordered_map<string,int> m;

class Trie{
    public:
        char c;
        unordered_map<char,Trie*> children;
        bool eow;

        Trie(char c){
            this->c = c;
            children.clear();
            eow = false;
        }

};

void construct(Trie* root,string& s){

    int len = s.length();

    Trie* cur = root;

    for(int k=0;k<len;k++){
        if(cur->children.find(s[k])==cur->children.end()) cur->children[s[k]] = new Trie(s[k]);

        cur = cur->children[s[k]];
    }

    cur->eow = true;
}

void helper(Trie* root,string s,vector<string>& arr){

    Trie* cur = root;

    if(cur->eow){
        arr.push_back(s+cur->c);
    }

    for(auto x : cur->children){
        cur = x.second;

        helper(cur,s+cur->c,arr);
    }
}

vector<string> search(Trie* root,string pre){
    Trie* cur = root;

    int N = pre.length();

    for(int i=0;i<N;i++){
        cur = cur->children[pre[i]];

        if(cur==NULL) return {"-1"};

        cur = cur->children[pre[i]];

    }

    if(cur->eow) return {pre}; //whole string only

    vector<string> arr;

    helper(cur,pre,arr);

    return arr;
}

bool comp(string& a,string& b){
    return m[a] > m[b];
}
void del(Trie* root){

    if(root->eow){
        delete root;
        root = NULL;
        return;
    }
    for(auto x : root->children){
        del(x.second);
    }

    delete root;
    root = NULL;
}
int main() {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int T,N,M;

    m.clear();

    cin>>T;

    for(int i=0;i<T;i++){
        cin>>N;
        cin>>M;

        vector<string> words(N);
        vector<int> weights(N);
        vector<string> prefix(M);

        Trie* root = new Trie('+');

        for(int i=0;i<N;i++){
            cin>>words[i];
            construct(root,words[i]);
        }

        for(int i=0;i<N;i++){
            cin>>weights[i];
            m[words[i]] = weights[i];
        }

        vector<string> ans;
        
        for(int j=0;j<M;j++){
            cin>>prefix[j];
        }

        for(int i=0;i<M;i++){
            ans = search(root,prefix[i]);

            sort(ans.begin(),ans.end(),comp);

            for(int j=0;j<ans.size() && j<5;j++){
                cout<<ans[j]<<' ';
            }

            cout<<endl;
        }

        del(root);

    }
    
    return 0;
}
