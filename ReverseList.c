// 单链表反转

// 单链表节点定义
typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

ListNode* ReverseList(ListNode* pHead)
{
    ListNode* pPrev = NULL;
    ListNode* pNode = pHead;
    ListNode* pReversedHead = NULL;

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