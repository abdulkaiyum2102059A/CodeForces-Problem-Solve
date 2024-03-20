#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int m = s[0] -'0';

       int sum = 9*(n-1)+m;
       cout<<sum;
}
}

