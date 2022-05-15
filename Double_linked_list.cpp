//
// Created by zwp18 on 2022/5/15.
//

/*
 * 双链表
 */
#include "Header_file.h"
#include "Double_linked_list.h"


bool InitDLinkList(DLinklist &L){//初始化双链表
    L=(DNode *) malloc(sizeof (DNode));
    if(L==NULL)
        return false;
    L->prior=NULL;
    L->next=NULL;
    return true;
}

//bool InitDLinkList(DLinklist &L){//初始化循环双链表
//    L=(DNode *) malloc(sizeof (DNode));
//    if(L==NULL)
//        return false;
//    L->prior=L;
//    L->next=L;
//    return true;
//}

bool Empty(DLinklist L){//判断双链表是否为空
    if(L->next==NULL)
        return true;
    else
        return false;
}

//bool Empty(DLinklist L){//判断循环双链表是否为空
//    if(L->next==L)
//        return true;
//    else
//        return false;
//}

bool InserNextDNode(DNode *p,DNode *s){//双链表插入
    if(p==NULL||s==NULL)
        return false;
    s->next=p->next;
    if(p->next != NULL)
        p->next->prior=s;
    s->prior=p;
    p->next=s;
    return true;
}

bool DeleteNextDNode(DNode *p){//删除p节点的后继节点
    if(p==NULL)
        return false;
    DNode *q=p->next;
    if(q==NULL)
        return false;
    p->next=q->next;
    if(q->next!=NULL)
        q->next->prior=p;
    free(q);
    return true;
}

void DestoryList(DLinklist &L){//销毁双链表
    while (L->next!=NULL)
        DeleteNextDNode(L);
    free(L);
    L=NULL;
}



