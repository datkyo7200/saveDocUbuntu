#include <stdio.h>
#include <stdlib.h> 

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
void duyetDS(Node * dau) {
  Node * p;
  p = dau;
  while (p != NULL) {
    cout << fixed << " " << p -> giaTri;
    p = p -> tiep;
  }
}
void duyetDeQuy(Node * dau)
int main(){
	khoiTao(dau);
	nhapDS(dau);
	printf("Duyet danh sach \n");
	duyetDS(dau);
}
