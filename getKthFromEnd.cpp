#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* p,* q;
        int i;
        p=q=head;
        for(i=0;i<k;++i)
            p=p->next;
        while(p)
        {
            p=p->next;
            q=q->next;
        }
        return q;
    }
int main()
{
	
}
