#include "stack.h"

using namespace std;



Stack::Stack()
{
	pTop = NULL;
}

/*Stack::~Stack()
{
	// delete data;
}
*/

void Stack::push(void* inData)
{
	Node* newNode = new Node(inData, pTop);
	pTop = newNode;
}
void* Stack::pop()
{
	void* data =  pTop->data;
	pTop = pTop->pNext;
	return data;
}

void* Stack::top()
{
   return pTop->data;
}

bool Stack::empty()
{
	return (pTop==NULL);
}

void Stack::display()
{
	//cout<<endl;
	Node *p1;
	p1 = pTop;
	while (p1 != NULL)
	{
		cout<< ((Disc*)(p1->data))->toString()<<"\t";
		p1 = p1->pNext;
	}
	cout<<endl;
}

