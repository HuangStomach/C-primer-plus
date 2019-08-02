#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>
#define TSIZE 45
#define MAXSIZE 100

typedef struct film {
    char title[TSIZE];
    int rating;
} Item;

/* typedef struct node {
    Item item;
    struct node * next;
} Node; */

typedef struct list {
    Item entries[MAXSIZE];
    int items;
} List;

/**
 * 初始化链表
 */
void InitializeList(List * plist);

/**
 * 链表是否为空
 */
bool ListIsEmpty(const List * plist);

/**
 * 链表是否已满
 */
bool ListIsFull(const List * plist);

/**
 * 项数
 */
unsigned int ListItemCount(const List * plist);

/**
 * 添加项目
 */
bool AddItem(Item item, List * plist);

/**
 * 对所有项都做操作
 */
void Traverse(const List * plist, void (*pfun) (Item item));

/**
 * 释放内存
 */
void EmptyTheList(List * plist);

#endif