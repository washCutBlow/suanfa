//
//  binaryTree.c
//  suanfa
//
//  Created by zhanglei on 2019/2/23.
//  Copyright © 2019年 zhanglei. All rights reserved.
//

#include "binaryTree.h"

/**
 获取每个数节点所在内存大小
 @return 节点所占内存大小
 */
int treeNodeTypeLength() {
    return sizeof(TREENODE);
}

/**
创建二叉树 (向树中插入一个节点)

 @param treeRoot 树的根节点
 @param data 要插入的数据
 @return 返回该树的根节点
 */
TREENODE * insert2Tree(TREENODE *treeRoot, int data) {
    TREENODE *temp,*forEach;
    
    if (NULL == treeRoot) { //  说明是一个空树，需要新建树
        if (NULL == (temp = (TREENODE *)malloc(sizeof(TREENODE)))){
            assert(0);
        }
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    } else {
        forEach = treeRoot;
        while (NULL != forEach) {
            if (data < forEach->data) {
                if (NULL != forEach->left) {
                    forEach = forEach->left;
                } else {    // 插入
                    if (NULL == (temp = (TREENODE *)malloc(sizeof(TREENODE)))){
                        assert(0);
                    }
                    temp->data = data;
                    temp->left = NULL;
                    temp->right = NULL;
                    forEach->left = temp;
                    break;
                }
            } else {
                if (NULL != forEach->right) {
                    forEach = forEach->right;
                } else {    // 插入
                    if (NULL == (temp = (TREENODE *)malloc(sizeof(TREENODE)))){
                        assert(0);
                    }
                    temp->data = data;
                    temp->left = NULL;
                    temp->right = NULL;
                    forEach->right = temp;
                    break;
                }
            }
        }
    }
    return treeRoot;
}

/**
 <#Description#>

 @param node <#node description#>
 */
void visit(TREENODE node) {
    printf("%d\t",node.data);
}

/**
 二叉树的后序遍历

 @param root <#root description#>
 */
void houxubianli(TREENODE *root) {
    
    TREENODE* stack[50];
    int top = -1, loop = 1;
    for (int i=0; i<50; i++) stack[i] = NULL;
    TREENODE* p = root;
    stack[++top] = p;// 先入站跟节点
    while (top > -1) {
        while (p && loop) { // 按照右节点左节点的顺序入站，loop用于控制出栈时节点是否时当前栈顶节点的兄弟节点，如果是兄弟节点也的来一次这样的入栈操作
            if (p->right) stack[++top] = p->right;
            if (p->left) stack[++top] = p->left;
            if (p->left) p = p->left;
            else p = p->right;
        }
        // 开始出战
        p = stack[top--];
        printf("%d\t", p->data);
        if (top == -1) break;
        // 如果当前栈顶是刚出栈节点的双亲，则继续出栈，如果是兄弟节点，则要按照上面的入栈流程再来一遍
        if(p == stack[top]->left || p == stack[top]->right) loop = 0;
        else  loop = 1;
        p = stack[top];
    }
}

/**
 二叉树的中序遍历

 @param root <#root description#>
 */
void zhongxubianli(TREENODE* root) {
    TREENODE* stack[50];
    TREENODE* p = root;
    int top = -1;
    for (int i=0; i<50; i++) {
        stack[i] = NULL;
    }
    
    while (top > -1 || p) {
        while (p) {
            stack[++top] = p;
            p = p->left;
        }
        p = stack[top--];
        printf("%d\t", p->data);
        p = p->right;
    }
}

void qianxubianli(TREENODE* root) {
    TREENODE* stack[50];
    TREENODE* p;
    int top = -1;
    for (int i=0; i<50; i++) {
        stack[i] = NULL;
    }
    stack[++top] = root;    // 根入栈
    
    while (top > -1) {
        p = stack[top--];
        printf("%d\t",p->data);
        if (p->right) stack[++top] = p->right;
        if (p->left) stack[++top] = p->left;
    }
}
