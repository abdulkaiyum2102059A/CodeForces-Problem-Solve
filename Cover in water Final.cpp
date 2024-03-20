#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
            }
        }
        if(s.find("...")>103){
            cout<<count<<endl;
        }else{
        cout<<2<<endl;
        }
    }
}



