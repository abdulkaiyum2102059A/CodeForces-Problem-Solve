#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>n>>m;

    for(i=1;m*i<=n;i++){
        n++;
    }
    cout<<n;
    return 0;

}
