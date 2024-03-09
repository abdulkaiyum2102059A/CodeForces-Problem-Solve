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
    int count=0;
    for(int j=0;j<t;j++){
        cin>>ar[j];}
    for(int j=0;j<t-1;j++){

        if(ar[j]<=ar[j+1]){
            count++;
        }
    }

            cout<<count<<endl;


    }
}


