#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int a[n];
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>m){
            m=a[i+1]-a[i];
        }
    }
    double b = (double)m/2;
    double x = a[0];
    double y = l-a[n-1];

    double w= max(b,x);
    double z= max(w,y);

    cout<<fixed<<setprecision(9)<<z;
}
