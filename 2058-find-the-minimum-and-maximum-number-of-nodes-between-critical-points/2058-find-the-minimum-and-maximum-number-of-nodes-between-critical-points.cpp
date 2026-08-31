/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    vector<int> ans;

    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    ListNode* temp = head;

    int pos =1;
    int last = -1;
    int first = -1;
    int mini = INT_MAX;
    
    while(temp->next->next != NULL){

    if(temp->next->val > temp->val &&
     temp->next->next->val < temp->next->val || 
     temp->next->val < temp->val &&
     temp->next->next->val > temp->next->val
     ){
        int criticalpos = pos + 1;
        if(first == -1){
            first = criticalpos;
        }
        if(last != -1){
            mini = min(mini,criticalpos - last);
        }
        last = criticalpos;
     }
     temp = temp->next;
     pos++;
    } 
     if(first == last){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
     }
     ans.push_back(mini);
     ans.push_back(last-first);

    
    return ans;
        
    }
};