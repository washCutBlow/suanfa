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

    int a[8] = {2,4,6,3,5,7,8,9};
    mergeSort(a, 0, 7);
    for (int i = 0; i <= 7 ; ++i) {
        printf("%d\t", a[i]);
    }
    //insertSort(a, 8);

}
