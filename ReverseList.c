struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):
    val(x), next(null){
    }
};

ListNode* ReverseList(ListNode* pHead)
{
    ListNode* pPrev = NULL;
    ListNode* pNode = pHead;
    ListNode* pReversedHead = NUll;

    while (pNode != NULL) {
        ListNode* pNext = pNode->next;
        if (pNext == NULL) {
            pReversedHead = pNode;
        }
        pNode->next = pPrev;
        pPrev = pNode;
        pNode = pNext;
    }
    return pReversedHead;
}