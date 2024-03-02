#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    int n;
    cin>>s;
    cin>>n;
    int c = n;
    int a[2];
    int b[2];
    int count = 0;
    int sum = 0;
    while(c--){
    for(int i=0;i<1;i++){
        cin>>a[i];
        cin>>b[i];
        if(s>a[i]){
            s +=b[i];
                count++;

        }
    }
    }
    if(count==n){
        cout<<"YES";
    }else{
       cout<<"NO";
    }
}
