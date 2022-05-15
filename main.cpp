/*
 * 链表
 */

#include "Header_file.h"

void testLinklist(){//单链表测试
    LinkList L;
    List_HeadInsert(L);
    printf("链表的长度为%d\n",Length(L));
    int e=-1;
    ListDelete(L,3,e);
    printf("%d",e);
}

void testDLinklist() {//双链表测试
    DLinklist L;
    InitDLinkList(L);
}

void testSLinkList(){//静态链表测试
    SLinkList a;

}

/*
 * 1.如何判空。
 * 2.如何判断节点p是否为表尾/表头节点。
 * 3.如何在表头、表中表尾插入删除。
 */

int main(){
    testLinklist();
//    testDLinklist();

}

