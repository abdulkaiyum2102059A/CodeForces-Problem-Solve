#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    read:
    while(n--){

    int k;
    cin>>k;
    int a[k];
    for(int i=0;i<k;i++){
         cin>>a[k];
    }
    sort(a,a+k);


      for(int i=1;i<k;i++){
         if(a[i]-a[i-1]>1){
            cout<<"NO"<<endl;
            goto read;
         }
    }

    cout<<"YES"<<endl;


}
}

