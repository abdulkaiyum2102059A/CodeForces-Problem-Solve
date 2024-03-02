#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--){
        int s;
        int count = 0;
        cin>>s;
        int a[s];
        for(int i=0;i<s;i++){
            cin>>a[i];
        }
        sort(a,a+s);
        for(int i=0;i<s-1;i++){
            if(a[i]<a[i+1]){
                count++;
            }
        }

            if((count==s-1)||s==1){
                cout<<"YES";
            }else{
             cout<<"NO";
            }




    }

}
