#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1="abcefghijklmnopqrstuvwxyz";
     for(int i=0;i<s.length();i++){
        for(int j=0;j<s1.length();j++){
            if(s[i]!=s1[j]){
                cout<<s[j];
            }
        }
        
    }
      
    return 0;
}