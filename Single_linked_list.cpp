//
// Created by zwp18 on 2022/5/15.
//

/*
 *单链表
 */
#include "Header_file.h"
#include "Single_linked_list.h"


bool InitList(LinkList &L){//初始化单链表
    L=(LNode *) malloc(sizeof (LNode));
    if(L==NULL)
        return false;
    L->next=NULL;
    return true;
}

//bool InitList(LinkList &L){//初始化循环单链表
//    L=(LNode *) malloc(sizeof (LNode));
//    if(L==NULL)
//        return false;
//    L->next=L;
//    return true;
//}

bool Empty(LinkList L){//判断是否为空
    if(L->next==NULL)
        return true;
    else
        return false;
}

//bool Empty(LinkList L){//判断循环单链表是否为空
//    if(L->next==L)
//        return true;
//    else
//        return false;
//}

LNode * GetElem(LinkList L,int i){//按位查找
    if(i<0)
        return NULL;
    LNode *p;
    int j=0;
    p=L;
    while (p!=NULL&&j<i){
        p=p->next;
        j++;
    }
    return p;
}

bool InsertNextNode(LNode *p,Elemtype e){//后插法
    if(p==NULL)
        return false;
    LNode *s=(LNode *) malloc(sizeof (LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}

bool InsertPriorNode(LNode *p,Elemtype e){//前插法
    if(p==NULL)
        return false;
    LNode *s=(LNode *) malloc(sizeof (LNode));
    if(s==NULL)
        return false;
    s->next=p->next;
    p->next=s;
    s->data=p->data;
    p->data=e;
    return true;
}

bool ListInsert(LinkList &L,int i,Elemtype e){//按位插入
    if(i<1)
        return false;
//    LNode *p;
//    int j=0;
//    p=L;
//    while (p!=NULL&&j<i-1){
//        p=p->next;
//        j++;
//    }
    LNode *p= GetElem(L,i-1);
//    if(p==NULL)
//        return false;
//    LNode *s=(LNode *) malloc(sizeof (LNode));
//    s->data=e;
//    s->next=p->next;
//    p->next=s;
    return InsertNextNode(p,e);
}

bool ListDelete(LinkList &L,int i,Elemtype &e){//删除第i位置元素
    if(i<1)
        return false;
//    LNode *p;
//    int j=0;
//    p=L;
//    while (p!=NULL&&j<i-1){
//        p=p->next;
//        j++;
//    }
    LNode *p= GetElem(L,i-1);
    if(p==NULL)
        return false;
    if(p->next==NULL)
        return false;
    LNode *q=p->next;
    e=q->data;
    p->next=q->next;
    free(q);
    return true;
}

bool DeleteNode(LNode *p){//删除指定节点
    if(p==NULL)
        return false;
    LNode *q=p->next;
    p->data=p->next->data;//有小bug，当最后删除最后一个节点时失效。
    p->next=q->next;
    free(q);
    return true;
}

LNode *LocateElme(LinkList L,Elemtype e){//按值查找
    LNode *p=L->next;
    while (p!=NULL&&p->data!=8)
        p=p->next;
    return p;
}

int Length(LinkList L){//求表长
    int len=0;
    LNode *p=L;
    while(p->next!=NULL){
        p=p->next;
        len++;
    }
    return  len;
}

LinkList List_TailInsert(LinkList &L){//尾插法
    int x;
    L=(LinkList) malloc(sizeof (LNode));
    LNode *s,*r=L;
    scanf("%d",&x);
    while(x!=9999){
        s=(LNode*) malloc(sizeof (LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

LinkList List_HeadInsert(LinkList &L){//头插法
    LNode *s;
    int x;
    L=(LinkList) malloc(sizeof (LNode));
    L->next=NULL;
    scanf("%d",&x);
    while(x!=9999){
        s=(LNode*) malloc(sizeof (LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}



