#include<stdio.h>

int main()
{
    int i,x;
    char input[2000000];
    
    
    printf("Type the input message: ");
    scanf("%[^\n]%*c", input);
    
    
    printf("Press 1 to encrypt \nPress 2 to decrypt\n");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1:
            for(i = 0; (i < 2000000 && input[i] != '\0'); i++)
            {
                input[i] = input[i] + 3*i;
            }
            printf ("\nEncryped Message : %s",input);
            
        case 2:
            for(i = 0; (i < 2000000 && input[i] != '\0'); i++)
            {
                input[i] = input[i] - 3*i;
            }
            printf ("\nDecrypted Message : %s",input);
    }
    
    return(0);
}
