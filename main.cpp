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
	Disc* b;
	Stack* t1 = new Stack();
	Stack* t2 = new Stack();
	Stack* t3 = new Stack();
	

    for (i = n; i >= 1; i--)
    {
		//d.setSize(i);
		Disc* d = new Disc(i);
		//cout << d->getSize();
        	t1->push(d);
    }
//cout << t1->pop() << endl;
cout << ((Disc*)(t1->top()))->getSize() << endl;
//t2->push(t1->pop());
//cout << ((Disc*)(t2->top()))->getSize() << endl;


/*
	// ****  Your Tower of Hanoi solution!
    for (int i = 0; i < (pow(2, n)-1); i++){
      int a, b, c;
      a = 0;
      b = 0;
      c = 0;
      cout << t1->empty() << endl;
      cout << t2->empty() << endl;
      cout << t3->empty() << endl;
      cout << "a" << endl;
      if (!(t1->empty())){
         cout << "a" << t1->top() << endl;
	 a = ((Disc*)(t1->top()))->getSize();
	 }
      if (!(t2->empty())){
         cout << "b" << t2->top() << endl;
	 b = ((Disc*)(t2->top()))->getSize();
	 }
      cout << "t" << endl;
      if (!(t3->empty())){
      	cout << "b" << t3->top() << endl;
        c = ((Disc*)(t3->top()))->getSize();
	}
      cout << "b" << endl;
      if (i%2 == 0){
         cout << "eworked" << i << endl;
         if ((a <= b || b==0) && (a <= c || c==0)) {          
   	      t2->push(t1->pop());
         } else if ((b <= a || a==0) && (b <= c || c==0)) {
         	t3->push(t2->pop());
         } else {
            t1->push(t3->pop());
         }
         cout << "eworked again" << i << endl;
      }
      else{
         cout << "oworked" << i << endl;
         if (a >= b && a >= c) {
   	      t3->push(t1->pop());
         } else if (b >= c	&&	b >= a) {
         	t1->push(t2->pop());
         } else {
            t2->push(t3->pop());
         }
         cout << "oworked again" << i << endl;
      }
    }
    

    if (!t1->empty())
         cout << ((Disc*)(t1->top()))->getSize() << endl;
     if (!t2->empty())
         cout <<((Disc*)(t2->top()))->getSize() << endl;
     if (!t3->empty())
         cout <<((Disc*)(t3->top()))->getSize() << endl;
 
   cout << ((Disc*)(t1->top()))->getSize() << endl;
	*/

}
int main()
{
    int n;
    //cout<<"enter the number of disksn";
    //cin>>n;    
    toh(5);
    return 0;
}
