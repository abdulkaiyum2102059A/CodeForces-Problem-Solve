#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]>=1900){
            cout<<"Division 1"<<endl;
        }
        if(a[i]>=1600&&a[i]<=1899){
            cout<<"Division 2"<<endl;
        }
        if(a[i]>=1400&&a[i]<=1599){
            cout<<"Division 3"<<endl;
        }
        if(a[i]<=1399){
            cout<<"Division 4"<<endl;
        }

    }
    return 0;
}
