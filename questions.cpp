#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*start;
typedef struct node list;

void create();
void middle();
void counts();
int main()
{
	int choice;
	do{
	
	printf("1.create\n");
	printf("2.middle\n");
		printf("3.count\n");
	printf("4.exit\n");
	printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		    create();
    		    break;
    	case 2:
    		    middle();
    		    break;
            case 3:
        	 counts();
        	 case 4:
        	 	exit(0);
        	 	
		default:
		        printf("wrong choice");	
				break;
 }
        }while(choice!=4);
return 0;
}
void create()
{
	list*p,*prev;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    start=NULL;
    for(i=0;i<n;i++)
    {
        p=(list*)malloc(sizeof(list));
        printf("data is:");
        scanf("%d",&p->data);
        p->next=NULL;
        if(start==NULL)
            start=p;
        else
            prev->next=p;
        prev=p;
    }
   
}
void middle()
{ int count=0;
	list*ptr=start;
	while(ptr!=NULL)
	{
			ptr=ptr->next;
			count++;
	}
if(count%2==0)
{
 count=count/2-1;
}
else
{
	count=count/2;
}
ptr=start;
while(count){

  ptr=ptr->next;
  count--;
}
printf("\n Middle of linked list %d",ptr->data);

}
void counts()
{
	list*p;
	int key,count;
	p=start;
	printf("enter key:");
	scanf("%d",&key);
	while(p!=NULL)
	{
		if(p->data==key)
		{
			count++;
		}
		p=p->next;
	}
	printf("\n counts- %d\n",count);
}

