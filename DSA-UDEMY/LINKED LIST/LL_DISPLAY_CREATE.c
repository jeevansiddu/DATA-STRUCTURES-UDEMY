 #include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail=NULL;
void Sorted_Insert(struct Node *p,int x){
    struct Node *q=0;
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {

        head=newnode;
        tail=newnode;

    }
    else{
        while(p && (x>(p->data))){
            q=p;
            p=p->next;
        }
        if(p==head){
            newnode->next=head;
            head=newnode;
        }
        else{
            newnode->next=q->next;
            q->next=newnode;
            if(q==tail){
                tail=newnode;
            }
        }
    }
}
struct Node* create_node(int x){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    return newnode;

}
void Insert(int pos,int x){
    if(pos==0)
    {
        struct Node* newnode=create_node(x);
        newnode->next=head;
        head=newnode;
    }
    else if(pos>0)
    {
        struct Node *p=head;
        for(int i=0;i<pos-1 && p!=NULL;i++){
            p=p->next;
        }
        struct Node *newnode=create_node(x);
        if(p->next==tail && p==tail){
                tail=newnode;

        }
        newnode->next=p->next;
        p->next=newnode;


    }
}
void create(int *a,int n)
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=a[0];
    newnode->next=NULL;
    head=newnode;
    tail=newnode;

    for(int i=1;i<n;i++){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=a[i];
        newnode->next=NULL;
        tail->next=newnode;
        tail=newnode;

    }
}
void Delete(struct Node *p,int pos){
    struct Node *q=head;
    if(pos==1)
    {
        if(p==tail){
                tail=q;
            }
        head=head->next;
        free(q);
    }
    else{
        for(int i=0;i<pos-1 &&p;i++){
            q=p;
            p=p->next;
        }
        if(p!=NULL){
            q->next=p->next;
            if(p==tail){
                tail=q;
            }
            free(p);

        }


    }
}
void rec_display(struct Node *p){
    if(p==NULL) return;
    printf("%d ",p->data);
    rec_display(p->next);
}
void rec_reverse_display(struct Node *p){ // prints LL in reverse order
    if(p==NULL) return;
    rec_reverse_display(p->next);
    printf("%d ",p->data);
}
void half_reverse_display(struct Node *p){  // prints first 3 in reverse order at last and last 3 elemnts in ascending order at first
    static int count=0;
    if(p==NULL){
        return ;
    }
    count++;
    if(count==3){
        display(p->next);
    }
    else{
        half_reverse_display(p->next);
    }
    printf("%d ",p->data);
}
void display(struct Node *p)
{
    //struct Node *p=head;
    while(p!=0){
        printf("%d ",p->data);
        p=p->next;
    }
}
void count_and_sum_and_max(struct Node *p)
{
    int count=0,sum=0,max=-999;
    while(p!=NULL){
        count++;
        if(p->data>max){
            max=p->data;
        }
        sum=sum+(p->data);
        p=p->next;
    }
    printf("%d %d %d ",count,sum,max);
}
int rec_sum(struct Node *p){
    if(p==NULL) return 0;
    return rec_sum(p->next)+(p->data);
}
struct Node* LSearch(struct Node* p,int key)
{
    while(p!=NULL){
        if(p->data==key){
            return p;
        }
        p=p->next;
    }
}
struct Node* improved_LSearch(struct Node* p,int key){
    struct Node *q=NULL;
    while(p!=NULL){
        if(p->data==key){
            q->next=p->next;
            p->next=head;
            head=p;
            return head;
        }
        else{
            q=p;
            p=p->next;
        }
    }
}
void remove_duplicate(struct Node *p){
    struct Node *q=p->next;
    while(q!=NULL){
            if(p->data!=q->data){
                p=q;
                q=q->next;
            }
            else{
                p->next=q->next;
                free(q);
                q=p->next;
            }


    }
}
void main(){
    int a[]={8,4,2,5,7,7,9};
    /*
    create(a,6);
    display(head);
    printf("\n");
    rec_reverse_display(head);
    printf("\n");
    half_reverse_display(head);
    printf("\n");
    count_and_sum_and_max(head);
    printf("\n");
    printf("%d ",rec_sum(head));
    printf("\n");
    printf("%d ",((LSearch(head,4))->data));
    printf("\n");
    printf("%d ",(improved_LSearch(head,4))->data);
    printf("\n");
    display(head);
    printf("\n");
    Insert(2,3);
    Insert(0,10);
    display(head);

    Sorted_Insert(head,30);
    Sorted_Insert(head,40);
    Sorted_Insert(head,100);
    Sorted_Insert(head,20);
    Sorted_Insert(head,50);
    */



    create(a,7);
    printf("\n");
    display(head);
    //Delete(head,2);
    printf("\n");
    printf("\n");
    remove_duplicate(head);
    display(head);

}
