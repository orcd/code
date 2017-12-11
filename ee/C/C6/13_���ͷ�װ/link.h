#ifndef _LINK_H_
#define _LINK_H_

typedef void LinkNode;

//循环创建节点，如果输入的数为负数，退出循环
//尾插法, 返回值为结构体指针类型
LinkNode * CreateLinkTail();

//头插法, 返回值为结构体指针类型
LinkNode * CreateLinkHead();

void PrintNode(LinkNode * p);

//在某个数的前面插入新节点，如果这个数不存在，就在尾部插入新节点
void InsertNode(LinkNode * p, int x, int y);

//删除第一个节点值为x的结点
void DelNode(LinkNode * p, int x);

void DestroyLink(LinkNode * p);

#endif
