#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;


        for(int i=0;i<s.size()-1;i=i+2){
           cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }
    }


