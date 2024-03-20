#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    int n;
    cin>>s;
    cin>>n;
    int c = n;
    int a[2];
    int b[2];
    int count = 0;
    int sum = 0;
    while(c--){
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(s>a[i]){
            s +=b[i];
                count++;

        }
    }
    for(int j=0;j<n;i++){
    cin>>b[i];
    }

    sort(a,a+n);
    }
    if(count==n){
        cout<<"YES";
    }else{
       cout<<"NO";
    }
}
