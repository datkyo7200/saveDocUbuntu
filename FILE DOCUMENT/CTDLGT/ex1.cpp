#include<iostream>

using namespace std;

int main(){
	int a[100];
	int n;
	cout << "Nhập n: ";
	cin >> n;
	int b =1;
	for (int i = 0; i < n; i++){
		cout<< "Nhập giá trị"<<b++<<":";		
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	cout<<"Tổng : " << sum;
	
	return 0;
}
