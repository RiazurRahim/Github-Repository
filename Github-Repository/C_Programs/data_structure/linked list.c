#include<stdio.h>
#include<stdlib.h>


void append(void);
int length(void);
void display(void);
void addBegin(void);
void addAfter(void);
void delete(void);
void swap(void);
void reverse(void);



struct node
{
    int data;
    struct node *add;
};
struct node *root = NULL;


int main()
{
    int len,ch;

    while(1)
    {
        printf("----------------------\n");
        printf("linked list operations\n");
        printf("1.append\n");
        printf("2.addBegin\n");
        printf("3.addAfter\n");
        printf("4.length\n");
        printf("5.display\n");
        printf("6.delete a node\n");
        printf("7.swap the nodes\n");
        printf("8.reverse the linked list\n");
        printf("9.exit\n");
        printf("----------------------\n");

        printf("enter you choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            append();
            break;
        case 2 :
            addBegin();
            break;
        case 3 :
            addAfter();
            break;
        case 4 :
            len=length();
            printf("the length is %d\n",len);
            break;
        case 5 :
            display();
            break;
        case 6 :
            delete();
            break;
        case 7 :
            swap();
            break;
        case 8 :
            reverse();
            break;
        case 9 :
            exit(1);
            break;
        default:
            printf("invalid choice \n");
            break;


        }

    }
}


void append()
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof (struct node));
    printf("enter the no\n");
    scanf("%d",&temp->data);

    if(root==NULL)   // list is empty
    {
        root=temp;
    }
    else
    {
        p=root;
        while(p->add!=NULL)
        {
            p=p->add;
        }
        p->add=temp;
    }
}

int length()
{
    int count=0;
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            count++;
            temp=temp->add;
        }
        return count;
    }
}


void display(void)
{
    struct node *temp;
    temp=root;
    if(root==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("-->%d  ",temp->data);
            temp=temp->add;
        }
        printf("\n");
    }


}

void addBegin(void)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&temp->data);
    temp->add=NULL;
    if(root==NULL)
    {
        root=temp->add;
    }
    else
    {
        temp->add = root;
        root = temp;
    }
}

void addAfter()
{
    struct node *temp,*p;
    int i=1,loc,len;

    printf("enter the location\n");
    scanf("%d",&loc);

    len=length();
    if(loc>len)
    {
        printf("not enough space\n");
    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->add;
            i++;

        }
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter the no\n");
        scanf("%d",&temp->data);
        temp->add=NULL;
        temp->add = p->add;
        p->add = temp;
    }

}
void delete()
{
    struct node *temp,*p,*q;
    int loc,i=1;
    printf("enter the location\n");
    scanf("%d",&loc);
    temp=p=root;
    if(loc > length())
    {
        printf("invalid location\n");
    }
    else if(loc==1)
    {
        root=temp->add;
        temp->add=NULL;
    }
    else
    {
        while(i<loc-1)
        {
            p=p->add;
            i++;
        }
        q=p->add;
        p->add=q->add;
        q->add=NULL;

        free(q);
    }

}


void swap()
{
    int loc,i=1,len;
    struct node *p,*q,*r;
    p=root;
    printf("enter the location\n");
    scanf("%d",&loc);

    if(loc>length())
    {
        printf("did not have nodes to swap\n");
    }
    else
    {
        while(i<loc)
        {
            p=p->add;
            i++;
        }
        q=p->add;
        r=q->add;

        q->add=r->add;
        r->add=q;
        p->add=r;
    }


}


void reverse(void)
{
    struct node *p,*q,*temp;
    int i,j,k=0,len;
    display();
    len=length();
    p=q=root;
    if((len==0)||(len==1))
    {
        printf("list is empty");
        exit(1);
    }
    else
    {
        while(i<j)
        {
            k=0;
            while(k<j)
            {
                q=q->add;
                k++;
            }
            temp = p->add;
            p->add = q->add;
            q->add = temp;
            i++;
            j--;
            p=p->add;
            q=root;
        }
    }
    temp=root;
    while(temp->add!=NULL)
    {
        printf("-->%d  ",temp->data);
        temp=temp->add;
    }
}





