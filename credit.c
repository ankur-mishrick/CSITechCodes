//To check if a credit card is valid or not//

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,count=0,count1=0,a[50],b[50],c[50],sum1=0,sum2=0,sum3,x,y,z;
    long long int n,res,res1;
    printf("Enter card number: ");
    scanf("%lld",&n);
    res=n;
    while(res!=0)
    {
        res=res/10;
        count++;
    }
    res1=n;
    for(i=1;i<=count;i++)
    {
        if(i!=count)
        {
            a[count-i]=res1%10;
            res1=res1/10;
        }
        else if(i==count)
        {
            a[count-i]=res1;
        }
    }
    if(count==15||count==16||count==13)
    {
        j=0;
        for(i=2;i<=count;i+=2)
        {
            b[j]=(2*a[count-i]);
            j++;
        }
        x=j;
        y=0;
        z=0;
        for(i=0;i<x;i++)
        {
            for(j=i+y;j<=(2*x);j++)
            {
                y=0;
                if(b[i]/10==0)
                {
                    c[j]=b[i];
                    z++;
                    break;
                }
                else if(b[i]/10!=0)
                {
                    c[j]=b[i]/10;
                    c[j+1]=b[i]%10;
                    y++;
                    z+=2;
                    break;
                }
            }
        }
        for(i=0;i<z-1;i++)
        {
            sum1=sum1+(c[i]);
        }
        for(i=1;i<=count;i+=2)
        {
            sum2=sum2+a[count-i];
        }
        sum3=sum1+sum2;
        if(sum3%10==0)
        {
            if(a[0]==3)
            {
                if(count==15)
                {
                    printf("American Express- VALID");
                }
            }
            else if(a[0]==5)
            {
                if(count==16)
                {
                    printf("Master Card- VALID");
                }
            }
            else if(a[0]==4)
            {
                if(count==13 || count==16)
                {
                    printf("Visa- VALID");
                }
            }
        }
        else
        {
            printf("INVALID CARD...Please check the number again...");
        }
    }
    else
    {
        printf("Please enter a valid card number with 13,15 or 16 digits...");
    }
    /*for(i=0;i<z-1;i++)
    {
        printf("%d\n",c[i]);
    }*/
    //printf("%d%d",sum1,sum2);
    //printf("%d%d%d%d%d%d%d%d",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8]);
    //printf("%d%d%d%d%d%d%d%d",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]);
    //printf("%d",count1);
    //printf("\n%d",count1);
    //printf("%d",z);
    /*printf("%d",sum1);
    printf("\n%d",sum2);
    printf("\n%d",sum3);*/
    getch();
    return 0;
}