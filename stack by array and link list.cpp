#include<iostream>
using namespace std;
#define Max 100 
/*

علی آرمان
981406159
کد های  مربوط به:
استک ساده
استک با لیست پیوندی
به صورت کلاس در این فایل نوشته شده


*/

//......................................................................................kelas stack ba araye
class STACK {
public:
	int a[Max]; 
	bool isEmpty();
	bool isFull();
	void Push(int);
	int Pop();
	int Peek();
private:
	int top = -1;
};

void STACK::Push(int value)	//push kardan
{
	if (isFull()) {			//baresy khaly boodan stack
		a[++top] = value;
		return;
	}
	else {
		cout << "STACK por ast";
		return;
	}
}

int STACK::Pop()	//pop kardan
{
	if (isEmpty()) {	//baresy khaly boodan stack
		int value = a[top--];
		return value;
	}
	else {
		cout << "STACK khaly ast";
		return 0;
	}
}
int STACK::Peek()	//namayedh balaterin megdar dar stack
{
	if (isEmpty()) {	//baresy khaly boodan stack
		int value = a[top];
		return value;
	}
	else {
		cout << "STACK khaly ast";
		return 0;
	}
}

bool STACK::isEmpty()	//baresy khaly boodan stack
{
	if (top > -1)
		return false;
	else
		return true;
}
bool STACK::isFull() {//baresy por boodan stack
	if (top >= (Max - 1))
		return false;
	else
		return true;
}





//......................................................................................kelas stack ba linklist
class Node {
public:
	int value;
	Node* next;
};
Node* stack = NULL;
class StackNode {
public:
	int isEmpty();
	void Push(int);
	int Pop();
	int Peek();
private:
	int top = -1;
	Node* NewNode(int);
};
Node* StackNode::NewNode(int value){	//dorost kardan node jadid
	Node* node = new Node();
	node->value = value;
	node->next = NULL;
	return node;
}

int StackNode::isEmpty(){	//baresy khaly boodan stack
	if (stack == NULL)
		return 0;
}

void StackNode::Push(int value){	//push kardan dar stack
	Node* Node = NewNode(value);
	Node->next = stack;
	stack = Node;
}

int StackNode::Pop(){	//pop kardan az stack
	if (isEmpty())
		return 0;
	Node* temp = stack;
	stack = stack->next;
	int popped = temp->value;
	free(temp);

	return popped;
}

int StackNode::Peek(){	//namayedh balaterin megdar dar stack
	if (isEmpty())
		return 0;
	return stack->value;
}


void main() {
	//kelas stack ba arraye

	//STACK s;
	//s.Push(1);
	//s.Push(2);
	//s.Peek();
	//s.Pop();



	//kelas stack ba linklist

		StackNode sl;
		sl.Push( 10);
		sl.Push( 20);
		sl.Push( 30);
		cout<<sl.Pop();
		sl.Peek();
	
}