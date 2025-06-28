#include<bits/stdc++.h>
using namespace std;
int maxSumK(vector<int> &v,int n,int k){
    int l=0,r=0,len=0,maxlen=0,sum=0;
    while(r<n){
        sum=sum+v[r];
        while(sum>k){
            sum = sum-v[l];
            l++;
        }
        if(sum<=k){
            maxlen=max(r-l+1,maxlen);
        }
        r++;
    }
    return maxlen;
}
int main(){
    int arr[]={2,5,1,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    int k=14;
    cout<<maxSumK(v,n,k);
}