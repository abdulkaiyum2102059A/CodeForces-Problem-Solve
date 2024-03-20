#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        int s;
        cin>>s;
         string t;
         for(int i=0;i<s;i++){
             cin>>t[i];

         }
    if(s>5||s<5){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<5;i++){
            if((s[i]=='T'||s[i]=='i'||s[i]=='m'||s[i]=='u'||s[i]=='r')&&s[i]!=s[i]){
                count++;
            }
        }
        if(count==5){
            cout<<"YES"<<endl;
        }else{
         cout<<"NO"<<endl;
        }
    }

}
