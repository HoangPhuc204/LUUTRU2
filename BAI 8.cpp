#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void nhapmatran(int a[10][10], int m, int n);
void xuatmatran(int a[10][10], int m, int n);
int timMax(int a[10][10], int m, int n);
int timMin(int a[10][10], int m, int n);
int tongphantu(int a[10][10], int m, int n);
void timx(int a[10][10],int m, int n);
void matrantangdan (int a[10][10],int m, int n);

int main()
{
	int a[10][10],m,n;
	do
	  {
	  	printf("\n Nhap m :");
	  	scanf	("%d",&m);
	  	printf("\n nhap n :");
	  	scanf("%d",&n);
	  }while(m<=0||n<=0);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	timMax(a,m,n);
    timMin(a,m,n); 
	tongphantu(a,m,n);
timx(a,m,n);
	matrantangdan(a,m,n);
	
}
	void nhapmatran(int a[10][10], int m, int n)
{
	
	for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	  {
	  	  	printf("a[%d][%d]:",i,j);
	  	  	scanf("%d",&a[i][j]);
		  }
	  }
}

void xuatmatran(int a[10][10], int m, int n)
{
	for(int i=0;i<m;i++)
	  {
	  	for(int j=0;j<n;j++)
	  	  {
	  	  	printf("  %d  ",a[i][j]);
	      }
	    printf("\n");
      }
}
int timMax(int a[10][10], int m, int n)
{

	int i, j;
	int max=a[0][0];
	for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	  {
	  	    if(max<a[i][j])
	  	      max=a[i][j];
	      }
      }
    printf("\n Gia tri lon nhat la:a[%d][%d]",i,j);	
return max;
}

int timMin(int a[10][10], int m, int n)
{

	int i, j;
	int min=a[0][0];
	for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	  {
	  	    if(min>a[i][j])
	  	      min=a[i][j];
	      }
      }
    printf("\n Gia tri nho nhat la:a[%d][%d]",i,j);	
return min;
}
int tongphantu(int a[10][10], int m, int n)
{
	int tong=0,i,j;
	for (i=0;i<m;i++)
	   {
	   	for(j=0;j<n;j++)
	   	  {
	   	  	tong+=a[i][j];
	   	  	
	   	  }
	   }
	printf("\ntong cac phan tu trong mang la: %d",tong);
	return 0;
}	
void timx(int a[10][10],int m, int n)
{
    int x,i,j;
    printf("\nNhap gia tri x can tim:\n");
    scanf("%d", &x);
    printf("\nVi tri cua x trong mang la:\n"); 
    for (i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
          if(a[i][j]==x)
            {
             printf(" %d %d \t",i,j);
            }
        }
    }
}
void matrantangdan (int a[10][10], int n, int m)
{
    for (int i = 0 ; i<m ; i++)
        for(int i = 0 ; i<n-1 ; i++)
    	for(int j = n-1; j>i ; j--)
    	if(a[i][j]<a[i][j-1])
    	{
    		int temp = a[i][j];
    		a[i][j] = a[i][j-1];
    		a[i][j-1] = temp;
    		{
    			printf("\nMa tran theo thu tu tang dan:\n");
    		}
    	}
}
