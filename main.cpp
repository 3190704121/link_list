/*
 * 链表
 */

#include "Header_file.h"

void testLinklist(){//单链表测试
    LinkList L;
    L=List_HeadInsert(L);
    LNode *s=L;
    for (int i = 0; i < Length(L); ++i) {
        s=s->next;
        printf("%d",s->data);
    }
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

