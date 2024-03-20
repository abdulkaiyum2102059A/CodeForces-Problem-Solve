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
        set<int>val;
        map<int,int>cou;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            cou[x]++;
            val.insert(x);
        }
        if(val.size()==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(val.size()==2)
        {
            auto it = val.begin();
            int a = *it;
            val.erase(it);

            it = val.begin();
            int b = *it;
            val.erase(it);

            if(abs(cou[a]-cou[b]<=1))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
