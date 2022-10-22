#include<stdio.h>
void main()
{
    int a;
    char b[100000],c[1000000];
    int ch[255];
    int f=0,sum=0;;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
            f=0,sum=0;
            for(int j=0;j<255;j++){
                ch[j]=0;
            }
        scanf("%s\n%s",b,c);
        int len1=strlen(b);
        int len2=strlen(c);
        for(int j=0;j<len2;j++){
            ch[c[j]]++;
        }
        for(int j=0;j<len1;j++){
            ch[b[j]]--;
            if(ch[b[j]]<0){
                printf("IMPOSSIBLE");
                f=1;
                break;
            }


        }
        if(f==0){
            for(int j=0;j<255;j++){
                sum=sum+ch[j];
            }
            printf("%d",sum);

        }
    }

}
