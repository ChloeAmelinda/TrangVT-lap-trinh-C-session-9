#include<stdio.h>
int main()
{
	// khai bao
	int arr[100];
	int i,n;
	int position,value;
	// nhap so phan tu 
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	
	// nhap tung phan tu 
	for( i=0 ; i<n ; i++)
	{
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	// in ra mang vua nhap
	printf("Mang vua nhap la : ");
	for( i=0 ;i<n ; i++)
	{
		printf(" %d ", arr[i]);
	}
	// nhap vi tri muon them 
	printf("Nhap chi so muon sua : ");
	scanf("%d", &position);
	
	// kiem tra co thuoc khoang n khong
	if( position >0 && position < n)
	{
		// neu dung nhap gia tri
		printf("nhap gia tri muon thay doi : ");
		scanf("%d", &value);
		arr[position] = value;
		printf("mang sau khi thay doi la :");
		for(i=0; i<n ; i++)
		{
			printf("%d ",arr[i]);
		}
		
	}
	else
	{
		printf("Khong hop le");
	}
	return 0;
}
