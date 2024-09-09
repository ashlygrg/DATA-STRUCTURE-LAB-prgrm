#include <stdio.h>
void main()
{
	int i,j,n,a[50],temp,t=0;
	t++;
	printf("enter no of elements: ");
	t++;
	scanf("%d",&n);
	printf("elements of array");
	t++;
	for(i=0;i<n;i++)
	{
		t++;
		scanf("%d",&a[i]);
		t++;
	}
	t++;
	i=1;
	i++;
	while(i<n)
	{
		t++;
		temp=a[i];
		j=i-1;
		t++;
		t++;
		while((j>=0)&&(temp<a[j]))
		{	
			t++;
			a[j+1]=a[j];
			t++;
			j--;
			t++;
		}
		t++;
		a[j+1]=temp;
		t++;
		i++;
		t++;
		}
		t++;
		printf("sorted array is :");
		t++;
		for(i=0;i<n;i++)
		{
		t++;
		printf("%d \t",a[i]);
		t++;
		}
	
		 printf("space complexity =%d",20+4*n);
                printf("time complexity = %d",t);
}
	
			
			
		
			
	
