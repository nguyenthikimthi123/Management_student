#include"Remove.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void xoaSinhVienTheoTen(SV ds[], int& n) {
	char ten[30];
	do
	{
		printf("\nNhap ten cua sinh vien can xoa: ");
		while (getchar() == 'n');
		gets_s(ten);
		if (strlen(ten) > 30)
		{
			printf("\nNhap ten nho hon 30 ki tu");
		}
	} while (strlen(ten) > 30);
	for (int i = 0; i < n; i++) {
		if (strstr(ds[i].ten, ten)) {
			for (int j = i; j < n; j++) {
				ds[j] = ds[j + 1];
			}
			n -= 1;
			printf("\n Xoa thanh cong");
			return;
		}
	}
}