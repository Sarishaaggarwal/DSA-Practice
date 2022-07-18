#include <bits/stdc++.h>
using namespace std;
int knapsackRecursive(int wt[],int v[],int W,int n){
    if(W==0||n==0){
        return 0;
    }
    if(wt[n-1]<=W){
        return max(v[n-1]+knapsackRecursive(wt,v,W-wt[n-1],n-1), knapsackRecursive(wt,v,W,n-1));
    }
    else{
        return knapsackRecursive(wt,v,W,n-1);
    }
}

int main(){
    int wt[]={10,20,30};
    int v[]={60,100,120};
    int n=sizeof(wt)/sizeof(wt[0]);
    int W=50;
    cout<<knapsackRecursive(wt,v,W,n);
    return 0;
}
