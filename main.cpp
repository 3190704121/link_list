/*
 * ����
 */

#include "Header_file.h"

void testLinklist(){//���������
    LinkList L;
    L=List_HeadInsert(L);
    LNode *s=L;
    for (int i = 0; i < Length(L); ++i) {
        s=s->next;
        printf("%d",s->data);
    }
}

void testDLinklist() {//˫�������
    DLinklist L;
    InitDLinkList(L);
}

void testSLinkList(){//��̬�������
    SLinkList a;

}

/*
 * 1.����пա�
 * 2.����жϽڵ�p�Ƿ�Ϊ��β/��ͷ�ڵ㡣
 * 3.����ڱ�ͷ�����б�β����ɾ����
 */

int main(){
    testLinklist();
//    testDLinklist();

}

