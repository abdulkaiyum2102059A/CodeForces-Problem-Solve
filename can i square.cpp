#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    while(n--){
            long long int c;
    cin>>c;
       long long  int a;
        long long int sum =0;

        for(int i=0;i<c;i++){
            cin>>a;
            sum +=a;
        }

       long long int p = sqrt(sum);
        if(p*p==sum){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
}
