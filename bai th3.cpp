#include<stdio.h>
void nhapmang(int a[10],int n);
void xuatmang(int a[10],int n);
int max(int a[10],int n);
int tich(int a[10],int n);


int main(){
	int n;
	int a[n];
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}while(n<1||n>99);
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);
	tich(a,n);
}
void nhapmang(int a[10],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap a[%d]:",i);
		scanf("%d",&a[i]);
		
	}

}

void xuatmang(int a[10],int n){
	printf("cac phan tu co trong mang la:\n");
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	
}

int max(int a[10], int n)
{ 
   int max=a[0];
   for(int i=1;i<=n;i++)
   {
      if(max<a[i])
         max=a[i];
   }
   printf("\n phan tu lon nhat trong mang la: %d ",max);
    return max;
}
int tich(int a[10],int n){
	int tich=1;
	for(int i=0;i<n;i++)
	if(a[i]%2==0)
	   tich=tich*a[i];
	   printf("\n tich cua mang la: %d",tich);
	return tich;
}

