//
//  MyList.hpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#ifndef MyList_hpp
#define MyList_hpp

#include <stdio.h>
#include "ListNode.hpp"


template<class T>


class MyList {
private:
    unsigned  int  listLenght;
    ListNode<T> *node ;// 临时节点
    ListNode<T>*lastNode;// 尾节点
    ListNode<T>*headNode;// 尾节点
public:
    MyList();// 初始化
    unsigned int length();// 链表元素的个数
    void add(T x);//表尾添加元素
    void traversal();//遍历整个链表并打印
    bool isEmpty();//判断链表是否为空
    ListNode<T> * find(T x);// 查找第一个值为x 的节点，返回节点的地址,找不到返回NULL
    void Delete(T x);// 删除第一个值为x的节点
    void insert (T x,ListNode<T> *p);//在p节点后插入值为x的节点
    void insertHead(T x);//在链表的头部插入节点
    
};


#endif /* MyList_hpp */
