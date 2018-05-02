#include<stdio.h>

void main()
{
    int n,i,s,sent=0,ack,j;
    printf("Enter the no. of frames:");
    scanf("%d",&n);

    printf("Enter the window size:");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        for(j=0;j<s;j++)
        {
            if(sent<=n)
            {
                  printf("Frame %d has been transmitted.\n",sent);
                  sent++;
            }
        }
    printf("Enter the last acknowledgment received:");
    scanf("%d",&ack);

      if(ack==n+1)
         {
            printf("All Frames have been transmitted.");
             break;
         }
      else
        {
         sent=ack;
         continue;
        }
    }
}
