#include<stdio.h>
int main()
{
	// khai bao 
	int arr[100];
	int n,i,position,value;
	
	// nhap so phan tu
	printf("nhap so phan tu : ");
	scanf("%d", &n);
	// nhap tung phan tu 
	for(i=0 ; i<n ; i++)
	{
		printf("nhap phan  tu thu %d :",i+1);
		scanf("%d",&arr[i]);
	}
	// mang vua nhap 
	printf("mang vua nhap la : ");
	for(i=0;i<n ;i++)
	{
		printf("%d ",arr[i]);
	}
	// nhap vi tri can xoa
	printf("\n nhap vi tri can xoa : ");
	scanf("%d", &position);
	//kiem tra 
	if( position < n && position>=0)
	{
		// neu dung dich phan tu
		for( i = position ; i<n-1 ;i++)
		{
			arr[i]=arr[i+1]; 
		}
		n--;
		// in mang moi
		printf("mang moi sau khi xoa la : ",position);
		for(i =0;i<n ;i++)
		{
			printf("%d ", arr[i]);
		}
	}
	else 
	printf("khong hop le");
	
	
	
	
	return 0;
}
 
