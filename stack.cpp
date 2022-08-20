#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
 private : 
 int* arr;
 int front;
 public : 
 Stack()
 {
  arr = new int [n];
  front =-1;
 }
  void pop()
  {
  	if(front ==-1)
  	{
  		cout<<"Stack is empty"<<endl;
  		return;
  	}
  	front--;

  }
  void push(int x)
  {
  	if(front==n-1)
  	{
  		cout<<"Stack Overflow"<<endl;
  		return ;
  	}
  	  	front ++ ;

  	arr[front]=x;
  	//cout<<arr[front]<<endl;


  }

  void top()
  {
  	
  	if(front==-1)
  	{
  		cout<<"Stack Is empty"<<endl;
  		return ;
  	}
  	cout<<arr[front]<<endl;
  }
  bool empty()
  {
  	if(front==-1)
  		return 1;
  	return 0;
  }

};
int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
for(auto i = 0;i<5;i++)
  {
   s.top();
   s.pop();
  }
   cout<<s.empty()<<endl;
 
}