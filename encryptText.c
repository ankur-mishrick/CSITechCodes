//To encrypt a message//

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,k,l,m,x,c[50],d[50],temp;
    char a[50],b[26],e[50],len,j;
    printf("Enter what you want to encrypt: \n");
    gets(a);
    len=strlen(a);
    j='a';
    for(i=0;i<26;i++)
    {
        b[i]=j;
        j++;
    }
    /*for(i=0;i<26;i++)
    {
        printf("%c ",b[i]);
    }*/
    printf("Enter the keynumber= ");
    scanf("%d",&x);
    l=0;
    for(i=0;i<len;i++)
    {
        for(k=0;k<26;k++)
        {
            if(a[i]==b[k])
            {
                c[l]=k;
                l++;
                break;
            }
        }
    }
    /*for(l=0;l<len;l++)
    {
        printf("%d",c[l]);
    }*/
    m=0;
    for(l=0;l<len;l++)
    {
        if(x<(26-c[l]))
        {
            d[m]=c[l]+x;
            m++;
        }
        else if(x>=(26-c[l]))
        {
            temp=0;
            d[m]=temp+(x-(26-c[l]));
            m++;
        }
    }
    for(i=0;i<len;i++)
    {
        k=d[i];
        e[i]=b[k];
    }
    printf("The encrypted message is: \n");
    for(i=0;i<len;i++)
    {
        printf("%c",e[i]);
    }
    getch();
    return 0;
}