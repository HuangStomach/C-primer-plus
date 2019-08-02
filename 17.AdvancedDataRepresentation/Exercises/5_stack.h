#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>
#define MAXCOUNT 100
#define TSIZE 45

typedef struct item {
    char text[TSIZE];
    int a;
} Item;

typedef struct node {
    Item item;
    struct node * next;
} Node;

typedef struct stack {
    Node * head;
    int count;
} Stack;

/**
 * 初始化链表
 */
void InitializeStack(Stack * pstack);

/**
 * 链表是否为空
 */
bool StackIsEmpty(const Stack * pstack);

/**
 * 链表是否已满
 */
bool StackIsFull(const Stack * pstack);

/**
 * 项数
 */
unsigned int StackItemCount(const Stack * pstack);

/**
 * 添加项目
 */
bool Push(Item item, Stack * pstack);

/**
 * 对所有项都做操作
 */
Item Pop(Stack * pstack);

/**
 * 释放内存
 */
void EmptyTheStack(Stack * pstack);

#endif