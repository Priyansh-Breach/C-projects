#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void create();
void insert_last();
void display();


struct diary
{
    int date;
    char *data;
    struct diary *next;
};

struct diary *first = NULL,*last = NULL,*current,*disp;
int aa,dd,x;
char bb[1000],cc[1000];

void main()
{
    start:
    printf("PRESS 1 TO CREATE A DIARY \nPRESS 2 TO ADD A NEW NOTE \nPRESS 3 TO DISPLAY OLD NOTES \nPRESS 0 TO EXIT");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            create();
            goto start;
        }
        case 2:
        {
            insert_last();
            goto start;
        }
        case 3:
        {
            display();
            goto start;
        }
        case 0:
        {
            exit;
        }
    }
}





void create()
{
    if((first == NULL)&&(last == NULL))
    {
        struct diary *current = (struct diary*)malloc(sizeof(struct diary));
        printf("ENETR TODAY'S DATE IN DDMMYYYY FORMAT:");
        scanf("%d",&aa);
        current -> date = aa;
        printf("TODAY'S NOTE:");
        scanf(" %[^\n]%*s",bb);
        current -> data = bb;
        current -> next = NULL;
        first = current;
        last = current;
    }
    else
    {
        printf("DIARY IS ALREADY CREATED\n");
    }
}

void insert_last()
{
    struct diary *current = (struct diary*)malloc(sizeof(struct diary));
    printf("ENETR TODAY'S DATE IN DDMMYYYY FORMAT:");
    scanf("%d",&dd);
    current -> date = dd;
    printf("TODAY'S NOTE:");
    scanf(" %[^\n]%*s",cc);
    current -> data = cc;
    current -> next = NULL;
    last = first;
   /* while(disp != NULL)
    {
        last = last -> next;
    }*/
    last -> next = current;
    last = current;
}

void display()
{
    disp = first;
    while(disp != NULL)
    {
        printf("%s\n",disp -> data);
        disp = disp -> next;
    }
}
