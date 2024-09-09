#include <stdio.h>
void main()
{
     int left=0,n,right,x,a[50],flag=0,mid,t=0;
     t++;
     t++;
     t++;
     t++;
     printf("enter no of elements; ");
     t++;
     scanf("%d",&n);
     t++;
    
     printf("enter elements of array: ");
     t++;
     for(int i=0;i<n;i++)
     {
     t++;
     scanf("%d",&a[i]);
     t++;
     }
      printf("enter no to be searched in array; ");
     t++;
     scanf("%d",&x);
     t++;
     t++;
     right=n-1;
     while(left<=right)
     {
     t++;
     mid=(left+right)/2;
     if(a[mid]==x)
     {
     t++;
     flag=1;
     break;
     t++;
     }
     else if (x>a[mid])
     
     {
     left=mid+1;
     t++;
     }
     else
     {
     right=mid-1;
     t++;
     }
     t++;
     }
     if (flag==0)
     {
     t++;
     printf("element not found \n");
     }
     else if(flag==1)
     {
     t++;
     printf("item found at %d position \n",mid+1);
     }
     t++;
     printf("space complexity =%d",(8*4+4*n));
     t++;
     printf("time complexity = %d",t);

}
     
     
     			 

