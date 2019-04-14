//
//  main.c
//  suanfa
//
//  Created by zhanglei on 2018/7/22.
//  Copyright © 2018年 zhanglei. All rights reserved.
//

#include <stdio.h>
#include "binaryTree.h"


int main(int argc, const char * argv[]) {
    TREENODE *treeRoot = NULL;
    
    printf("二叉树每个节点所占内存 大小是%d\n", treeNodeTypeLength());
    for (int i=9; i<20; i++) {
        treeRoot = insert2Tree(treeRoot, i);
    }
    printf("创建的二叉树根节点是%d\n",treeRoot->data);
    printf("二叉树的后序遍历结果:");
    houxubianli(treeRoot);
    printf("\n");
    
    return 0;
}
