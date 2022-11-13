#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 
  int n, key;

  while(true)
   {
   	    system("cls");
   	    printf("*********************************************************\n");
   	    printf("**       CHUONG TIRNH QUAN LY SINH VIEN                **\n");
   	    printf("**       1. Nhap DS sinh vien                          **\n");
   	    printf("**       2. In danh scah sinh vien                     **\n");
   	    printf("**       3. Sap xep theo kq cuoikhoa                   **\n");
   	    printf("**       4. In sinh vien gioi, xuat sac                **\n");
   	    printf("**       5. Timm kiem sinh vien theo MASV              **\n");
   	    printf("**       0. Thoat                                      **\n");
   	    printf("*********************************************************\n");
   	    
   	    printf("\n   \t\t   AN PHIM CHON: ");
   	    scanf("%d", & key);
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
    }

