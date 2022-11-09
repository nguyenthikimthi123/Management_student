#include "Input_output.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void hamNhapchuoi(char str2[])
{
	char str1[50];
	do {

	printf(" ");
	gets_s(str1);

	if (strlen(str1) > 50)
	{
		printf("\nDo dai cua ho ten phai it hon 50 ki tu");
		printf("\nXin vui long nhap lai !!!\n");
	}
   } while (strlen(str1) > 50);
   strcpy(str2, str1);
}
void hamNhapdiem(float& diem)
{
	do
	{
		//printf("Nhap diem dau vao cua sinh vien: ");
		scanf_s("%f", &diem);
		while (getchar() != '\n');
		if (diem < 0 || diem > 10)
		{
			printf("\nXin vui long nhap lai !!!\n");
		}
	} while (diem < 0 || diem > 10);
}
void hamNhapnamSinh(int& namSinh)
{
	do
	{
		//printf("Nhap nam sinh cua sinh vien: ");
		scanf_s("%d", &namSinh);
		while (getchar() != '\n');
		if (namSinh < 1000 || namSinh > 9999)
		{
			printf("\nNam sinh khong phu hop. ");
			printf("\nXin vui long nhap lai !!!\n");
		}
	} while (namSinh < 1000 ||namSinh > 9999);
}
void nhapSinhVien(SV& sv)
{//gom ham
	printf("\nNhap ho ten cua sinh vien: ");
	hamNhapchuoi(sv.ten);
	printf("\nNhap nam sinh cua sinh vien: ");
	hamNhapnamSinh(sv.namSinh);
	printf("\nNhap que quan cua sinh vien: ");
	hamNhapchuoi(sv.queQuan);
	printf("\nNhap khoa cua sinh vien: ");
	hamNhapchuoi(sv.khoa);
	printf("\nNhap nganh cua sinh vien: ");
	hamNhapchuoi(sv.nganh);
	printf("\nNhap diem dau vao cua sinh vien: ");
	hamNhapdiem(sv.diemDauvao);
	printf("\nNhap diem tich luy cua sinh vien: ");
	hamNhapdiem(sv.diemTichluy);
}

void inSinhVien(SV sv)
{
	printf("   %-20s %-8d %-18s %-18s %-23s %-15.2f %-9.2f\n", sv.ten, sv.namSinh, sv.queQuan, sv.khoa, sv.nganh, sv.diemDauvao, sv.diemTichluy);
	
}


void nhapDanhSachSinhVien(SV ds[], int& n) {
	do {
		printf("Nhap vao so luong sinh vien: ");
		scanf_s("%d", &n);
		while (getchar() != '\n');
		ds = (SV*)realloc(ds, n * sizeof(SV));
	} while (n <= 0);

	for (int i = 0; i < n; i++) {
		printf("\n-------------------------------------------------------------------");
		printf("\nNhap vao sinh vien thu %d: ", i + 1);
		nhapSinhVien(ds[i]);
	}
}


void xuatDanhSachSinhVien(const SV  ds[], int soluong)//const 
{
	printf("\n\t%-14s %-9s  %-19s  %-18s  %-15s  %-14s  %-14s", "Ho ten", "Nam sinh", "queQuan", "Khoa", "Nganh", "Diem dau vao", "Diem Tich luy\n\n");
	for (int i = 0; i < soluong; i++) {
		printf("\n ");
		inSinhVien(ds[i]);
	}
}
void nhapPhimBatKy() {
	printf("\nNhap phim bat ky de tiep tuc!");

}

void ghiVaoFile(SV ds[], int n) {
	FILE* f;
	f = fopen("Sinh_vien.txt", "wb+");
	if (f == NULL) {
		printf("\nLoi moi file de ghi!");
		return;
	}
	fwrite(&n, sizeof(n), 1, f);
	for (int i = 0; i < n; i++) {
		fwrite(&ds[i], sizeof(SV), 1, f);
	}
	fclose(f);

}
void docTuFile(SV ds[], int& n) {
	FILE* f;
	f = fopen("Sinh_vien.txt", "rb");
	if (f == NULL) {
		printf("\nLoi moi file de doc!");
		return;
	}
	fread(&n, sizeof(n), 1, f);
	ds = (SV*)realloc(ds, n * sizeof(SV));
	for (int i = 0; i < n; i++) {
		fread(&ds[i], sizeof(SV), 1, f);
	}
	fclose(f);
}

