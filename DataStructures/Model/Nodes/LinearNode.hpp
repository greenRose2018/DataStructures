//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <iostream>

template <class Type>
class LinearNode {
private:
    //next LinearNode<Type>*;
    
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    void setNextNode(LinearNode<Type> *);
    LinearNode<Type> getNextNode();
};

#endif /* LinearNode_hpp */
