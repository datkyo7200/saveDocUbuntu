#include <iostream>

using namespace std;

struct nut {
  int giaTri;
  nut *tiep;
};

typedef nut Node;
Node *dau;
void khoiTao(Node *&dau) {
  dau = NULL;
}
void nhapDS(Node *&dau) {
  Node *p, *q;
  int x;
  do {
    cout << "Nhap mot so nguyen, nhap 0 de dung: ";
    cin >> x;
    if (x != 0) {
      p = new Node;
      p -> giaTri = x;
      p -> tiep = NULL;
      if (dau == NULL)
        dau = p;
      else
        q -> tiep = p;
      q = p;
    }
  } while (x != 0);
}

void duyetDanhSachDeQuy(Node * dau){
  if (dau != NULL) {
    cout << fixed << " " << dau -> giaTri<<endl;
    duyetDanhSachDeQuy(dau -> tiep);
  }
}
void chenDau(Node*& dau, int x)
{
    Node* p;
    p = new Node;
    p->giaTri = x;
    p->tiep = dau;
    dau = p;
}

void chenCuoi(Node *&dau, int x){
	Node *p,*q;
	p = new Node; 
	p->giaTri = x; 
	p->tiep = NULL;
	if(dau ==NULL){
		p->giaTri = x; 
		p->tiep = dau;
		dau = p;
	}else{
		q = dau;
		while(q->tiep !=NULL){
			q= q->tiep;
		}
		q->tiep = p;
	}	
}
void inPhanTuChan(Node* dau){
	
	if(dau != NULL && dau->giaTri%2==0)
	{
		cout<< fixed <<"In phan tu chan"<<(dau->giaTri)%2<<endl;	
	}
}
int tinhTong(Node* dau)
{
    if (dau == NULL)
        return 0;
    else
        return dau->giaTri + tinhTong(dau->tiep);
}

int tinhTongSoLe(Node* dau)
{
    if (dau == NULL)
        return 0;
    else if ((dau->giaTri % 2) == 0)
        return tinhTongSoLe(dau->tiep);
    else
        return dau->giaTri + tinhTongSoLe(dau->tiep);
}

int tinhTongSoChan(Node* dau)
{
    if (dau == NULL)
        return 0;
    else if ((dau->giaTri % 2) == 0)
        return 1 + tinhTongSoChan(dau->tiep);
    else
        return tinhTongSoChan(dau->tiep);
}

int main(){
	khoiTao(dau);
	nhapDS(dau);
	cout<<"Duyet danh sach theo de quy"<<endl;
	duyetDanhSachDeQuy(dau);
	cout<<"In phan tu chan"<<endl;
	inPhanTuChan(dau);
	//cout<< "Tong cac phan tu trong danh sach la :"<<tinhTong(dau)<<endl;
	//cout <<"Tong so le: "<<tinhTongSoLe(dau)<<endl;
	//cout <<"Tong so chan: "<<tinhTongSoChan(dau)<<endl;	
	//cout<<"Chen dau"<<endl;
	//chenDau(dau,2);
	//cout<<"Duyet chen dau"<<endl;
	//duyetDanhSachDeQuy(dau);
	//cout<<"Chen cuoi"<<endl;
	//chenCuoi(dau,3);
	//cout<<"Duyet chen dau"<<endl;
	//duyetDanhSachDeQuy(dau);
	//cout<<"Duyet chen cuoi,render list \n";
	return 0;
}
