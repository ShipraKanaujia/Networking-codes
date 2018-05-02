

#include<stdio.h>
int main()
{
int n,j,k;
int i,m;
int a[20],s[20];
printf("enter window size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter frame to be sent");
scanf("%d",&a[i]);
}

printf("enter which frame you want to lost");
scanf("%d",&m);

/*for(i=0;i<n;i++)
{
if(i/m==1){
printf("\n frame lost %d",i);
break;
}
}*/

printf("\n receiver side");


for(i=0;i<n;i++)
{
if(i==m)
{
printf("\n send %d frame again",i);
scanf("%d",&a[i]);
break;
}
}
for(i=0;i<=m-1;i++)
printf("\n frame received %d",a[i]);
for(i=m+1;i<n;i++)
printf("\n frame received %d",a[i]);

printf("\n frame received %d",a[m]);

}
