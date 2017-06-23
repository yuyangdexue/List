//
//  ListNode.hpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#ifndef ListNode_hpp
#define ListNode_hpp

#include <stdio.h>
template<class T>
class ListNode {
public:
    ListNode(){next = NULL;};
    T data;// 值
    ListNode *next;// 指向下一个节点的指针
    
};
#endif /* ListNode_hpp */
