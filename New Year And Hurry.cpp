#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int count = 0;

    cin>>n>>k;
    int sum = k;
    for(int i=1;i<=n;i++){
         sum += 5*i;

         if(sum<=240){
            count++;
         }
    }

    cout<<count;
}
