//
//  binaryTree.h
//  suanfa
//
//  Created by zhanglei on 2019/2/23.
//  Copyright © 2019年 zhanglei. All rights reserved.
//

#ifndef binaryTree_h
#define binaryTree_h

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// 指针类型是8个字节，再加上对齐，所以TREENODE是24个字节
typedef struct TREENODE {
    int data;
    struct TREENODE *left;
    struct TREENODE *right;
} TREENODE;

extern int treeNodeTypeLength(void);
extern TREENODE * insert2Tree(TREENODE *, int);
extern void houxubianli(TREENODE *);
extern void zhongxubianli(TREENODE*);
extern void qianxubianli(TREENODE*);
#endif /* binaryTree_h */
