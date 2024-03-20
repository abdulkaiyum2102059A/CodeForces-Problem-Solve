#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,d,s;
    cin>>n>>m;

    if(m==n){
        d=n+1;
    }
    else if(m!=n&&n>m){

        if((n%m==0)&&(n/m)>m){
           s=((n/m)/m)+1;
            d=n+(n/m)+s+1;
        }
        else if(n%m!=0&&(n/m)>m){
            s=(n/m);
            d=n+(n/m)+s;
        }
        else{
            d=n+(n/m)+1;
        }

    }else if(n<m){
    d=n;
    }

    cout<<d;


}
