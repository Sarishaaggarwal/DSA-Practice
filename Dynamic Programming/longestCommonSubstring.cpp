#include<bits/stdc++.h>
using namespace std;
int t[101][101];
int lcs(string x,string y,int n,int m){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=0;
            }
        }
    }
    return t[n][m];
}

int main(){
    string x="sarisha";
    string y="saris";
    int n=x.length();
    int m=y.length();
    cout<<lcs(x,y,n,m)<<endl;
    return 0;
}
