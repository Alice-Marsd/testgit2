#include<iostream>
#include<stdlib.h>
using namespace std;
struct ListNode{
	int data ;
	struct ListNode* next;
}Node;
ListNode* mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *h,*p,*q;
    h=p=NULL;q=NULL;
	while(l1 && l2)
	{
		if(l1->val < l2->val)
		{
			p=l1;
			if(!h) {
				h=q=p;		
			}else{
				q->next=p;
				q=p;
			}
			l1=l1->next;
		}else{	
			p=l2;
			if(!h){
				h=q=p;
			}else{	
				q->next=p;
				q=p;
			}
			l2=l2->next;
		}
	}
	if (l1)
	{
        if(!h) h=l1;
		else p->next=l1;
	}else if(l2)
	{
        if(!h) h=l2;
		else p->next=l2;
	}
	return h;
}
ListNode* createList()
{
	ListNode *h,*q,*p;
	int i,n;
	cin >> n;
	h=(ListNode *)malloc(sizeof(ListNode));
	cin >> h->data;
	h->next=NULL;
	q=h;
	for(i=1;i<n;++i)
	{
		p=(ListNode *)malloc(sizeof(ListNode));
		cin >> p->data;
		p->next=NULL;
		q->next=p;
		q=p;
	}
	return h;
}
void printlink(ListNode *h)
{
	ListNode *p=h;
	while(p)
	{
		cout<< p->data <<" ";
		p=p->next;
	}
	cout <<endl;
}
int main()
{
	ListNode *l1, *l2;
	l1=createList();
	l2=createList();

	l1=mergeTwoLists(l1,l2);
	printlink(l1);
	
}

