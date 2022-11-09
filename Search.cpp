#include"Search.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int timSinhVienTheoTen(SV ds[], int n) {
	char ten[20];
	int dem = 0;
	printf("\nNhap ten cua sinh vien can tim: ");
	while (getchar() == '\n');
	gets_s(ten);
	for (int i = 0; i < n; i++) {
		if (strstr(ds[i].ten, ten))//tmim lan xuat hien dau tien cua chuoi ten trong ds[i].ten
		{
			//printf("sinh vien can tim :");
			inSinhVien(ds[i]);
			dem = 1;
		}

	}
	if(dem == 0)
		printf("sinh vien can tim khong ton tai :");
	
	return 0;
}
int timSinhVienTheoNamsinh(SV ds[], int n) {
	int namSinh = 0;
	int dem = 0;
	printf("Nhap nam sinh cua sinh vien: ");
	scanf_s("%d", &namSinh);
	for (int i = 0; i < n; i++) {
		if (namSinh == ds[i].namSinh) {
			inSinhVien(ds[i]);
			dem = 1;
		}
	}
	if (dem == 0)
		printf("sinh vien can tim khong ton tai :");
	return 0;
}