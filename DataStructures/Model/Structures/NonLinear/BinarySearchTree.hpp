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
    int calculateSize(BinarySearchTree<Type> * startNode);
    int calculateHeight(BinarySearchTree<Type> * startNode);
    bool isBalanced(BinarySearchTree<Type> * startNode);
    bool isComplete(BinarySearchTree<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinarySearchTree<Type> * inStart);
    void preOrderTraversal(BinarySearchTree<Type> * preStart);
    void postOrderTraversal(BinarySearchTree<Type> * postStart);
    
    BinarySearchTree<Type> * getRightMostChild(BinarySearchTree<Type> * current);
    BinarySearchTree<Type> * getLeftMostChild(BinarySearchTree<Type> * current);
    
    void removeNode(BinarySearchTree<Type> * removeMe);
    
public:
    BinarySearchTree(); // Constructor
    ~BinarySearchTree(); // Destructor
    
    BinarySearchTree<Type> * getRoot();
    void setRoot(BinarySearchTree<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinarySearchTree<Type> * node);
    
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
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTree<Type> * inStart)
{
    if(inStart != nullptr)
    {
        cout<< "going left" << endl;
        inOrderTraversal(inStart->getLeftNode());
        cout << "Node Contents: " << inStart->getData() << endl;
        cout<< "going right" << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTree<Type> * preStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTree<Type> * postStart)
{
    
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTree<Type> * startNode)
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinarySearchTree<Type> * startNode)
{
    return -1;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinarySearchTree<Type> * startNode)
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinarySearchTree<Type> * startNode, int index, int size)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: removeNode(BinarySearchTree<Type> * removeMe)
{
    
}
template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type> :: getRoot()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinarySearchTree<Type> * root)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinarySearchTree<Type> * node)
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
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type> :: getRightMostChild(BinarySearchTree<Type> * current)
{
    
}

template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinarySearchTree<Type> * current)
{
    
}
#endif /* BinarySearchTree_hpp */
