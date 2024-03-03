#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){

         string s;
         cin>>s;

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

