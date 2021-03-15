#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
void show();  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head=NULL; 


int main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        insert(item);      
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);
  if(choice==1){
    show();
  }
return 0;
  }


void insert(int item)  
    {  
        struct node *ptr = (struct node*)malloc(sizeof(struct node));     
        struct node *temp;  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");     
        }  
        else  
        {  
            ptr->data = item;  
            if(head == NULL)  
            {  
                ptr -> next = NULL;  
                head = ptr;  
                printf("\nNode inserted");  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr;  
                ptr->next = NULL;  
                printf("\nNode inserted");  
              
            }  
        }  
    } 

void show(){
        struct node *temp; 

  temp=head;
  while(temp != NULL){
    printf("%d\t",temp->data);
    temp=temp->next;
  }
  
}
