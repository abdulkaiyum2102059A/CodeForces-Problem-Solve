#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
                cin>>ar[i];
        }
        sort(ar,ar+n);
        int count = 0;

        for(int i=0; i<n-1; i++)
        {
                if(ar[i]=ar[i+1])
                {
                    count = count+1;
                    if(count>=3){
                        cout<<ar[i];
                        break;
                    }

                }


        }
        cout<<endl;

    }


}







