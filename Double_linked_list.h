//
// Created by zwp18 on 2022/5/15.
//

#ifndef LINK_LIST_DOUBLE_LINKED_LIST_H
#define LINK_LIST_DOUBLE_LINKED_LIST_H

typedef int Elemtype;

typedef struct DNode{//双链表结构体
    Elemtype data;
    struct DNode *prior,*next;
}DNode,*DLinklist;

bool InitDLinkList(DLinklist &L);//初始化双链表
bool Empty(DLinklist L);//判断双链表是否为空
bool InserNextDNode(DNode *p,DNode *s);//双链表插入
bool DeleteNextDNode(DNode *p);//删除p节点的后继节点
void DestoryList(DLinklist &L);//销毁双链表

#endif //LINK_LIST_DOUBLE_LINKED_LIST_H
