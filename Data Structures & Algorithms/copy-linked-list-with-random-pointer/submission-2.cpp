class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        Node* temp = head;
        map<Node*,Node*> mp ;
        Node* curr=new Node(head->val) ;
        Node* newHead = curr;
        while(head){
            mp[head]=curr;
            if(head->next != NULL) {
                curr->next = new Node(head->next->val);
                curr = curr->next;
            }
            head =head->next ;
            
        }
        head =temp ;
        curr=newHead;
        while(head){
            if(head->random != NULL) curr->random = mp[head->random];
            head = head->next;
            curr = curr->next;
        }
        return newHead ;
    }
};
