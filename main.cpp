#include<stdio.h>
#include<iostream>
#include<math.h>
#include "stack.h"
#include "disc.h"

using namespace std;

void toh(int n)
{
    int i, x;
	Disc* a;
	Disc* b;;
	Stack* t1 = (Stack*) malloc(sizeof(Stack));
	Stack* t2 = (Stack*) malloc(sizeof(Stack));
	Stack* t3 = (Stack*) malloc(sizeof(Stack));
	
    for (i = n; i >= 1; i--)
    {
		//d.setSize(i);
		Disc* d = new Disc(i);
		//cout << d->getSize();
        	t1->push(d);
    }
    cout << "before run" << endl;
    cout << "t1: ";
    t1->display();
    cout << "t2: ";
    t2->display();
    cout << "t3: ";
    t3->display();

      /*if (!t1->empty())
        cout << 1 << " " << ((Disc*)(t1->top()))->getSize() << endl;
      if (!t2->empty())
        cout << 2 << " " << ((Disc*)(t2->top()))->getSize() << endl;
      if (!t3->empty())
        cout << 3 << " " << ((Disc*)(t3->top()))->getSize() << endl;
*/
	// ****  Your Tower of Hanoi solution!
    for (int i = 0; i < (pow(2, n)-1); i++){
      int a, b, c;
      a = 0;
      b = 0;
      c = 0;
      if (!(t1->empty())){
        a = ((Disc*)(t1->top()))->getSize();
	    }
      if (!(t2->empty())){
        b = ((Disc*)(t2->top()))->getSize();
	    }
      //cout << "t" << endl;
      if (!(t3->empty())){
      	c = ((Disc*)(t3->top()))->getSize();
	    }

      if (i%3 == 0){
        if (a != 0 && (a < c || c == 0))
          t3->push(t1->pop());
        else
          t1->push(t3->pop());
      }
      if (i%3 == 1){
        if (a != 0 && (a < b || b == 0))
          t2->push(t1->pop());
        else
          t1->push(t2->pop());
      }
      if (i%3 == 2){
        if (b != 0 && (b < c || c == 0))
          t3->push(t2->pop());
        else
          t2->push(t3->pop());
      }
      /*cout << "_____________" << endl;
      if (!t1->empty())
        cout << 1 << " " << ((Disc*)(t1->top()))->getSize() << endl;
      if (!t2->empty())
        cout << 2 << " " << ((Disc*)(t2->top()))->getSize() << endl;
      if (!t3->empty())
        cout << 3 << " " << ((Disc*)(t3->top()))->getSize() << endl;
      cout << "i = " << i << endl;*/
    }
    cout << "after run" << endl;
    cout << "t1: ";
    t1->display();
    cout << "t2: ";
    t2->display();
    cout << "t3: ";
    t3->display();
 
   //cout << ((Disc*)(t1->top()))->getSize() << endl;
  free(t1);
  free(t2);
  free(t3);
}
int main()
{
    int n;
    cout<<"enter the number of disks in ";
    cin>>n;    
    toh(n);
    return 0;
}
