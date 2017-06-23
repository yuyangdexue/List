//
//  BTNode.hpp
//  Cpp
//
//  Created by 于洋 on 2017/6/23.
//  Copyright © 2017年 于洋. All rights reserved.
//

#ifndef BTNode_hpp
#define BTNode_hpp
#include <stdio.h>
template <class T>

struct BTNode
{
    BTNode<T> *_lChild,*_rChild;
    T elemment;
    BTNode (const T &e){
        elemment = e;
        _lChild = _rChild = NULL;
    }
};


#endif /* BTNode_hpp */
