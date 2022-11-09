#include "Modify.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void Chinh_sua(SV ds[], int n)//test 2 nguoi trung ten
{
	char ten[50];
	printf("\nNhap ten cua sinh vien can chinh sua: ");
	while (getchar() == 'n');
	gets_s(ten);

	for (int i = 0; i < n; i++) {
		if (strstr(_strupr(ds[i].ten), _strupr(ten)))
		{
			int Lua_chon = 0;//viet thuong
			do {
				printf("1. Ho ten\n"
					"2. Nam Sinh\n"
					"3. Que quan\n"
					"4. Khoa\n"
					"5. Nganh\n"
					"6. Diem dau vao\n"
					"7. Diem tich luy\n"
					"8. Thoat\n");
				//chinh sua
				scanf_s("%d", &Lua_chon);
				switch (Lua_chon) {//gom case macro
				case 1:
					printf("\nNhap ho ten cua sinh vien: ");
					while (getchar() == 'n');
					gets_s(ds[i].ten);

					break;
				case 2:
					printf("Nhap nam sinh cua sinh vien: ");
					scanf_s("%d", &ds[i].namSinh);
					break;

					//que quan
				case 3:
					while (getchar() == 'n');
					printf("Nhap que quan cua sinh vien: ");
					gets_s(ds[i].queQuan);
					break;
					//khoa
				case 4:
					printf("Nhap khoa cua sinh vien: ");
					gets_s(ds[i].khoa);
					break;
					//nganh
				case 5:
					while (getchar() == 'n');
					printf("Nhap nganh cua sinh vien: ");
					gets_s(ds[i].nganh);
					break;
					//diem dau vao
				case 6:
					printf("Nhap diem dau vao cua sinh vien: ");
					scanf_s("%f", &ds[i].diemDauvao);
					break;
					//diem tich luy
				case 7:
					printf("Nhap diem tich luy cua sinh vien: ");
					scanf_s("%f", &ds[i].diemTichluy);
					break;

				}
			} while (Lua_chon != 8);
			printf("Chinh sua thanh cong.\n");
		}
	}
}
