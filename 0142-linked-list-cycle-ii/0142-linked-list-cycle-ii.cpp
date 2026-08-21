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
    ListNode *detectCycle(ListNode *head) {
        unordered_map< ListNode* , bool>hash;
        ListNode* temp = head;
        while(temp){
            if(hash[temp] == true){
                return temp;
            }
            hash[temp] = true;
            temp = temp->next;
        }return NULL;
        
    }
};