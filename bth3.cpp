#include<stdio.h>
int a[10];
void nhapmang1c(int a[10],int n);
void xuatmang1c(int a[10],int n);
void max(int a[10],int n);
void tich(int a[10],int n);
void dsnt(int a[10],int n);
void nhapx(int a[10],int n,int x);
void sapxep(int a[10],int n);
void chenx(int a[10],int n,int x);
void nhapk(int x[10],int *n,int xoa);
void xoak(int a[10],int n);
int main()
{
	int n,x;
	printf("\n Nhap phan tu cua mang la so nguyen: ");
	scanf("%d",&n);
	while(n>50)
	{
		printf("\n Nhap lai n: ");
		scanf("%d",&n);
	}
	nhapmang1c(a,n);
	xuatmang1c(a,n);
	max(a,n);
	tich(a,n);
	tong(a,n);
	nhapx(a,n,x);
	sapxep(a,n);
	chenx(a,n,x);
	xoak(a,n);
}
void nhapmang1c (int a[10],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap gia tri phan tu so nguyen a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
 void xuatmang1c(int a[10],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		printf("\n Gia tri cua phan tu so nguyen a[%d]=%d",i,a[i]);
 	}
 }
 
 void max(int a[50],int n)
 {
 	int i,j,gtln=0;
 	for(i=0;i<n;i++)
 	{
 		if(gtln<=a[i])gtln=a[i];
 		if(gtln<=a[i])j=i;
 	}
 	printf("\n\n Gia tri lon nhat la %d cua phan tu a[%d]",gtln,j);
 }
 
 void tich(int a[10],int n)
 {
 	long tich=1;
 	for(int i=0;i<n;i++)
 	{
 		tich=tich*a[i];
 	}
 	printf("\n\n Tich cua phan tu la :%d",tich);
 }
 
 void tong(int a[10],int n)
 {
 	int i,j,dem=0;
 	int tong=0;
 	int demsngt=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]==1)
		 demsngt++;
 		if(a[i]==1)
		 tong=tong*a[i];
 	}
 	printf("\n\n Co %d phan tu la so nguyen to trong mang",demsngt);
 	printf("\n\n Tong phan tu so nguyen trong mang la %d",tong);
 }
 
 void nhapx(int a[10],int n,int x)
 {
     int dem=0;
    for(int i=0;i<n;i++)
 {
 	if (a[i]==x)
	 printf("\n\n Gia tri %d phan tu trong mang a[%d] bang gia tri x",x,i);
 	if(a[i]==x)
	 dem++;
 }
    if(dem==0)
    printf("\n\n Khong co gia tri trong mang bang voi x");
}

void sapxep(int a[10],int n)
{
	int tangdan;
	 for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		{
	     	tangdan=a[i];
		    a[i]=a[j];
	      	a[j]=tangdan;
	    }
	}
}
    printf("\n\n Sap xep mang theo gia tri tang dan");
    for(int i=0;i<n;i++)
    {
    	printf("\n a[%d]=%d",i,a[i]);
    }
}

void chenx(int a[10],int n,int x)
{
	printf("\n Chen gia tr %d cua x vao phan tu a[%d]",x,n);
	a[n]=x;
	printf("\n Mang sau khi chen x la: ");
	for(int i=0;i<n+1;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}

void nhapk(int x[50],int *n, int xoa)
{
	for(int i=xoa;i<*n-1;i++)
	{
		x[i]=x[i+1];
	}
	*n--;
}
void xoak(int a[10],int n)
{
	int k;
	printf("\n Nhap k: ");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(k==a[i])nhapk(a,&n,i);
	}
	printf("\n Mang sau khi xoa phan tu co gia tri bang k la: ");
	for(int i=0;i<n;i++)
	{
		printf("\n a[%d]=[%d]",i,a[i]);
	}
}

