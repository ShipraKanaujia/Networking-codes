#include<stdio.h>
int main()
{
    int d;
    printf("Enter the size of the data ");
    scanf("%d",&d);
    d=d+3;
    int a[d],i;
    printf("Enter the data %d \n",d);
    for(i=d;i>=1;i--)
    {
        if((i==1)|| ((i%2==0)&&(i%3!=0)))
        {
            a[i]=5;
        }
        else
            scanf("%d",&a[i]);
    }


    a[1]=a[3]^a[5]^a[7];
    a[2]=a[3]^a[6]^a[7];
    a[4]=a[5]^a[6]^a[7];

        printf("The data to be sent is\n");
        for(i=d;i>=1;i--)
        printf("%d",a[i]);


        int r[7],flag=0;
        printf("Enter the received data\n");
        for(i=d;i>=1;i--)
         {
             scanf("%d",r[i]);
             if(r[i]!=a[i])
                flag=1;
         }
         printf("%d\n",flag);
         if(flag==1)
         {
             printf("There is error\n");
             int x,y,z;
             x=r[1]^r[3]^r[5]^r[7];
             y=r[2]^r[3]^r[6]^r[7];
             z=r[4]^r[6]^r[5]^r[7];
             printf("%d %d %d\n",z,y,x);
             if(x!=0)
                x=2^0;
                else x=0;

                if(y!=0)
                y=2^1;
                else y=0;

                if(z!=0)
                z=2^2;
                else z=0;

                x=x+y+z;
                printf("%d position",x);

                if(r[x]==1)
                    r[x]=0;
                    else
                    r[x]=1;

        printf("The data recieved now is\n");
        for(i=d;i>=1;i--)
        printf("%d",r[i]);

         }
else{
    printf("NO error\n");
    printf("The data recieved  is\n");
        for(i=d;i>=1;i--)
        printf("%d",r[i]);
}


    return 0;
}
