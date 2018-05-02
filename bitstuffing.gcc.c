#include<stdio.h>
int main()
{
    int n,a[20],ctr=0;
    printf("Enter the number of bits in the message\n");
    scanf("%d",&n);

    int i,k=0;
    printf("Enter the message \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

            for(i=0;i<n;i++)
                printf("%d",a[i]);



    for(i=0;i<n;i++)
    {

        if((a[i]==0 )&&( a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1))
        {   ctr++;
            for(k=n;k>i;k--)
                {
                    a[k+1]=a[k];

                }

                a[i+1]=0;
        }

    }

      printf("Entered  message bitstuffed\n");
    for(i=0;i<n+ctr;i++)
        printf("%d",a[i]);


    for(i=0;i<=n;i++)
    {

        if((a[i]==0 )&&( a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1 )&&(a[++i]==1)&& (a[++i]==0) )
        {
            for(k=i;k<n;k++)
                {
                    a[k]=a[k+1];

                }


        }

    }

      printf("Entered  message bitdestuffed\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    }

