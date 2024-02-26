#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,count=0;
    int n=strlen(s);

    for(i=0;i<n;i++){
        if(s[i]=='h'&&s[i]=='e'&&s[i]=='l'&&s[i]=='l'&&s[i]=='o'){
            count++;
            break;
        }
        else{
            count=0;
        }
    }

    if(count==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
