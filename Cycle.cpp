 bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(slow!=NULL&&fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)
            {
                return true;
            }
        }
        return false;
    }
