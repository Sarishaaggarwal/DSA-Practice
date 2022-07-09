#include <bits/stdc++.h>
using namespace std;
void sumcheck(int A[],int n,int k){
    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==k)
                c++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    // int A[]={1, 5, 7, 1},k=6;
    int A[]={1, 1, 1, 1},k=2;
    int n=sizeof A/sizeof A[0];
    sumcheck(&A[0],n,k);
    return 0;
}