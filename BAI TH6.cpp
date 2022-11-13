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

void Nhapsv(SINHVIEN &x);
{
	fflush(stdin);
	printf("\nNhap Ma SV: ");
	gets(x.Masv);
	
	
	    fflush(stdin);
	printf("\nNHAP ho ten: ");
	gets(x.Hotensv);
	    fflush(stdin);
	printf("\nNhap phai: ");
	gets(x.phai);
	    fflush(stdin);
	printf("\nNhap Nganh Hoc: ");
	gets(x.Nganhhoc);
	    fflush(stdin);
	printf("\nNhap que quan: ");
	gets(x.Quequan);
	
	
	do
	{
		printf("\nNhap Nam sinh: ");
		scanf("%d",&x.Namsinh);
		
	} while(x.namsinh<1980 || x.Namsinh>2010);
	
	do
	{
		printf("\nNhap KQ cuoi khoa: ");
		scanf("%f",&n.Kqcuoikhoa);
	}while(x.Kpcuoikhoa<0  || x.Kpcuoikhoa>4);
	
	
fflush(stdin);
    if(x.Kpcuoikhoa<=1.5)
        {strcpy(x.Xeploai,"Yeu");}
    else
             if(x.Kpcuoikhoa<=2.5)
                  {strcpy(x.Xeploai,"Trung_binh"):}
            else
                       if(X.Kpcuoikhoa<=3.8)
                            {strcpy(x.Xeploai,"gioi");}
                        else
                             {strcpy(x.Xeploai,"Xuat_sac");}
}
void NhapsvN(SINHVIEN a[], int n)
    {
    	for(int i=0;i<n,i++)
    	    {
    	    	printf("\nNhap ma sinh vien thu %d",i+1);
    	    	Nhapsv(a[i]);
    	    }
    }
    
void Xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s",x. Masv,x.Hotensv,x.Namsinh,x.Nganhhoc,x.Kpcuoikhao,x.Xeploai,x.Quequan);
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

void InGX(SINHVIEN a[], int n)
    {system("cls");
    printf("\n\n|----------------------------------------------------------------------------------------\n");
         printf("|Ma SV| Ho va ten sinh vien| Phai| Nam sinh| Nganh hoc| KQ cuoi khoa| Xep loai| Que quan |");
         
        for(int i=0;i<n;i++)
            { if(a[i].Kqcuoikhoa>=3.0)
                {
        printf("\n|----|--------------------|-----|---------|----------|-------------|---------|-----------|");
                Xuatsv(a[i]);
                }
            }
    }
    
     void TIMSV(SINHVIEN a[] int n)
     {system("cls");
     fflush(stdin);
     char Matim[10];
     printf("\n Nham ma sinh vien can tim: ");
     gets(Matim);
     
     printf("\n\n----------------------------------------------------------------------------------------\n");
          printf("|Ma Sv| Ho ten sinh vien| phai| Nam sinh| Nganh hoc| KQ cuoi khoa| Xep loai| Que quan| ");
          
          for(int i=0;i=<n;i++)
             { if(strcmp(a[i].Matim)==0)
                 {
        printf("\n|-----|-----------------|-----|---------|-----------|-------------|--------|---------|\n");
                 Xuatsv(a[i]);
                 }
             }
     }
     
int main()
{ int n, key;

   while(true)
   {
   	    system("cls");
   	    printf("*********************************************************\n");
   	    printf("**       CHUONG TIRNH QUAN LY SINH VIEN                **\n");
   	    printtf("**      1. Nhap DS sinh vien                          **\n");
   	    printf("**       2. In danh scah sinh vien                     **\n");
   	    printf("**       3. Sap xep theo kq cuoikhoa                   **\n");
   	    printf("**       4. In sinh vien gioi, xuat sac                **\n");
   	    printf("**       5. Timm kiem sinh vien theo MASV              **\n");
   	    printf("**       0. Thoat                                      **\n");
   	    printf("*********************************************************\n");
   	    
   	    printf("\n   \t\t   AN PHIM CHON: ");
   	    scanf("%d",&key);
   }
}

switch(key)
    {
    case 1:
    	  do{
    	  	printf("\nNHAP SO LUONG SINH VIEN: "); scanf("%d", &n);
    	    }while(n <= 0);
    	    
    	    
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
	case 4:
	    printf("\nBam phim bat ky de tiep tuc!"); 
	    getch();
	    break;
	case 5:
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
	case 0:
		exit(1);
	default:
		printf("\nKhong co chuc nang nay!");
		printf("\nBam phim bat ky de tiep tuc!");
		getch();
		break;
    }
