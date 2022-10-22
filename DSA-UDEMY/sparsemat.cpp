/*#include<stdio.h>
#include<iostream>
struct element
{
    int i;
    int j;
    int x;
};
struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};
void create(struct sparse *s)
{
    printf("enter no. of rows and columns and elements=");
    scanf("%d%d%d",&s->m,&s->n,&s->num);
    s->e=(struct element*)malloc(sizeof(struct element)*s->num);
    printf("\nEnter all the elements with its row and column\n");
    for(int i=0;i<s->num;i++){
        scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);

    }


}
struct sparse* add(struct sparse *s1,struct sparse *s2)
{
    if(s1->m!=s2->m && s1->n!=s2->n){
        return 0;
    }
    struct sparse *sum;
    sum=(struct sparse *)malloc(sizeof(struct sparse));
    sum->m=s1->m;
    sum->n=s2->n;
    sum->e=(struct element*)malloc(sizeof(struct element)*(s1->num+s2->num));
    int i=0,j=0,k=0;
    while(i<s1->num && j<s2->num){
        if(s1->e[i].i<s2->e[j].i){
            sum->e[k++]=s1->e[i++];
        }
        else if(s1->e[i].i>s2->e[j].i){
            sum->e[k++]=s2->e[j++];
        }
        else{
            if(s1->e[i].j<s2->e[j].j){
                sum->e[k++]=s1->e[i++];
            }
            else if(s1->e[i].j>s2->e[j].j){
                sum->e[k++]=s2->e[j++];
            }
            else{
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
            }
        }
    }
    for(;i<s1->num;i++){
        sum->e[k++]=s1->e[i];
    }
    for(;j<s1->num;j++){
        sum->e[k++]=s2->e[j];
    }
    sum->num=k;
    return sum;

}
void display(struct sparse s)
{
    int k=0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(s.e[k].i==i &&s.e[k].j==j){
                printf("%d ",s.e[k++].x);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

*/
#include<iostream>
using namespace std;
class element{
public:
    int i;
    int j;
    int x;

};
class sparse{
    private:
        int m;
        int n;
        int num;
        element *e;
    public:
        sparse(int m,int n,int num){
            this->m=m;
            this->n=n;
            this->num=num;
            e=new element[this->num];
        }
        ~sparse(){
            delete [] e;

        }
        friend istream &operator>>(istream &is,sparse &s);
        friend ostream &operator<<(ostream &os,sparse &s);
};
istream &operator>>(istream &is,sparse &s){
     for(int i=0;i<s.num;i++){
            cin>>s.e[i].i>>s.e[i].j>>s.e[i].x;

        }
        return is;
}

        ostream &operator<<(ostream &os,sparse &s)
        {
            int k=0;
            for(int i=0;i<s.m;i++){
                for(int j=0;j<s.n;j++){
                    if(s.e[k].i==i && s.e[k].j==j){
                        cout<<s.e[k++].x<<" ";

                    }
                    else{
                        cout<<"0 ";
                    }
                }

                cout<<endl;
            }
            return os;
        }

int main(){
   sparse s(5,5,5);
    cin>>s;
    cout<<s;
   // s.display();
  //  create(&s2);
    //s3=add(&s1,&s2);

    //display(*s3);
}
