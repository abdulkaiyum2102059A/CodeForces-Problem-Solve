#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]<5&&(5-a[i])>=k){
            sum +=1;
        }
    }
    sum = sum/3;
    cout<<sum;
}

