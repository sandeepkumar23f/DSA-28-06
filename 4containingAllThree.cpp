#include<iostream>
#include<unordered_map>
using namespace std;
int containgAllThree(string &s){
    int n = s.length();
    int cnt=0;
    for(int i=0; i<n; i++){
        unordered_map<char,int> mp;
        for(int j=i; j<n; j++){
            mp[s[j]-'a']=1;
            if(mp[0]+mp[1]+mp[2]==3){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    string s="bbacba";
    cout<<containgAllThree(s);
}