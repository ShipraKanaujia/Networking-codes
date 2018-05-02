#include<stdio.h>

void input();
void transmit();
void receiver();

int n,a[20],i,t,cmp,c;
void main()
{
 input();
 for(i=0;i<n;i++)
 {
     transmit();
     receiver();
 }
}

void input()
{

    printf("Enter the no. of frames:");
    scanf( "%d",&n);

    for(i=0;i<n;i++)
    {
      if(i%2==0)
         a[i]=1;
      else
         a[i]=0;
    }
    printf("The frames in the sequence are:\n");
     for(i=0;i<n;i++)
       printf("%d\t",a[i]);

}

void transmit()
{
    t=a[i];
    if(i%2==0)
        cmp=0;
    else
        cmp=1;
}
void receiver()
{
  recheck:
  c=rand();
  printf("\nRandom No.=%d \t and Frame No.=%d\n",c,t);

  if(c%2==0)
  {
      printf("Acknowledgement Failure:%d\n",t);
      //transmit();
      goto recheck;
  }
  else
     printf("Acnowledgement successfully received:%d.\n",cmp);
}
