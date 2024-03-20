#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int count = 0;
       int sum=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum = 2*i+j*k;
            if(n==sum){
                count++;
                break;
            }
        }
       }
       if(count>0){
        cout<<"YES"<<endl;
       }else{
       cout<<"NO"<<endl;
       }
    }
}

