//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 4/17/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type>* parent)
{
    int balance;
    int leftHeight = this->calculateHeight(parent->getLeftNode());
    int rightHeight = this->calculateHeight(parent->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
AVLTree<Type> :: AVLTree()
{
    
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode;
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode;
    
    parent->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree(BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightNode()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    return parent;
}


template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type value)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(value < parent->getNodeData())
    {
        parent->setLeftChild(removeNode(parent->getLeftNode(),  value));
    }
    else if(value > parent->getNodeData())
    {
        parent->setRightChild(removeNode(parent->getRightNode(), value));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftNode() == nullptr && parent->getRightNode() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftNode() == nullptr) //if pass the dereference value changes to another dereference
        {
            *parent = *parent->getRightNode();
        }
        else if(parent->getRightNode() == nullptr)//if pass the dereference value changes to another dereference
        {
            *parent = *parent->getLeftNode();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightNode());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightNode(), leftMost->getNodeData()));
        }
    }
    
    if(parent == nullptr)
    {
        return parent;
    }
    
    return balanceSubTree(parent);
        
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type value)
{
    if(parent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(value);
    }
    else if(value < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftNode(), value));
        parent = balanceSubTree(parent);
    }
    else if(value > parent->getNodeData())
    {
        parent->setRightChild(insertNode(parent->getRightNode(), value));
        parent = balanceSubTree(parent);
    }
    return parent;
}

template <class Type>
void AVLTree<Type> :: insert(Type itemToInsert)
{
    insertNode(this->getRoot(), itemToInsert);
}

template <class Type>
void AVLTree<Type> :: remove(Type value)
{
    removeNode(this->getRoot(), value);
}

#endif /* AVLTree_hpp */
