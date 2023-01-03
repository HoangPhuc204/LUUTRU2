#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

char toupper(char charx){
    if(charx >= 'a' && charx <='z') charx = charx-32;
    return charx;
}
 
 
void chuanHoa(char a[])
{
    int n = strlen(a);
 
    for(int i=0;i<n;i++){
        if(a[i]==' '){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]=NULL;
            i--;
            n--;
        }
        else break;
    }
     
 
    for(int i=n-1;i>=0;i--){
        if(a[i]==' '){
            a[i]=NULL;
            n--;
        }
        else break;
    }
     
    for(int i=1;i<n-1;i++)
    {
        if(a[i]==a[i+1]){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1]=NULL;
            i--;
            n--;
        }
    }
     
    a[0] =  toupper(a[0]);  
}

int dem(char *s,char t)
{
 int dem=0;
 for(int i=0;i<=strlen(s);i++)
 {
 if(s[i]==t) dem=dem+1;  
 }
 return dem;
}
int main()
{
 char a[100];
 printf("Moi ban nhap chuoi:"); gets(a);
 chuanHoa(a);
 printf("Chuoi duoc chuan hoa:");
 puts(a);
 char s[256];
 char t;
 printf("vui long 1 ky tu: ");
 scanf("%c",&t);
 printf("%c ",t);
 printf("so lan xuat hien cua ky tu %c la: %d",t,dem(s,t));
 return 0;
}
