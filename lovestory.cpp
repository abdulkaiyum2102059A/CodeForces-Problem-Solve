#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count1;

    while(n--)
    {
        count1=0;
        string s;
        cin>>s;
        string a = "codeforces";
        for(int i=0; i<=10; i++)
        {

            if(s[i]!=a[i])
            {
                count1++;
            }
        }
        cout<<count1<<endl;
    }


    return 0;
}
