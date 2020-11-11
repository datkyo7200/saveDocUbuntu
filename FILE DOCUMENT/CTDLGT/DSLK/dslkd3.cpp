#include <stdio.h>
#include <cstdlib>

typedef struct node* point; // typedef lại để code được rõ ràng và gọn gàng hơn
struct node{
 	int data;
	point next; 
}; 
point head = NULL, tail = NULL;
point getNode(int x){
	point p;
	p = (point)malloc(sizeof(node));
	if(p!=NULL){
		p->data = x;
		p->next =NULL;
	}
	return p;
}
//Thêm 1 phần tử vào đầu danh sách
void addFirst(point &head, point &tail, int x)
{
 	point r = getNode(x);
	if(head == NULL)
	  	head = tail = r;
	else
	{
		r->next = head;
		head = r; 
	} 	 
}
//Thêm 1 phần tử vào cuối danh sách
void addLast(point &head,point &tail, int x)
{
 	point r = getNode(x);
	if(head == NULL)
	  	head = tail = r;
	else
	{
		tail->next = r;
		tail = r; 
	} 	 
}
//Thêm 1 phần tử có giá trị x vào sau "node" p
void addAfter(point p, int x)
{
	point q = getNode(x);
	q->next = p->next; 
	p->next = q;
} 
//Xóa 1 phần tử ở đầu danh sách
void deleteFirst(point &head)
{
	if(head == tail)
	{
		free(head);
		head = tail = NULL; 
	}
	else
	{
		point temp = head->next; 
		free(head);
		head = temp; 
	}
}
//Xóa 1 phần tử ở cuối danh sách
void deleteLast(point &head, point &tail)
{
	if(head == tail)
	{
		free(head);
		head = tail = NULL; 
	}
	else
	{
		point p = head;
		while(p->next != NULL)
			p = p->next;
		free(tail); 
		tail = p;
		p->next = NULL; 
	}
}
//Hủy danh sách liên kết đơn
void delList(point &head)
{
	point temp = NULL;
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);	
	} 
}
int main(){
	printf("START PROPRAMING");
	getNode(2);
	addFirst(head,tail,2);
}
