#include<stdio.h>
void main(){
	int pos,i,n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in binary tree:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos==0)
	{
		printf("NO elements at the position 0\n");
	}
		else{
		if(pos/2==0){
		printf("NO PARENT!");
		}
		else{
			printf("Parent node of %d=%d\n ",a[pos],a[pos/2]);
		}
		if(2*pos>n){
			printf("No left child.\n");
		}
					else{
			printf("Left child of %d=%d\n ",a[pos],a[pos*2]);
				}
			if((2*pos)+1>n)
				{
				printf("No right child.");
				}
				else{
				printf("right child of %d=%d\n ",a[pos],a[(pos*2)+1]);
			}}}
					
			
		

