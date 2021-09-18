#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct diary
{
    int date;
    char data[1000];
    struct diary *next;
    struct diary *prev;
};
typedef struct diary node;

void new_note(node *p);
void print_note(node *k);


int main()
{
    node *head, *tail;
    int s = 0,x;
    start:
    printf("PRESS 1 TO CREATE A DIARY \nPRESS 2 TO ADD A NEW NOTE \nPRESS 3 TO DISPLAY OLD NOTES \nPRESS 0 TO EXIT");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            if(s == 0)
            {
                head = (node*)malloc(sizeof(node));
                printf("ENETR TODAY'S DATE IN DDMMYYYY FORMAT:");
                scanf("%d",&head -> date);
                printf("TODAY'S NOTE:");
                scanf("%[^\n]s", head -> data);
                head -> next = NULL;
                head -> prev = NULL;
                s = s + 1;
                printf("%d",s);
                tail = (node*)malloc(sizeof(node));
                head -> next = tail;
                tail -> prev = head;
            }
            else
            {
                printf("DIARY IS ALREADY CREATED\n");
            }
            goto start;
        }
        case 2:
        {
            new_note(tail);
        }
        case 3:
        {
            print_note(head);
            goto start;
        }
        case 0:
        {
            exit;
        }
    }
}

void new_note(node *p)
{
    int m;
    printf("ENETR TODAY'S DATE IN DDMMYYYY FORMAT:");
    scanf("%d",&p -> date);
    printf("TODAY'S NOTE:");
    scanf(" %[^\n]s", p -> data);
    printf("PRESS 1 TO CREATE A NEW NOTE: ");
    scanf("%d", &m);
    if( m == 1)
    {
       new_note(p -> next); 
    }
    else 
    {
        printf(" ");
    }
}

void print_note(node *k)
{
    if(k -> next != NULL)
    {
        printf("%s", k -> data);
    }
    print_note(k -> next);
}
