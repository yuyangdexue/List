//
//  BinaryTree.hpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
#include "BTNode.hpp"

template <class T>

class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    BTNode<T> *_root;
    // 清空当前树
    void clear();
    // 获取当前元素
    T getElement() const;
    // 判断当前二叉树是不是空二叉树
    bool isEmpty() const;
    
    //构建一棵数
    void makeTree(const T &x,BinaryTree<T> *left,BinaryTree<T> *right);
    
    //拆除一棵数
    void breakTree(T &x,BinaryTree*left,BinaryTree*right);
    
    //前序遍历 统一采用递归遍历
    void preOrder(BTNode<T> *t);
    //中序遍历
    void inOrder(BTNode<T> *t);
    //后序遍历
    void postOrder(BTNode<T> *t);

};


#endif /* BinaryTree_hpp */
