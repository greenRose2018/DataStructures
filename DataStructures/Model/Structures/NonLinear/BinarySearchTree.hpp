//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree(); // Constructor
    ~BinarySearchTree(); // Destructor
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current= current->getLeftNode();
            }
            else if( itemToInsert > current->getData())
            {
                current = current->getRightNode();
            }
            else //remove ccerr after verification of understanding
            {
                cerr<< "Item exist already - Exiting insert" << endl;
            }
        }
        
        if(previous->getData() > itemToInsert )
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }

}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftNode());
        cout << "Node Contents: " << inStart->getData() << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}


template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * preStart)
{
    if(preStart != nullptr)
    {
        cout  << preStart->getData() << endl;
        preOrderTraversal(preStart->getLeftNode());
        preOrderTraversal(preStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * postStart)
{
    if(postStart != nullptr)
    {
        postOrderTraversal(postStart->getLeftNode());
        postOrderTraversal(postStart->getRightNode());
        cout<< postStart->getData() <<  endl;
    }
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * startNode)
{
    if(startNode != nullptr)
    {
        return calculateSize(startNode->getLeftNode()) + calculateSize(startNode->getRightNode()) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    size += calculateSize(this->root);
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * startNode)
{
    if(startNode != nullptr)
    {
        return max(calculateSize(startNode->getLeftNode()) + calculateSize(startNode->getRightNode())) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(this->root);
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}



template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * startNode)
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    
}
template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRoot()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinaryTreeNode<Type> * root)
{
    
}


template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * node)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type value)
{
    
}
template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    
}
template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    
}


template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * current)
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinaryTreeNode<Type> * current)
{
    
}
#endif /* BinarySearchTree_hpp */
