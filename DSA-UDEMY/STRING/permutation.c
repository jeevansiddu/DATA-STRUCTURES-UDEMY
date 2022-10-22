#include <stdio.h>
void perm(char *s,int k){
    static int flag[10]={0};
    static char res[10];
    if(s[k]=='\0'){
        res[k]='\0';
        printf(" %s ",res);
    }
    else{
        for(int i=0;s[i]!='\0';i++){
            if(flag[i]==0){
                flag[i]=1;
                res[k]=s[i];
                perm(s,k+1);
                flag[i]=0;
            }
        }
    }
}

int main()
{
    printf("Hello World");
    char s[]="ABCD";
    perm(s,0);

    return 0;
}

