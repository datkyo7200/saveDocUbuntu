#include<stdio.h>
#include<stdlib.h> 

struct nut{
	 int giatri;
	 nut *tiep;
};
typedef nut Node;
Node *dau;
//----------------------
void khoitao(Node *dau){
	dau = NULL;
}
//----------------------
void nhapds(Node *&dau){
	int tam;
	Node *p,*q;
	q = NULL;
	do{
		printf("Nhap 1 so nguyen: \n");
		scanf("%d", &tam);
		if(tam!=0){
			p = new Node;
			p->giatri= tam;
			p->tiep = NULL;
			if( dau == NULL ){
				dau = p;
				}
				else{
						q->tiep = p;
						q = p;
					}
			}
		}
		while(tam!=0);
	
}
/*
void duyetds(Node *dau){
	Node *p;
	p = dau;
	while(p!=NULL){
		printf("ds: %d",p->giatri);
		p = p->tiep;
	}
}
*/
//--------------------------
void duyetdsdq(Node *dau){
	if(dau!= NULL){
		duyetdsdq(dau->tiep);
	}
}
int tongDs(Node *dau){
	if(dau==0){
		return 0;
	}else{
		return dau->giatri+tongDs(dau->tiep);
	}
			
}
//----------------------------------
int tongChan(Node *dau){
	if(dau==NULL){
		return 0;
	}
	else{
		if(dau->giatri%2!=0){
			return tongChan(dau->tiep);
		}else{
			return dau->giatri+tongChan(dau->tiep);
			}
	}
}

//--------------------------------
void chenDau(Node *&dau,int x){
	Node *p;
	p = new Node;
	p->giatri = x;
	p ->tiep =dau;
	dau = p;
}

//--------------------------------
void chenCuoi(Node *&dau, int x){
	Node *p,*q;
	p = new Node;
	if(dau ==NULL){
		//p = giatri->x;
		//dau = p;
	}else{
		//tao nut moi
		p->giatri =x;
		p->tiep=NULL;
		//tim nut cuoi
		q = dau;
		 while(q->tiep !=NULL){
			 q= q->tiep;
			}
		 
	}
	
}

//--------------------------------
void chenSau(Node *&dau, int x,int y){
	Node *p,*q;
	//Tim nut mang gia tri y
	p= dau;
	while((p!=NULL) && (p->giatri!=y)){
	p = p->tiep;
	if(p!=NULL){
		q =new Node;
		q->giatri =x;
		q->tiep =NULL;
		//moc q vao sau p
		q->tiep = p->tiep;
		p->tiep = q;
		
	}
}
}
int main(){
	khoitao(dau);
	nhapds(dau);
	printf("Duyet vong lap");
	//duyetds(dau);
	duyetdsdq(dau);
	printf("Duyet vong lap %d \n",tongDs(dau));
	printf("Duyet vong lap %d \n",tongChan(dau));
	duyetdsdq(dau);
	printf("\n Chen dau: \n");
	chenDau(dau,99);
	duyetdsdq(dau);
	printf("\n Chen cuoi: \n");
	chenCuoi(dau,88);
	duyetdsdq(dau);
	chenSau(dau, 1,2);
	return 0;
}
