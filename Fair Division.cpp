#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
              int t;
    cin>>t;
    int ar[t];
    int sum=0;
    for(int j=0;j<t;j++){
        cin>>ar[j];
        sum +=ar[j];
    }
    if(t%2!=0){
        cout<<"NO"<<endl;
    }else{
        if(sum%2==0||sum==2){
            cout<<"YES"<<endl;
        }
    }
    }
}

