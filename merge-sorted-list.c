#include<stdio.h>
#include<malloc.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

void print(struct ListNode *trav){
    while(trav){
        printf("%d -> ",trav->val);
        trav=trav->next;
    }
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *result;
    struct ListNode trav;
    int temp;
    result=&trav; 
    trav.next=NULL;   
    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            result->next=l1;
            l1=l1->next;
        }
        else{
            result->next=l2;
            l2=l2->next;
        }        
        result=result->next;
    }
    while(l1!=NULL){
        result->next=l1;
        l1=l1->next;
        result=result->next;
    }
    while(l2!=NULL){
        result->next=l2;
        l2=l2->next;
        result=result->next;
    }
    return trav.next;
}

int main(){
    struct ListNode *l1,  *l2,*result;
    l1=(struct ListNode*)malloc(sizeof(struct ListNode));
    l1->val=1;
    l1->next=NULL;
    l2=NULL;
    result=mergeTwoLists(l1,l2);
    print(result);
    return 0;
}
