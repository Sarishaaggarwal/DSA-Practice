#include<bits/stdc++.h>
using namespace std;
int t[101][101];
int lcp(string x,int n){
    n=x.length();
    string y=" ";
    for(int i=x.length()-1;i>=0;i--){
        y+=x[i];
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
    }
    return t[n][n];
}

int main(){
    string x="abcbed";
    int n=x.length();
    cout<<lcp(x,n)<<endl;
    return 0;
}
