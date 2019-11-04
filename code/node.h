#include <stddef.h>

#define ListNodePosi ListNode* 
struct ListNode {
   int data; 
   ListNodePosi pred; 
   ListNodePosi succ; 
};
