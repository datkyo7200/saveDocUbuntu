#include<iostream>

using namespace std;

int main(){
	int a[200];
	int n;
	cout << "Nhập n: ";
    cin>>n;
    int balance[] = {15, 20, 25, 30, 35};
    cout<<balance[4];
    int b= 0;
    for (int i = 0; i < n; i++){
		cout<< "Nhập giá trị"<<b++<<":";		
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		a[i] = a[i]*a[i];
	}
    for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
