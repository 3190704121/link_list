/*
 * ����
 */

#include "Header_file.h"

void testLinklist(){//���������
    LinkList L;
    List_HeadInsert(L);
    printf("����ĳ���Ϊ%d\n",Length(L));
    int e=-1;
    ListDelete(L,3,e);
    printf("%d",e);
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

