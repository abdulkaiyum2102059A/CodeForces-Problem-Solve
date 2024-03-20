#include<bits/stdc++.h>
using namespace std;
int solve()
{

        int n;
        cin>>n;
        vector<int>v(n);
        int two = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==2)
            {
                two++;
            }
        }
        int twotillhere=0;
        for(int i=0; i<n-1; i++)
        {

            if(v[i]==2)
            {
                twotillhere++;
            }
            if(twotillhere*2==two)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
        cout<<-1<<endl;
        return 0;

}
int main()
{
    int testCase = 1;
    cin>>testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}
