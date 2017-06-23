//
//  MyList.cpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#include "MyList.hpp"

template<class T>

MyList<T>::MyList()
{
    node = NULL;
    lastNode = NULL;
    headNode = NULL;
    listLenght = 0;
    
}

template<class T>

void MyList<T>::add(T x)
{
    node = new  ListNode<T>();// 申请一个新的节点
    node->data = x;// 新节点赋值为x
    if (lastNode==NULL) // 如果没有尾节点则链表为空  node 即 为头节点 又为尾节点
    {
        headNode = node;
        lastNode   = node;
    }
    else
    {
        lastNode->next = node; // ;//node既为尾节点的下一个节点
        lastNode = node; //node变成了尾节点,把尾节点赋值为node
    }
    ++ listLenght;
}

template<class T>

unsigned int MyList<T>::length()
{
    return listLenght;
}


template<class T>

void MyList<T>::traversal()
{
    node = headNode;//用临时节点指向头结点
    while (node!=NULL) //遍历链表并输出
    {
    
        printf(node->data);
        node=node->next;
    }

}


template<class T>

bool MyList<T>:: isEmpty()
{
    return listLenght==0;
}


template<class T>

ListNode<T> *MyList<T>::find(T x)
{
    node = headNode;// //用临时节点指向头结点
    while (node!=NULL&&node->data!=x) {
        node = node->next;
    }
    return node; //返回找到的节点的地址,如果没有找到则返回NULL
}

template<class T>

void MyList<T>::Delete(T x )
{
    ListNode<T> *temp = headNode;//  申请一个临时节点指向头节点
    if (temp == NULL)  return;// 果头节点为空,则该链表无元素,直接返回
    if (temp->data ==x)//如果头节点的值为要删除的值,则删除头节点
    {
        delete (temp); // 删除头节点
        return;
    }
    
    while (temp->next!=NULL&&temp->next->data!=x) {//遍历链表找到第一个值与x相等的节点,temp表示这个节点的上一个节点
        temp=temp->next;
    }
    
    if(temp->next==NULL) return;//如果没有找到则返回
    
    if(temp->next==lastNode)//如果找到的时候尾节点
    {
        lastNode=temp;//把尾节点指向他的上一个节点
        delete(temp->next);//删除尾节点
        temp->next=NULL;
    }
    else//如果不是尾节点,如图4
    {
        node=temp->next;//用临时节点node指向要删除的节点
        temp->next=node->next;//要删除的节点的上一个节点指向要删除节点的下一个节点
        delete(node);//删除节点
        node=NULL;
    }
    
        
}

template<class T>

void MyList<T>::insert(T x, ListNode<T> *p)
{
    if(p==NULL) return;
    node=new ListNode<T>();//申请一个新的空间
    node->data=x;//如图5
    node->next=p->next;
    p->next=node;
    if(node->next==NULL)//如果node为尾节点
        lastNode=node;
}


template<class T>
void  MyList<T>::insertHead(T x)
{
    node=new ListNode<T>();
    node->data=x;
    node->next=headNode;
    headNode=node;
}











