#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "Input_output.h"
#include "Modify.h"
#include "Sort.h"
#include "Search.h"
#include "Remove.h"
#include "Add.h"
//_CRT_SECURE_NO_WARNINGS

int main() 
{
	//SV ds[50];
	int n = 1;
	SV* ds;
	ds = (SV*)malloc(n * sizeof(SV));
	docTuFile(ds, n);
	int chon;
	do {
		printf("\nMENU:");
		printf("\n1- Nhap danh sach sinh vien");
		printf("\n2- Xuat danh sach sinh vien");
		printf("\n3- Them 1 sinh vien");
		printf("\n4- Xoa 1 sinh vien theo ten");
		printf("\n5- Chinh sua thong tinh sinh vien theo ten");
		printf("\n6- Tim sinh vien theo ten");
		printf("\n7- Tim sinh vien theo nam sinh");
		printf("\n8- Sap xep sinh vien theo ten");
		printf("\n9- Sap xep sinh vien theo nam sinh");
		printf("\n10- Sap xep sinh vien theo diem dau vao");
		printf("\n11- Sap xep sinh vien theo diem tich luy");
		printf("\n12- Thoat");
		nhapPhimBatKy();
		scanf_s("%d", &chon);

		switch (chon) {
		case 1:
			nhapDanhSachSinhVien(ds, n);
			ghiVaoFile(ds, n);
			nhapPhimBatKy();
			break;
		case 2:
			xuatDanhSachSinhVien(ds, n);
			nhapPhimBatKy();
			break;

		case 3:
			ds = (SV*)realloc(ds, (n+1) * sizeof(SV));
			themSinhVien( ds, n);
			ghiVaoFile(ds, n);
			nhapPhimBatKy();
			break;
		case 4:
			xoaSinhVienTheoTen(ds, n);
			ghiVaoFile(ds, n);
			nhapPhimBatKy();
			break;
		case 5:
			Chinh_sua(ds, n);
			ghiVaoFile(ds, n);
			nhapPhimBatKy();
			break;
		case 6:
			timSinhVienTheoTen(ds, n);
			nhapPhimBatKy();
			break;
		case 7:
			timSinhVienTheoNamsinh(ds, n);
			nhapPhimBatKy();
			break;
		case 8:
			sapXepTheoHoTen(ds, n);
			nhapPhimBatKy();
			break;

		case 9:
			sapXepTheoNamSinh(ds, n);
			nhapPhimBatKy();
			break;
		case 10:
			sapXepTheoDiemDauVao(ds, n);
			nhapPhimBatKy();
			break;
		case 11:
			sapXepTheoDiemTichLuy(ds, n);
			nhapPhimBatKy();
			break;
		}
	} while (chon != 12);
	free(ds);
	return 0;
}