#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;

    while(n--)
    {
        cin>>t;
        int a[200];

        for(int i=0; i<2*t; i++)
        {
            cin>>a[i];
        }
        int count = 0;
        for(int i=0; i<2*t-1; i++)
        {
            if((a[i]+a[i+1])%2!=0)
            {
                count++;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
        count = 0;
    }
}
