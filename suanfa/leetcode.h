//
//  leetcode.h
//  suanfa
//
//  Created by zhanglei on 2019/4/14.
//  Copyright © 2019年 zhanglei. All rights reserved.
//

#ifndef leetcode_h
#define leetcode_h

#include <stdio.h>
/*链表反转*/
typedef struct NODE {
    int data;
    struct NODE *next;
} NODE;
void findBigestSubArr(int *a, int len);
extern void findLongestHuiwenByMalache(char*, long);
extern float mediumNum(int *, int *, int, int);
extern void heapSort(int *a, int len);
extern NODE *createList(void);
extern NODE *reverseList(NODE *list);
void luoxuan(void);
void aContainB(char *a, char *b);

#endif /* leetcode_h */
