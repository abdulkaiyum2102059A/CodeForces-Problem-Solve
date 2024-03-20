#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    while(d--){
    int n,c;
    cin>>n>>c;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    if(n>1){
     for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=c){
            count= count+1;
        }
        else{
            count = 0;
        }
    }

        cout<<count+1;

    }else{
    cout<<1;
    }
    }
}
