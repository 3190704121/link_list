//
// Created by zwp18 on 2022/5/15.
//

#ifndef LINK_LIST_SINGLE_LINKED_LIST_H
#define LINK_LIST_SINGLE_LINKED_LIST_H

typedef int Elemtype;

typedef struct LNode{//单链表结构体
    Elemtype data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L);//初始化单链表
bool Empty(LinkList L);//判断是否为空
LNode * GetElem(LinkList L,int i);//按位查找
bool InsertNextNode(LNode *p,Elemtype e);//后插法
bool InsertPriorNode(LNode *p,Elemtype e);//前插法
bool ListInsert(LinkList &L,int i,Elemtype e);//按位插入
bool ListDelete(LinkList &L,int i,Elemtype &e);//删除第i位置元素
bool DeleteNode(LNode *p);//删除指定节点
LNode *LocateElme(LinkList L,Elemtype e);//按值查找
int Length(LinkList L);//求表长
LinkList List_TailInsert(LinkList &L);//尾插法
LinkList List_HeadInsert(LinkList &L);//头插法

#endif //LINK_LIST_SINGLE_LINKED_LIST_H
