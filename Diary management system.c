#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct diary
{
    int date;
    char *data;
    struct diary *next;
};

struct diary *first = NULL,*current,*head,*disp;
int aa,x;
char bb[1000];

void main()
{
    struct diary *current = (struct diary*)malloc(sizeof(struct diary));
    start:
    printf("PRESS 1 TO ENTER A NEW NOTE \nPRESS 2 TO DISPLAY PREVIOUS NOTES \nPRESS 0 TO EXIT");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            printf("ENETR TODAY'S DATE IN DDMMYYYY FORMAT:");
            scanf("%d",&aa);
            current -> date = aa;
            printf("TODAY'S NOTE:");
            scanf(" %[^\n]%*s",bb);
            current -> data = bb;
            current -> next = NULL;
            while(first == NULL)
            {
                first = current;
            }
            head = first;
            while(head -> next != NULL)
            {
                head = head -> next;
            }
            head -> next = current;
            printf("\n\n\n");
            goto start;
        }
        case 2:
        {
            while(head -> next != NULL)
            {
                printf("%d\n",head -> date);
                printf("%s\n",head -> data);
                head = head -> next;
            }
            printf("\n\n\n");
            goto start;
        }
        case 0:
        {
            exit;
        }
    }
}
