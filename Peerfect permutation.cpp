#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%2!=0){
        cout<<-1;
    }else{
    int a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
     for(int i=1;i<=n-1;i++){
        swap(a[i],a[i+1]);
        i++;
    }
    for(int i=1;i<=n;i++){
       cout<<a[i]<<" ";
    }
    }


}

