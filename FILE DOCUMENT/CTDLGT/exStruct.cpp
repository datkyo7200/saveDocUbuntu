#include <stdio.h>

struct SinhVien
{
    int maSV;
    char ho[20];
    char ten[20];
    bool gioiTinh;
    char queQuan[100];
};
void nhap(int sv){
	printf("Nhap ms:");
	scanf("%d",&sv);
}
int main(){
    SinhVien sv;
    sv.gioiTinh = false;
    if(sv.gioiTinh == true){
		printf("gioi tinh cua sinh vien la nam");
	}else{
		printf("gioi tinh cua sinh vien la nu");
	}
}
 
