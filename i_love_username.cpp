#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=a[0];
    int mn=a[0];
    for(int i=0;i<n;i++){
      if(a[i]>mx){
        mx=a[i];
        cnt++;
      }
      if(a[i]<mn){
        mn=a[i];
        cnt++;
      }
    }
    cout<<cnt<<endl;
    return 0;
}