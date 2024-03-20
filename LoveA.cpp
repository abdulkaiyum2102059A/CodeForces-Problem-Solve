#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 0;
    int l = s.size();
    int need = l/2 + 1;

    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            count++;
        }
    }

    if(count>=need){
        cout<<l;
    }else{
        cout<<(l-count)-count;
    }
}
