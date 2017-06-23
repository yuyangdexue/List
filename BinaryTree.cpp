//
//  BinaryTree.cpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#include "BinaryTree.hpp"
//BinaryTree();
//~BinaryTree();
//BTNode<T> *_root;
//// 清空当前树
//void clear();
//// 获取当前元素
//T getElement() const;
//// 判断当前二叉树是不是空二叉树
//bool isEmpty() const;
//
////构建一棵数
//void makeTree(const T &x,BinaryTree<T> *left,BinaryTree<T> *right);
//
////拆除一棵数
//void breakTree(T &x,JBBinaryTree*left,JBBinaryTree*right);
//
////前序遍历 统一采用递归遍历
//void preOrder(BTNode<T> *t);
////中序遍历
//void inOrder(BTNode<T> *t);
////后序遍历
//void postOrder(BTNode<T> *t);

template < class T>

BinaryTree<T>::BinaryTree()
{
    _root = NULL;
}

template < class T>

BinaryTree<T>::~BinaryTree()
{
    clear();
}

template < class T>

void BinaryTree<T>::clear()
{
    if (_root==NULL) {
        return;
    }
    delete _root;
    _root = NULL;
}

template < class T>

T BinaryTree<T>::getElement() const
{
    if (isEmpty()) {
        return  NULL;
    }
    return _root->elemment;
}

template < class T>

bool BinaryTree<T>::isEmpty() const
{
    return _root == NULL;
}

template <class T>

void BinaryTree<T>::makeTree(const T &x, BinaryTree<T> *left, BinaryTree<T> *right)
{
    if (_root)  return;
    _root = new BTNode<T>(x);
    _root->_lChild = left->_root;//让左指针指向左子树的根节点
    _root ->_rChild =right->_root;//让右指针指向左子树的根节点
     left->_root = right->_root = NULL;
}

template<class T>
void BinaryTree<T>::breakTree(T &x, BinaryTree*left, BinaryTree*right) {
    if (!_root || left == right || left->_root || right->_root) {
        //若此树本身就是空的，或则用于承接的左右树本身一样，或则用于承接的左子树不为空都直接退出
        return;
    }
    x = _root->element;//将这个树的根节点的元素域转移走
    left->_root = _root->_lChild;//将左子树单独拆成一棵树
    right->_root = _root->_rChild;//将右子树单独拆成一棵树
    clear();
}

template<class T>
void BinaryTree<T>::preOrder(BTNode<T> *t) {
    if (t) {
        printf("%d",t->element);
        preOrder(t->_lChild);
        preOrder(t->_rChild);
    }
}

template<class T>
void BinaryTree<T>::inOrder(BTNode<T> *t) {
    if (t) {
        inOrder(t->_lChild);
        printf("%d",t->element);
        inOrder(t->_rChild);
    }
}
template<class T>
void BinaryTree<T>::postOrder(BTNode<T> *t) {
    if (t) {
        postOrder(t->_lChild);
        postOrder(t->_rChild);
        printf("%d",t->element);
    }
}








