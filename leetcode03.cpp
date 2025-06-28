#include<bits/stdc++.h>
using namespace std;
int maxConcecutiveSubsequence(string &s,int n){
    int l=0,r=0,len=0,maxlen=0;
    vector<int>hash(256,-1);
    while(r<n){
        if(hash[s[r]]!=-1 && hash[s[r]]>=l){
            l = hash[s[r]]+1;
        }
        len = r-l+1;
        maxlen=max(len,maxlen);
        hash[s[r]]=r;
        r++;
    }
    return maxlen;
}
int main(){
    string s = "cadbzabcd";
    int n = s.length();
    cout<<maxConcecutiveSubsequence(s,n);
}