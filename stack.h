#ifndef _Stack_H_
#define _Stack_H_
#include<stdio.h>
#include<iostream>
#include<math.h>
#include "disc.h"
class Stack
{
	struct Node
	{
		void* data;
		Node *pNext;
		Node(void* a){
			data = a;
		}
		Node(void* a, Node * next){
			data = a;
			pNext =  next;
		}
		void setpNext(Node * a){
			pNext = a;
		}
		Node* getpNext(){
			return pNext;
		}
	};

	Node* pTop;


	public:
		Stack();					// Construct stack
		void push(void* inData);	// Add element to top of stack
		void* pop();				// Return element at top of stack and remove from top
		void* top();				// Return element at top of stack
		bool empty();
		void display();

};

#endif 		//_Stack_H_
