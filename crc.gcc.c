#include<stdio.h>
#include <stdbool.h>
int main(){
    int n,i;
    printf("Enter the size of the message\n");
    scanf("%d",&n);

    int q=n+2;
    int a[q];
    printf("Enter the message\n");

//  for(i=0;i<n-2;i++)
       // printf("%d",a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    a[i]=0;
    a[i+1]=0;
    for(i=0;i<q;i++)
        printf("%d",a[i]);

   int  r,s,t;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            r=a[i]^1;
            s=a[i+1]^0;
            t=a[i+2]^1;
        }
        else
        {
            r=a[i]^0;
            s=a[i+1]^0;
            t=a[i+2]^0;
        }
    }
    printf("\n%d  %d\n",s,t);

   /* if(s==6356711)
    a[i]=0;
    else a[i]=1;
      if(s==6356710)
    a[i+1]=1;
    else a[i]=0;*/
        a[i]=s;
    a[i+1]=t;

    for(i=0;i<q;i++)
       printf("\n%d",a[i]);
int x,y,z;

  for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            x=a[i]^1;
            y=a[i+1]^0;
            z=a[i+2]^1;
        }
        else
        {
            x=a[i]^0;
            y=a[i+1]^0;
            z=a[i+2]^0;
        }
    }


     printf("\n%d  %d\n",y,z);
    if((y==0)&&(z==0))
        printf("The message has been successfully transmited");
    else
          printf("The message has not been successfully transmited");
return 0;
}

