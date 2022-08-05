#include<iostream>
using namespace std;

int lcs(string X, string Y,int n,int m){
    if(n==0||m==0){
        return 0;
    }
    if(X[n-1]==Y[m-1]){
        return 1+lcs(X,Y,n-1,m-1);
    }
    else{
        return max(lcs(X,Y,n-1,m),lcs(X,Y,n,m-1));
    }
}
int main(){
    string X="abcdgh";
    string Y="abedfhr";
    int n=X.length();
    int m=Y.length();
    cout<<lcs(X,Y,n,m)<<endl;
}