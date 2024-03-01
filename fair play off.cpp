#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[4];
    cin>>n;

    while(n--){
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int maximum1 = max(a[0],a[1]);
        int minimum1 = min(a[0],a[1]);
        int maximum2 = max(a[2],a[3]);
        int minimum2 = min(a[2],a[3]);

        if(maximum1>minimum2&&maximum2>minimum1){
            cout<<"YES"<<endl;
        }else{
           cout<<"NO"<<endl;
        }
    }
}
