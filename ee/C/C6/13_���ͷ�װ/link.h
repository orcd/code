#ifndef _LINK_H_
#define _LINK_H_

typedef void LinkNode;

//ѭ�������ڵ㣬����������Ϊ�������˳�ѭ��
//β�巨, ����ֵΪ�ṹ��ָ������
LinkNode * CreateLinkTail();

//ͷ�巨, ����ֵΪ�ṹ��ָ������
LinkNode * CreateLinkHead();

void PrintNode(LinkNode * p);

//��ĳ������ǰ������½ڵ㣬�������������ڣ�����β�������½ڵ�
void InsertNode(LinkNode * p, int x, int y);

//ɾ����һ���ڵ�ֵΪx�Ľ��
void DelNode(LinkNode * p, int x);

void DestroyLink(LinkNode * p);

#endif
