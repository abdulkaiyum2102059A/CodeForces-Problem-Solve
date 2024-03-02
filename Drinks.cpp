#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double s;
    int sum =0;
    int a[n];
    for(int i =0;i<n;i++){
            cin>>a[i];
        sum +=a[i];
    }

    s = (sum/((double)n*100))*100;

    cout<<s;
}
