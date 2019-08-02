#include <stdio.h>
#include <stdlib.h>
#include "5_stack.h"

static void CopyToNode(Item item, Node * pnode);

/**
 * 初始化链表
 */
void InitializeStack(Stack * pstack) {
    pstack->head = NULL;
    pstack->count = 0;
}

/**
 * 链表是否为空
 */
bool StackIsEmpty(const Stack * pstack) {
    return (pstack->count == 0);
}

/**
 * 链表是否已满
 */
bool StackIsFull(const Stack * pstack) {
    return (pstack->count == MAXCOUNT); 
}

/**
 * 项数
 */
unsigned int StackItemCount(const Stack * pstack) {
    return pstack->count;
}

/**
 * 添加项目
 */
bool Push(Item item, Stack * pstack) {
    if (StackIsFull(pstack)) return false;

    Node * pnode = (Node *) malloc(sizeof(Node));
    if (pnode == NULL) return false;

    CopyToNode(item, pnode);
    pnode->next = pstack->head;
    pstack->head = pnode;
    pstack->count++;
    return true;
}

/**
 * 对所有项都做操作
 */
Item Pop(Stack * pstack) {
    if (StackIsEmpty(pstack)) return (Item){};
    Node * pnode = pstack->head;
    Item item = pnode->item;
    pstack->head = pstack->head->next;
    free(pnode);
    pstack->count--;
    return item;
}

/**
 * 释放内存
 */
void EmptyTheStack(Stack * pstack) {
    Node * pnode;
    while (pstack->head != NULL) {
        pnode = pstack->head;
        free(pstack->head);
        pstack->head = pnode;
    }
    pstack->count = 0;
}

static void CopyToNode(Item item, Node * pnode) {
    pnode->item = item;
}
