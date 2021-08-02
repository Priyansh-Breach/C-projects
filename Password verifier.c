#include<stdio.h>
#include<string.h>

int main()
{
    char pass[7];
    char check[7];
    int x,y,z;
    printf("enter you password to sign in:");
    scanf("%s", pass);
    printf("enter password to login:");
    scanf("%s", check);
    x = strcmp(pass,check);
    if(x == 0)
    {
        printf("login successful");
    }
    else
    {
        printf("try again");
    }
    return(0);
}
