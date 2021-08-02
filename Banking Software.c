//banking module for a small banking

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct private_info
{
    char NAME;
    struct DOB
    {
        int dd;
        int mm;
        int yyyy;
    } dob;
    int ACCOUNT_NUMBER;
    char CARD_NUMBER;
    int pin;
    int AVAILABLE_BALANCE;
} pvt;
  

void main()
{
    int x;
    char temp_card_number;
    printf("                             //WELCOME TO PIXEL-HOSTERS ONLINE BANKING SOFTWARE//\n\n");
    printf("PRESS 1 TO ACCESS PUBLIC DATABASE \nPRESS 2 TO ACCESS YOUR ACCOUNT\nPRESS 3 TO OPEN A NEW ACCOUNT\nPRESS 0 FOR QUERIES\n\n\n");
    scanf("%d",&x);
    switch(x)
    {
        case 0:
        {
            char ACCOUNT;
            int k; 
            int Pin =244822;
            int tPin;
            int MOBILE=9999999;
            int tMOBILE;
            int tOTP;
            int OTP = 123456;
            int nPin;
            char EMPLOYEE;
            int tEPIN,EPIN=0000;
            printf("\n\n\nPRESS 1 FOR TRANSACTION HISTORY\nPRESS 2 TO CHANGE YOUR PIN\nPRESS 3 FOR EMPLOYEE LOGIN\n\n\n");
            scanf("%d",&k);
            switch (k)
            {
                case 1:
                {
                    printf("ENTER YOUR ACCOUNT NUMBER :");
                    scanf("%s",&ACCOUNT);//Account= X  Pin = 244822
                    switch(ACCOUNT)
                    {
                        case 'X':
                        {
                            printf("\nENTER YOUR PIN :");
                            scanf("%d",&tPin);
                            if(tPin == Pin)
                            {
                                printf("\nYOUR TRANSACTION HISTORY IS SENT ON YOUR REGISTERED MOBILE NUMBER AND EMAIL ID\n\n\n");
                            } 
                            else
                            {
                                printf("\nINVALID PIN\n\n\n");
                            }
                            break;
                        }
                        default:
                        {
                            printf("IVALID ACCOUNT NUMBER");
                        }
                    }
                    break;
                }
                case 2:
                {
                    printf("\nENTER YOUR ACCOUNT NUMBER :");
                    scanf("%s",&ACCOUNT);//Account= X
                    switch(ACCOUNT)
                    {
                        case 'X':
                        {
                            printf("\nENTER YOUR MOBILE NUMBER :");
                            scanf("%d",&tMOBILE);//MOBILE = 9999999 
                            if(tMOBILE == MOBILE)
                            {
                                printf("\nENTER 6-DIGIT OTP SENT ON REGISTERED MOBILE NUMBER\n\n\n");
                                scanf("%d",&tOTP);  //OTP = 123456
                                if(OTP == tOTP)
                                {
                                    printf("\nENTER YOUR NEW PIN :");
                                    scanf("%d",&nPin);
                                    Pin = nPin;
                                    printf("\nPIN CHANGED SUCCESSFULLY\n\n\n");
                                }
                                else 
                                {
                                    printf("\nINVALID OTP ENTERED\n\n\n");
                                }
                            }
                            else
                            {
                                printf("\nINVALID MOBILE NUMBER\n\n\n");
                            }
                            break;
                        }
                        default:
                        {
                            printf("\nINVALID ACCOUNT NUMBER\n\n\n");
                            break;
                        }
                    }
                    break;
                }
                case 3:
                {
                    printf("\nENTER YOUR EMPLOYEE ID :");
                    scanf("%s",&EMPLOYEE);
                    switch(EMPLOYEE)
                    {
                        case 'E':
                        {
                            printf("\n\nENTER YOUR EMPLOYEE PIN :");
                            scanf("%d",&tEPIN);//EPIN = 0000
                            if(tEPIN == EPIN)
                            {
                                printf("\nEMPLOYEE LOGIN SUCCESSFUL\n\n\n");
                            }
                            else
                            {
                                printf("\nINVALID EMPLOYEE PIN\n\n\n");
                            }
                            break;
                        }
                        default:
                        {
                            printf("\nINVALID EMPLOYEE ID\n\n\n");
                            break;
                        }
                    }
                    break;
                }
            }   
            break;
        }
        case 1:
        {
            printf("NUMBER OF ACTIVE ACCOUNTS: 50,000\n");
            printf("TOTAL CASH VOLUME:50,00,00,000\n");
            printf("BRANCH CODE: PHI000114235\n");
            break;
        }
        case 2:
        {
            printf("ENTER YOUR CARD NUMBER :");
            scanf("%s",&temp_card_number);
            switch(temp_card_number)
            {
                int tpin;
                case 'x':
                printf("ENTER YOUR PIN :");
                scanf("%d",&tpin);
                int pin = 244822;
                if(tpin == pin)
                {
                    printf("\n\nNAME :AMAN TANK\n\nD.O.B :05.04.2001\n\nACCOUNT NUMBER :673893461209\n\nAVAILABLE BALANCE :5,000");
                }
                else
                {
                    printf("**INVALID PIN**");    
                }
            }
            break;
        }
        case 3:
        {
            printf("ENTER YOUR NAME :");
            scanf(" %[^\n]%*c",&pvt.NAME);
            printf("ENTER YOUR D.O.B :");
            scanf("%d %d %d",&pvt.dob.dd,&pvt.dob.mm,&pvt.dob.yyyy);
            printf("SET YOUR CARD PIN :");
            scanf("%d", &pvt.pin);
            break;
        }
        
    }
}
