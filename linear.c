#include <stdio.h>
void main()
{
     int n,i,x,count=0,a[100],t=0,s=0;
     t++;
     t++;
     printf("enter no of elements;");
     t++;
     scanf("%d",&n);
     t++;
     printf("enter no to be searched in array;");
     t++;
     scanf("%d",&x);
     t++;
     printf("enter elements of array:");
     t++;
     for(i=0;i<n;i++){
     t++;
     scanf("%d",&a[i]);
     t++;
     }
     t++;
     i=0;
     t++;
     	while(i<n){
     	t++;
     		if(a[i]==x)
     		{
     		t++;
     		count++;
     		printf("element found at %d position \n",i+1);
     		t++;
     		}
     		i++;
     		}
     			if(count>0)
     			{t++;
     			printf("element found %d times\n",count);
     			}
     			else{
     			t++;
     			 printf("element not found");
     			 }
     			 t++;
     			 printf("space complexity = %d",(5*4+4*n));
     			 t++;
     			 
     			 printf("time complexity =%d", t);
     			 
}
     		
     		
     
