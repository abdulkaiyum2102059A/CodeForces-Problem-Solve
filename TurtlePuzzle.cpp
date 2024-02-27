#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    int sum=0;
    cin>>n;
    while(n--){
        cin>>t;
        int arr[2*t];

        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
         for(int i=0;i<t;i++){
                sum += abs(arr[i]);
         }

         cout<<sum;
         sum = 0;
}

}
