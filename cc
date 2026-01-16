#include <stdio.h>
void nhap();
void xuat();
int main()
{
	typedef struct SINH_VIEN
	{
		char MSSV[10];
		char hoten[50];
		int namsinh;
		float dtb;
	}SV;
	nhap();
	xuat();
	return 0;
}
void nhap(x)
{
	printf("hay nhap MSSV: ");
	scanf("%c",x);
	printf("hay nhap ho va ten: ");
	gets(x);
	printf("hay nhap nam sinh: ");
	scanf("%d",x);
	printf("hay nhap dtb: ");
	scanf("%f",&x);
}
void xuat(MSSV,hoten,namsinh,dtb)
{
	printf("%c\n",MSSV);
	push(hoten);
	printf("\n nam sinh: %d",namsinh);
	printf("\n dtb: %.1f",dtb);
}
