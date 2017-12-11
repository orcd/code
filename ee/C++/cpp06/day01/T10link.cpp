
#include <iostream>
using namespace std;

template<class T>
class Node
{
public:
    Node* next;
    T value;
};

template<class T>
class Link
{
public:
    Node<T>* head;

    Link()
    {
        head = NULL;
    }

    void add(T value)
    {
        Node<T>* node = new Node<T>;
        node->value = value;

        node->next = head;
        head = node;
    }

    void del(T value)
    {
        Node<T>* node = head;
        Node<T>* prev = NULL;
        while(node)
        {
            if(node->value == value)
            {
                // del operator
                if(prev == NULL) // 要删除头节点
                {
                    head = head->next;
                }
                else
                {
                    prev->next = node->next; // 删除中间某节点
                }
                delete node;
                return;
            }
            else
            {
                prev = node;
                node = node->next;
            }
        }
    }

    void dump()
    {
        Node<T>* node = head;
        while(node)
        {
            cout << node->value << endl;       
            node = node->next;
        }
    }
};

int main()
{
    Link<int> listInt;
    listInt.add(10);
    listInt.add(100);
    listInt.add(10.3);

    listInt.dump();
}







