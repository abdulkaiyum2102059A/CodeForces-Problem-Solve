#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n = 0;
    cin>>s;
    int c = s.size();
    for(int i=1;i<c;i++){
            if(islower(s[i])){
                n++;
            }
    }
 if(islower(s[0])&&n==0){
   s[0]=toupper(s[0]);
       for(int i=1;i<c;i++){
      s[i]=tolower(s[i]);
      }
      cout<<s;
    }else if(isupper(s[0])&&n==0){

       for(int i=0;i<c;i++){
      s[i]=tolower(s[i]);
      }
      cout<<s;
    }else{

    cout<<s;
    }

}



