#include<stdio.h>
void main(){
	int i,j,m,n,k=1,a[50][50],b[50][50];
	printf("enter the order of matrix ");
	scanf("%d%d",&m,&n);
	printf("enter the no of elements in array:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("original array:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d \t",a[i][j]);
			}
			printf("\n");
		}
		b[0][0]=m,b[0][1]=n;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[i][j]!=0){
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
				}
			}
		}
		b[0][2]=k-1;
		printf("sparse matrix is:\n");
		for(i=0;i<k;i++){
		for(j=0;j<3;j++){
		printf("%d \t",b[i][j]);
		}
		printf("\n");
		}
   }
		
		
				
		
				
		
		
	
	
	
