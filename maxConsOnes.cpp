#include<bits/stdc++.h>
using namespace std;
int maxFlip(vector<int> &arr,int k){
    int maxlen=0;
    int len=0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int nz=0;
        for(int j=i; j<n; j++){
            if(arr[j]==0){
                nz++;
            }
            if(nz<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else break;
        }
    }
    return maxlen;
}
int main(){
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<maxFlip(arr,k);
}