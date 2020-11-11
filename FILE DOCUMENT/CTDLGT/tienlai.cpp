#include <iostream>
using namespace std; 
int main()
{
	int x;
	float tienlai,tiengui,laisuat,thoihan;
	cout<<"nhap nam gui:"<<endl;
	cin>>x;
	for(x =0 ; x<=9 ; x++){
		cout << "Nhap tien gui ban dau, lai suat : " << endl;
		cin>>tiengui>>laisuat>>thoihan;
		tienlai=(tiengui*laisuat*x)/100;
		cout << "Tien gui ban dau = " << tiengui << endl;
		cout << "Lai suat = " << laisuat << "%" << endl;
		cout << "Thoi han = " << x << "x" << endl;
		cout << "So tien lai = " << tienlai << endl;
		}
	return 0;
}
