//
//  leetcode.c
//  suanfa
//
//  Created by zhanglei on 2019/4/14.
//  Copyright © 2019年 zhanglei. All rights reserved.
//

#include "leetcode.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*extern*/
float findKth(int*, int*, int, int, int,int,int);
/*二叉树的蛇形输出*/
void snakeOutput(int *a) {
    
}

/*矩阵中最近的0元素的距离 先将所有0入栈 （尾部入，头部出）在使用广度搜索https://blog.csdn.net/qq_41855420/article/details/89190859*/

/*查找字符串src中是否包含字符串dest*/

void aContainB(char *a, char *b) {
    
    if (*a == '\0' || *b == '\0') {
        printf("hanyoukong");
        return;
        
    }
    
    while (*a!='\0') {
        int i = 0;
        for (i=0; *(a+i)==*(b+i) && *(a+i)!='\0'; i++);
        if (*(b+i) == '\0') {
            printf("包含\n");
            return;
        } else {
            a++;
        }
    }
    printf("不包含\n");
}

/*螺旋输出矩阵*/
void luoxuan() {
    
    int a[6][6] = {};
    
    int yStart = 0, yEnd = 5, xStart = 0, xEnd = 5;
    int num = 1;

    
    while(1) {
        for(int j=xStart;j<=xEnd;j++) {
            a[yStart][j] = num++;
        }
        yStart++;
        for (int i = yStart; i<=yEnd;i++) {
            a[i][xEnd] = num++;
        }
        xEnd--;
        for (int j=xEnd; j>=xStart; j--) {
            a[yEnd][j] = num++;
        }
        yEnd--;
        for (int i = yEnd; i>=yStart; i--) {
            a[i][xStart] = num++;
        }
        xStart++;
        if (xStart>=xEnd) {
            break;
        }
    }
    
    for (int i=0; i<=5; i++) {
        printf("\n");
        for (int j=0; j<=5; j++) {
            printf("%d\t",a[i][j]);
        }
    }
    
}

/*链表反转*/
NODE *createList() {
    NODE *first = malloc(sizeof(NODE));
    NODE *second = malloc(sizeof(NODE));
    NODE *three = malloc(sizeof(NODE));
    NODE *fore = malloc(sizeof(NODE));
    NODE *five = malloc(sizeof(NODE));
    NODE *six = malloc(sizeof(NODE));
    
    first->data = 1; first->next =second;
    second->data = 2; second->next =three;
    three->data = 3; three->next = fore;
    fore->data = 4; fore->next = five;
    five->data = 5; five->next = six;
    six->data = 6; six->next = NULL;
    return  first;
}

NODE* reverseList(NODE *list) {
    if (list == NULL && list->next == NULL) {
        return list;
    }
    
    NODE *pre = NULL,*next = NULL,*nextNext = NULL;
    NODE *cur = list;
    
    while (cur->next != NULL && cur->next->next != NULL) {
        next = cur->next;
        nextNext = next->next;
        
        
        cur->next = pre;
        next->next = cur;
        
        
        pre = next;
        cur = nextNext;
        
    }
    //next->next = cur;
    if (cur->next!=NULL) {
        next = cur->next;
        next->next = cur;
        cur->next = pre;
        return next;
    } else {
        cur->next = pre;
        return cur;
    }
}



