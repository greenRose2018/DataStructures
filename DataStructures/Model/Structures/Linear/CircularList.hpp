//
//  CircularList.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/26/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include <stdio.h>
#include "Node.hpp"

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

template <class Type>
class DoubleNode : public Node<Type>
{
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
    
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getPrevious();
    DoubleNode<Type> * getNext();
    
    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);
};
//Constructors
/**
 This constructor is used for building the raw structure before values are known.
 */
template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

// This constructor is used to create a reference to a instance with data.
template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

//This constructor is used to create a reference to a instance with data and a know link.
template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next) : Node<Type>(data)
{
    this->previous = previous;
    this->next = next;
}

//Accessor methods

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type> * next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type> * previous)
{
    this->previous = previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrevious()
{
    return previous;
}
#endif /* CircularList_hpp */
