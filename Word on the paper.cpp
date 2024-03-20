#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char ar[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>ar[i][j];

            }

        }

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {

                if(ar[i][j]>='a'&&ar[i][j]<='z')
                {
                    cout<<ar[i][j];

                }
            }

        }
        cout<<endl;

    }


}