/*最小堆排序*/
void fixUp(int *a, int i, int n) {
    int temp, j;
    
    if (i == 0) {
        return;
    }
    
    if (i == 1) {
        if (a[0] > a[1]) {
            int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
    }
    
    j = i/2-1;
    if (i%2 == 1) j = (i-1)/2;
    while (i>1 && j>=0) {
        if (a[i]<a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        i = j;
        j = i/2-1;
        if (i%2 == 1) j = (i-1)/2;
    }
}

void array2MinHeap(int *a, int n) {
    for (int i=0; i<n; i++) {
        fixUp(a, i, i+1);
    }
}
void heapSort(int *a, int n) {

    printf("\n");
    int j=0;
    int *temp = a;
    while (j<n) {
        printf("%d\t",temp[0]);
        j++;
        temp = a+j;
        array2MinHeap(temp, n-j);
    }
}

// 求连续子数组的最大的和（使用动态规划的方法）
void findBigestSubArr(int *a, int len) {
    int sum = a[0];
    int max = a[0];
    int index = 0;
    int subLen = 0;
    for (int i=1; i<len; i++) {
        sum = sum+a[i];
        if (sum > a[i]) {
            subLen++;
        } else {    // 抛弃之前的重新计算
            sum = a[i];
            index = i;
            subLen = 0;
        }
        max = sum > max? sum:max;
    }
    printf("最大子数组和是%d\n", max);
    printf("最大和子数组是:");
    for (int i=index; i<index+subLen; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
// 求一个字符串中的最长回文子串（马拉车算法真特么）； 最长子串的长度是半径减1，起始位置是中间位置减去半径再除以2
void findLongestHuiwenByMalache(char *orig, long len) {
    char newStr[200] = {};
    int position[200] = {};
    // 预处理字符串
    int j = 2;
    newStr[0] = '$';
    newStr[1] = '#';
    for (int i=0;i<len;i++) {
        newStr[j++] = orig[i];
        newStr[j++] = '#';
    }
    // 求最长回文
    // 其中id为能延伸到最右端的位置的那个回文子串的中心点位置，mx是回文串能延伸到的最右端的位置
    int mx = 0, id = 0, resLen = 0, resCenter = 0;
    for (int i = 1; i < 2*len+1; ++i) {
        position[i] = mx > i ? position[2*id-1] < mx-i ? position[2*id-1]:mx-i : 1;
        while (newStr[i + position[i]] == newStr[i - position[i]]) ++position[i];
        if (mx < i + position[i]) {
            mx = i + position[i];
            id = i;
        }
        if (resLen < position[i]) {
            resLen = position[i];   // 半径
            resCenter = i;  // 中心位置
        }
    }
    //resLen=1 表示是本身
    for (int i = 0; i<resLen-1; i++) {
        printf("%c",orig[(resCenter - resLen) / 2+i]);
    }
    //return s.substr((resCenter - resLen) / 2, resLen - 1);
}


// 寻找两个有序数组的中位数（第k大的数）
float mediumNum(int *a, int *b, int m, int n) {
    int k = (m+n)/2;
    if ((m+n)%2 == 0) {
        return (findKth(a, b, 0, 0, m, n, k)+findKth(a, b, 0, 0, m, n, k+1))/2;
    } else {
        return findKth(a, b, 0, 0, m, n, k+1);
    }
}
/**
 查找两个有序数组的第k大的数

 @param a <#a description#>
 @param b <#b description#>
 @param aStart <#aStart description#>
 @param bStart <#bStart description#>
 @param aLen a数组长度
 @param bLen b数组长度
 @param k <#k description#>
 */
float findKth(int *a, int *b,int aStart, int bStart, int aLen, int bLen, int k) {
    // 始终保证a是较短的数组
    if (aLen > bLen) {
        findKth(b, a, bStart ,aStart, bLen, aLen, k);
    }
    if (aLen == 0) {
        return b[bStart+k-1];
    }
    if (k == 1) {
        return a[aStart] < b[bStart] ? a[aStart] : b[bStart];
    }
    
    int p1 = k/2 < aLen ? k/2:aLen;
    int p2 = k-p1;
    if (a[aStart+p1-1] < b[bStart+p2-1]) {
        return findKth(a, b, aStart+p1, bStart, aLen-p1, bLen, k-p1);
    } else if (a[aStart+p1-1] > b[bStart+p2-1]) {
        return findKth(a, b, aStart, bStart+p2, aLen, bLen-p2, k-p2);
    } else {
        return a[aStart+p1-1];
    }
}

/*博弈树
 * 动态规划解决效率问题；把已经计算好的子问题存储起来
 * */
/*概率模拟法 求pai值
 *
 * */

/*表达式求值，用两个栈，一个存数字，一个存运算符
 * 运算符按照优先级入栈 优先级越低越靠近栈底，左括号直接入栈
 * 遇到左括号，无条件的压入到运算符栈中，如果是右括号，
 * 你波兰表达式
 * */
/*
 * 分酒问题 泊松分酒问题
 *
 * 状态树
 * */
/*
 * 迷宫问题
 * */

/*排序算法*/
// 插入排序 时间复杂度n2
void insertSort(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    int temp, j;
    for (int i = 1; i <n ; ++i) {
        temp = a[i];
        j = i-1;
        while (j >=0 && temp<a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
//合并一个数组中的左右两段有序子数组 low mid high都是数组a的索引
// 复杂度是nlogn
void mergeArraySegment(int *a, int low, int mid, int high) {
    int temp[50];
    int i = low ,j=mid+1, k=0;
    while (i<=mid && j<=high) {
        if (a[i] < a[j]) {
            temp[k++] = a[i];
            i++;
        } else if (a[j] < a[i]) {
            temp[k++] = a[j];
            j++;
        } else {
            temp[k++] = a[i];
            i++;
            j++;
        }
    }

    while (i<=mid) {
        temp[k++] = a[i];
        i++;
    }
    while (j<=high) {
        temp[k++] = a[j];
        j++;
    }

    for (int i = 0; i < k ; ++i) {
        a[low+i] = temp[i]; // 放回数组a中
    }
}
// low high 都是索引
void mergeSort(int *a, int low, int high) {
    int mid = (high-low)/2+low;

    if (low < high) {
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        mergeArraySegment(a, low, mid, high);
    }
}

/*队列DFS与BFS*/
typedef struct QUEUE {

} QUEUE;
// 创建一个容量为N的空队列

// 妙趣横生说算法pdf
//第一章顺序表

