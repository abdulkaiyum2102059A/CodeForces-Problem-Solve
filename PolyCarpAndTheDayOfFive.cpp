#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1= "314159265358979323846264338327";
    while(t--){
        string s2;
        cin>>s2;
        int count =0;

         for(int i=0;i<30;i++){
            if(s1[i]==s2[i]){
                count++;
            }else{
            break;
            }
         }
         if(count>0){
         cout<<count<<endl;
         }else{
         cout<<0<<endl;
         }
    }


}





