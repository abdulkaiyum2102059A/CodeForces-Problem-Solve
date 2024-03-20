#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    string s3;
    string s4;
    cin>>s1;
    cin>>s2;
    s3 = s1 + s2;

    sort(s3.begin(),s3.end());

    cin>>s4;
     sort(s4.begin(),s4.end());

     if(s3==s4){
        cout<<"YES";
     }else{
       cout<<"NO";
     }




}
