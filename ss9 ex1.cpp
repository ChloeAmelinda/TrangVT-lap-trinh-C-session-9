#include<stdio.h>
int main()
{
	int arr[100];
	int n ,i;
	
	// nhap so phan tu 
	printf("Nhap so phan tu : ");
	scanf("%d",n );
	
	// nhap tung phan tu 
	for(i=0; i<n ; i++)
	{
		printf("nhap phan tu thu %d : ",i+1);
		scanf("%d" ,&arr[i]);
	}
	
	
	
	
	
	return 0;
}
