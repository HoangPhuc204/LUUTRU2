#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

struct SinhVien
{
	char  Masv[10];
	char  Hotensv[30];
	char  Phai[10];
	int   Namsinh;
	char  Nganhhoc[30];
	float Kpcuoikhoa;
	char  Xeploai[20];
	char Quequan[20];
};

typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN & x);
void NhapsvN(SINHVIEN a[], int n);
void XuatsnN(SINHVIEN & x);
void XuatsvN(SINHVIEN a[], int n);

int main()
{ int n;
     SINHVIEN x, a[10];
    printf("\n\n\n Nhap so luong sinh vien");
    scanf("%d",&n);
    NhapsvN(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ky in DS sap xep");
    getch();
    Sapxep(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ky de in DS gioi_xuat_sac");
    getch();
    INGX(a,n);
     printf("\n\n\n\n An phim bat ky de tim SV");
    getch();
    TIMSV(a,n);
    
}

void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\nNhap Ma SV: ");
	gets(x.Masv);
	
	
	    fflush(stdin);
	printf("\nNhap Ho ten: ");
	gets(x.Hotensv);
	    fflush(stdin);
	printf("\nNhap Phai: ");
	gets(x.Phai);
	    fflush(stdin);
	printf("\nNhap Nganh Hoc: ");
	gets(x.Nganhhoc);
	    fflush(stdin);
	printf("\nNhap Que quan: ");
	gets(x.Quequan);
	
	
	do
	{
		printf("\nNhap Nam sinh: ");
		scanf("%d",&x.Namsinh);
		
	} while(x.Namsinh<1980 || x.Namsinh>2010);
	
	do
	{
		printf("\nNhap KQ cuoi khoa: ");
		scanf("%f",&x.Kpcuoikhoa);
	}while(x.Kpcuoikhoa<0  || x.Kpcuoikhoa>4);
	
	
fflush(stdin);
    if(x.Kpcuoikhoa<=1.5)
        {
		strcpy(x.Xeploai,"Yeu");
		}
    else
             if(x.Kpcuoikhoa<=2.5)
                  {
				  strcpy(x.Xeploai,"Trung_binh");
				  }
            else
                       if(x.Kpcuoikhoa<=3.8)
                            {
							strcpy(x.Xeploai,"gioi");
							}
                        else
                             {
							 strcpy(x.Xeploai,"Xuat_sac");
							 }
}
void NhapsvN(SINHVIEN a[], int n)
    {
    	for(int i=0;i<n;i++)
    	    {
    	    	printf("\nNhap ma sinh vien thu %d",i+1);
    	    	Nhapsv(a[i]);
    	    }
    }
    
void Xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s",x. Masv,x.Hotensv,x.Namsinh,x.Nganhhoc,x.Kpcuoikhoa,x.Xeploai,x.Quequan);
}


void XuatsvN(SINHVIEN a[], int n)
    {system("cls");
    printf("\n\n|-----------------------------------------------------------------------------\n");
         printf("\Ma SV| Ho ten sinh vien| Phai| Nam sinh| Nganh hoc| KQ cuoi khoa| Xep loai| Que quan|");
         
         for(int i=0;i<n;i++)
              {
         printf("\n|-----|---------------|-----|---------|----------|-------------|----------|---------|");
              Xuatsv(a[i]);
              
              }
    }
    
void Sapxep(SINHVIEN a[], int n)
{ SINHVIEN tmp;
    for(int i = 0;i < n;i++){
    	for(int j = i+1; j < n;j++){
    		if(a[i].Kpcuoikhoa> a[j].Kpcuoikhoa){
    			tmp = a[i];
    			a[i] = a[j];
    			a[j] = tmp;
    		}
    	}
    }
}

void INGX(SINHVIEN a[], int n)
    {system("cls");
    printf("\n\n|----------------------------------------------------------------------------------------\n");
         printf("|Ma SV| Ho va ten sinh vien| Phai| Nam sinh| Nganh hoc| KQ cuoi khoa| Xep loai| Que quan |");
         
        for(int i=0;i<n;i++)
            { if(a[i].Kpcuoikhoa>=3.0)
                {
        printf("\n|----|--------------------|-----|---------|----------|-------------|---------|-----------|");
                Xuatsv(a[i]);
                }
            }
    }
    
     void TIMSV(SINHVIEN a[] ,int n)
     {system("cls");
     fflush(stdin);
     char Matim[10];
     printf("\n Nham ma sinh vien can tim: ");
     gets(Matim);
     
     printf("\n\n----------------------------------------------------------------------------------------\n");
          printf("|Ma Sv| Ho ten sinh vien| phai| Nam sinh| Nganh hoc| KQ cuoi khoa| Xep loai| Que quan| ");
          
          for(int i=0;i<n;i++)
             { if(strcmp(a[i].Masv,Matim)==0)
                 {
        printf("\n|-----|-----------------|-----|---------|-----------|-------------|--------|---------|\n");
                 Xuatsv(a[i]);
                 }
             }
     }
     

