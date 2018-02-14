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
    LinearNode<Type> * getNextNode();
};
//Constructors
/**
 This constructor is used for building the raw structure before values are known.
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

// This constructor is used to create a reference to a instance with data.
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

//This constructor is used to create a reference to a instance with data and a know link.
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}

#endif /* LinearNode_hpp */
