#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int count =0;
       int maximum=0;
        for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
            maximum = max(count,maximum);
        }else{
        count=0;
        }
       }
       cout<<maximum<<endl;
}
}


