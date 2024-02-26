#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    long s[100];
    int count ;
    cin>>a>>b;
    count = a.size();


    for(int i=0;i<count;i++){
        if(a[i]==b[i]){
            cout<<0;
        }else if(a[i]!=b[i]){
        cout<<1;
        }
    }



}
