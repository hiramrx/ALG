#include <stddef.h>
// 单链表反转

// 单链表节点定义
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

ListNode *ReverseList(ListNode *pHead)
{
    ListNode *pPrev = NULL;
    ListNode *pNode = pHead;
    ListNode *pReversedHead = NULL;

    while (pNode != NULL)
    {
        ListNode *pNext = pNode->next; //保存下一个节点
        if (pNext == NULL)
        {
            pReversedHead = pNode;
        }
        pNode->next = pPrev; //反转节点
        
        pPrev = pNode; //保存上一个节点，供下一次反转
        pNode = pNext; //进行下一次迭代
    }
    return pReversedHead;
}
