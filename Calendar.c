//CALENDAR

#include<stdio.h>
#include<math.h>
#include<string.h>

struct COORDINATES
{
    int dd;
    int mm;
    int yyyy;
} cdn;


void main()
{
    char arr[][20] = {"SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" , "SATURDAY"};
    int d,m,y,k,x,i,p,t;
    printf("ENTER DATE, DAY AND YEAR TO GET THE CALENDAR:");
    scanf("%d %d %d",&cdn.dd,&cdn.mm,&cdn.yyyy);
    x = (cdn.yyyy-1)/100;
    t = 3*x/4;
    y = ((cdn.yyyy-1) + ((cdn.yyyy-1)/4) - t)%7;
    m = cdn.mm-1;
    if(cdn.yyyy%4 == 0)
    {
        if(cdn.yyyy%100 == 0)
        {
            if(cdn.yyyy%400 == 0)
            {
                p = 1;
            }
            else
            {
                p = 0;
            }
        }
        else
        {
            p = 1;
        }
    }
    else
    {
        p = 0;
    }
    switch(p)
    {
        case 0:
        {
            if(m == 0)
            {
                k = 0;
            }
            else if(m == 1)
            {
                k = 31%7;
            }
            else if(m == 2)
            {
                k = 59%7;
            }
            else if(m == 3)
            {
                k = 90%7;
            }
            else if(m == 4)
            {
                k = 120%7;
            }
            else if(m == 5)
            {
                k = 151%7;
            }
            else if(m == 6)
            {
                k = 181%7;
            }
            else if(m == 7)
            {
                k = 212%7;
            }
            else if(m == 8)
            {
                k = 243%7;
            } 
            else if(m == 9)
            {
                k = 273%7;
            }
             else if(m == 10)
            {
                k = 304%7;
            } 
            else if(m == 11)
            {
                k = 334%7;
            }
            break;
        }
        case 1:
        {
            if(m == 0)
            {
                k = 0;
            } 
            else if(m == 1)
            {
                k = 31%7;
            }
            else if(m == 2)
            {
                k = 60%7;
            }
            else if(m == 3)
            {
                k = 91%7;
            }
            else if(m == 4)
            {
                k = 121%7;
            }
            else if(m == 5)
            {
                k = 152%7;
            }
            else if(m == 6)
            {
                k = 182%7;
            }
            else if(m == 7)
            {
                k = 213%7;
            }
            else if(m == 8)
            {
                k = 244%7;
            } 
            else if(m == 9)
            {
                k = 274%7;
            }
            else if(m == 10)
            {
                k = 305%7;
            } 
            else if(m == 11)
            {
                k = 335%7;
            }
            break;
        }
    }
    d = (cdn.dd)%7;
    
    int n = (d + k + y + 1)%7;
    printf("%s\n",arr[n]);
    printf("%d %d %d %d %d %d", t , m , d , k , y , p);
}
