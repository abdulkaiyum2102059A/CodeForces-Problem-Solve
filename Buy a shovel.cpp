#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int sum = 0;
    int x = n+l;
    int i;
    int count = 0;
    for(i=1;i<=1000;i++){
            sum = n*i;
        if((sum%10!=0)&&(sum)%10==l){
            count = i;
            goto label;
        }else{
        if(sum%10==0){
            cout<<i;
            goto label;
        }
        }
    }
    label:

        cout<<i;
}


