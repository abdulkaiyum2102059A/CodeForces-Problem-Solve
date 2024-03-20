#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;

    while(n--){
            cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    if(a[0]!=a[1]&&a[1]==a[2]){
        cout<<1<<endl;
    }else{
      int x = a[0];
      for(int i=0;i<t;i++){
        if(x!=a[i]){
            cout<<i+1<<endl;
            break;
        }
      }
    }
    }

}
