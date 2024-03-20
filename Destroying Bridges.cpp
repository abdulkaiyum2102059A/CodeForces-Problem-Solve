#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >>n>>k;

        int max = (n*(n-1))/2;
        int kk = max/2;
        if(k==0)
        {
            cout<<n<<endl;
        }
        else if(k==max)
        {
            cout<<1<<endl;
        }
        else if(k<kk)
        {
            cout<<n<<endl;
        }else if(n==k){
        cout<<1<<endl;
        }
        else //if(k>kk)
        {
            int sum = n-(k-kk);
            if(sum >0)
            {
                cout<<sum<<endl;
            }
            else
            {
                cout<<1;
            }

        }

    }
}



