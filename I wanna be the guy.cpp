#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;

    cin>>p;
    int a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
    }

    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }

    int s[n];
    int l = 0;
    for(int i=0;i<p;i++){
         s[i] = a[i];
         l++;

    }

   for(int i=0;i<q;++i){
    int flag = 1;
    for(int j=0;j<p;j++){
        if(b[i]==a[j]){
            flag = 0;
            break;
        }
    }

    if(flag){
        s[l] = b[i];
        l++;
    }
   }
     int SUM =0;
     for(int i=1;i<=n;i++){
        SUM += i;
     }
     int sum =0;
     for(int i =0;i<l;i++){
        sum +=s[i];
     }
     if(sum==SUM){
        cout<<"I become the guy.";
     }else{
     cout<<"Oh, my keyboard!";
     }
   return 0;
}
