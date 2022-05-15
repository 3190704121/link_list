//
// Created by zwp18 on 2022/5/15.
//

#ifndef LINK_LIST_STATIC_LINKED_LIST_H
#define LINK_LIST_STATIC_LINKED_LIST_H

typedef int Elemtype;
#define MaxSize 10//静态链表最大长度
typedef struct {
    Elemtype data;
    int next;
}SLinkList[MaxSize];


#endif //LINK_LIST_STATIC_LINKED_LIST_H
