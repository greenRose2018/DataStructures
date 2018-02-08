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
#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
    
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    void setNextNode(LinearNode<Type> *);
    LinearNode<Type> getNextNode();
};

#endif /* LinearNode_hpp */
