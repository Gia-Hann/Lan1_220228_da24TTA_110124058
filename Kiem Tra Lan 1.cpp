/*
MSSV:110124058
HO VA TEN;VO LE GIA HAN
LOP: DA24TTA
*/

#include<stdio.h>
int main()
//Nhap tthoi gian hoc tap
void nhap_thoi_gian_hoc_tap {
float thoi_gian[];
int i=0;
	for(int i+0;i<7;i++)
	do {
		printf("Nhap thoi gian hoc cho ngay thu %d :",i+2);
		scanf("%f",&thoi_gian[i]);
		if (thoi_gian[i]<0||thoi_gian[i]>15)
			printf("nhap lai thoi gian.\n");
		whlie (0>thoi_gian[i]>15);
		}
//Hien thi thoi gian hoc tap
void hien_thi_thoi_gian_hoc_tap {
float thoi_gian[];
		printf("Thoi gian hoc tap:");
		for(int i=0;i<7;i++)
		printf("Ngay thu %d:%.2f h ",i+2,thoi_gian[i]); 
		}
//Tinh toan va thong ke
void tinh_toan_va_thong_ke {
float thoi_gian[];
float tong=0,trung_binh_gio_hoc;
int ngay_max=0,ngay_min=0;
	for(int i=0;i<7;i++) {
	tong+=thoi_gian[i];
		ngay_max=i;
	}
	if(thoi_gian[i]<thoi_gian[ngay_min]) {
		ngay_min=i;
	}
	if(thoi_gian[i]<thoi_gian[ngay_max]) {
		ngay_max=i;
	}
	trung_binh=tong/7;
	printf("Tong so gio hoc trong tuan : %.2f h",tong);
	printf("Trung binh so gio hoc moi ngay: %.2f h",trung_binh);
	printf("Ngay hoc nhieu nhat : Thu %d ",ngay_max+2);
	printf("Ngay hoc it nhat : Thu %d",ngay_min+2);
	}
//Khai bao
int main()
float thoi_gian[];
printf("Chuong trinh quan ly va pha tich:");
nhap_thoi_gian_hoc_tap(thoi_gian);
hien_thi_thoi_gian_tinh_tong(thoi_gian);
tinh_toan_va_thong_ke(thoi_gian);
return 0;



		
