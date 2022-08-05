#include<bits/stdc++.h>
using namespace std;
int t[101][101];
int lcs(string &X, string &Y,int n,int m){
    
    if(n==0||m==0){
        return 0;
    }
    if(t[n][m] != -1){
        return t[n][m];
    }
    if(X[n-1]==Y[m-1]){
        return t[n][m]= 1+lcs(X,Y,n-1,m-1);
    }
    else{
       t[n][m]=max(lcs(X,Y,n-1,m),lcs(X,Y,n,m-1));
    }
}
int main(){
    
    string X="abcdgh";
    string Y="abedfhr";
    int n=X.length();
    int m=Y.length();
    memset(t,-1,sizeof(t));
    cout<<lcs(X,Y,n,m)<<endl;
}