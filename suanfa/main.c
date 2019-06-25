//
//  main.c
//  suanfa
//
//  Created by zhanglei on 2018/7/22.
//  Copyright © 2018年 zhanglei. All rights reserved.
//

#include <stdio.h>
#include "binaryTree.h" // 二叉树函数
#include "leetcode.h"   // leetcode算法题每天一个
#include <string.h>


int main(int argc, const char * argv[]) {
    
    char ac[10] = "sdfsdd";
    char bc[10] = "";
    aContainB(ac, bc);
    exit(0);
    luoxuan();
    exit(0);
    NODE *list = NULL, *newList = NULL;
    list = createList();
    newList = reverseList(list);
    
    while (newList != NULL) {
        printf("%d\t",newList->data);
        newList = newList->next;
    }
    
    exit(0);
    
    // 最小堆排序
    int aheap[10] = {10,33,44,66,22,6,0,3,1,56};
    array2MinHeap(aheap,10);
    for (int i = 0; i<10; i++) {
        printf("%d\t",aheap[i]);
    }
    heapSort(aheap, 10);
  
    exit(0);
    
    
    // 求数组的最大和子数组
    int str[8] = {1,-2,3,10,-4,7,2,-5};
    findBigestSubArr(str, 8);
    //exit(0);
    
    // 马拉车算法
    char s[] = "abcdasdfgfdsa";
    printf("马拉车算法结果\n");
    findLongestHuiwenByMalache(s, strlen(s));
    printf("\n");
    //exit(0);
    
    // 两个有序数组的中位数
    int a[6] = {2,3,4,5,6,7};
    int b[3] = {1,2,3};
    printf("两个有序数组的中位数%f", mediumNum(a, b, sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0])));
    printf("\n");
    
    // 二叉树的前中后序遍历
    TREENODE *treeRoot = NULL;
    int n=0;
    int num = 0;
    printf("二叉树每个节点所占内存 大小是%d\n", treeNodeTypeLength());
    // 构造含有n个节点的二叉树
    printf("请输入要生成的二叉树节点的个数:");
    scanf("%d",&n);
    while (n--) {
        printf("请输入二叉树节点值:");
        scanf("%d", &num);
        treeRoot = insert2Tree(treeRoot, num);
    }
    
    printf("创建的二叉树根节点是%d\n",treeRoot->data);
    
    printf("二叉树的后序遍历结果:");
    houxubianli(treeRoot);
    printf("\n");
    
    printf("二叉树的中序遍历结果:");
    zhongxubianli(treeRoot);
    printf("\n");
    
    printf("二叉树的前序遍历结果:");
    qianxubianli(treeRoot);
    printf("\n");
    
    
    
    return 0;
}
