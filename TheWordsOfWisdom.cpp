#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--){
int i,n,ma=0,maxi;
    cin>>n;

    int ar[n];
    int ab[n];

    for(i=0;i<n;i++){
        cin>>ar[i];
        cin>>ab[i];
    }

     for(i=0;i<n;i++){
            if(ar[i]<=10){
         if(ma<ab[i]){
          ma = ab[i];
          maxi=i+1;

        }
            }

    }

    cout<<maxi;

}
}

