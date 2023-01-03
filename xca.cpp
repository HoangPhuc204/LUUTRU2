#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<cstdlib>
void Nhap(int a[100][100],int m,int  n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
      {
         printf("\nNhap a[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
    }
}

void Xuat(int a[100][100],int m,int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
      {
         printf(" %d ", a[i] [j]);
         }
      printf("\n \n");
   }
}
int main()
 { 
    int a[100][100];
    int m,n;
    { char s[50], s2[50], key;
while(true)
{


system("cls");
 printf("********************************************\n");
 printf("********** THAO TAC TREN MANG **************\n");
 printf("**** 1.Nhap/Xuat mang 2 chieu **************\n");
 printf("**** 2.Sap xep mang theo thu tu tang dan ***\n");
 printf("**** 3.Tong cac phan tu chia het cho 3 *****\n");
 printf("**** 0.Thoat *******************************\n");
 printf("********************************************\n");

 fflush(stdin);
 printf("\n \t \t An Phim Chon:");
 scanf("%d",&key);
 switch(key)
 {
 	case 1:
 		fflush(stdin);
 		printf("nhap so hang m=");
	 scanf("%d",&m);
    printf("nhap so cot n=");
	 scanf("%d",&n);
	 Nhap(a,m,n);
	 Xuat (a,m,n);

printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:

printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
printf("\nBam phim bat ky de tiep tuc!");


getch();

break;

case 0:
printf("\nBam phim bat ky de tiep tuc!");

break;

}
}
}
}
