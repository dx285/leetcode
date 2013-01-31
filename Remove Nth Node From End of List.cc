/*
Remove Nth Node From End of List

http://leetcode.com/onlinejudge#question_19

Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
    Given n will always be valid.
    Try to do this in one pass.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *prev = NULL;
        ListNode *end = head;
        
        while(end!=NULL && n!=0) {
            end = end->next;
            n--;
        }
        
        if(end == NULL) return head->next;
        
        end = end->next;
        prev = head;
        
        while(end!=NULL) {
            end = end->next;
            prev = prev->next;
        }
        
        prev->next=prev->next->next;
        return head;
    }
};