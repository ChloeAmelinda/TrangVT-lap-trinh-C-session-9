#include<stdio.h>
int main()
{
	// khai bao 
	int arr[100];
	int n,i;
	// nhap so phan tu 
	printf("nhap so phan tu : ");
	scanf("%d", &n);
	// nhap tung phan tu 
	for (i = 0; i < n; i++)
	{
        printf("nhap phan tu thu  %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	
	//mang da nhap 
	printf("mang da nhap la : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	// nhap them so va vi tri muon nhap
	int value , position;
	printf("\n nhap phan tu muon them :  ");
	scanf("%d", &value);
	printf("\n nhap chi so phan tu muon them : ");
	scanf("%d",&position);
	
	// kiem tra 
	if(position >0 || position <n)
	{
		// chen phan tu 
		for(i=n; i>position; i--)
		{
			arr[i] = arr[i-1];// dich chuyen vao cho trong
		}
		arr[position] = value;//them moi
		n++;
		printf(" mang sau them phan tu : ");
		for(i=0;i<n;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n");
	}
	else 
	{
		printf("loi du lieu ");
	}

	
	return 0;
}
