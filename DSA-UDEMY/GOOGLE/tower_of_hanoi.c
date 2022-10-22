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
            for(int i=0;i<255;i++){
                ch[i]=0;
            }
        scanf("%s\n%s",b,c);
        int len1=strlen(b);
        int len2=strlen(c);
        for(int i=0;i<len2;i++){
            ch[c[i]]++;
        }
        for(int i=0;i<len1;i++){
            ch[b[i]]--;
            if(ch[b[i]]<0){
                printf("Impossible");
                f=1;
                break;
            }


        }
        if(f==0){
            for(int i=0;i<255;i++){
                sum=sum+ch[i];
            }
            printf("%d",sum);

        }
    }

}
