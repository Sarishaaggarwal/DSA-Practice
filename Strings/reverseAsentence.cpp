#include <bits/stdc++.h>
using namespace std;
string rev(string str){
    int n=str.length();
    vector<string>v;
    int len=0;
    int start=0;
    for(int i=0;i<n;i++){
        start=i;
        if(str[i]!=' '){
            len=0;
        }
        while(str[i]!='\0'&& str[i]!=' '){
            i++;
            len++;
        }
        
            v.push_back(str.substr(start,len));
        
        
    }
    string s;
    for(int i=v.size()-1;i>=0;i--){
        s.append(v[i]);
        s.append(" ");
    }
    return s;
    
}
int main()
{
    string s="Hello World Sarisha";
    string x=rev(s);
    cout<<x<<endl;
    return 0;
    
}
