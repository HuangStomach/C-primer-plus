#ifndef _TREE_H_
#define _TREE_H_
#define SLEN 20
#define MAXITEMS 50
#include <stdbool.h>

typedef struct item {
    char word[SLEN];
    int count;
} Item;

typedef struct trnode {
    Item item;
    struct trnode * left;
    struct trnode * right;
} Trnode;

typedef struct tree {
    Trnode * root;
    int size;
} Tree;

void InitializeTree(Tree * ptree);

bool TreeIsEmpty(const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

int TreeItemCount(const Tree * ptree);

bool AddItem(const Item * pi, Tree * ptree);

int InTree(const Item * pi, const Tree * ptree);

bool DeleteItem(const Item * pi, Tree * ptree);

bool Traverse(const Tree * ptree, void (*pfun) (Item item));

void DeleteAll(Tree * ptree);

#endif