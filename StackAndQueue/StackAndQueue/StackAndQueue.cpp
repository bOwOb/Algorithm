//Queue
#include <stdio.h>

int queue[10];
int front, rear;

int input(int i) {
	if ((rear + 1) % 10 == front) {
		return -1;
	}
	queue[rear] = i;
	rear = ++rear % 10;
	return i;
}

int get(void) {
	int i;
	if (front == rear) {
		return -1;
	}
	i = queue[front];
	front = ++front % 10;
	return i;
}

//Stack
#include<stdio.h>
#include<iostream>

int stack[100];
int top = -1;

int IsEmpty() {
	if (top < 0)
		return true;
	else
		return false;
}
int IsFull() {
	if (top >= 100 - 1)
		return true;
	else
		return false;
}

void push(int value) {
	if (IsFull() == true)
		printf("Stack full");
	else
		stack[++top] = value;
}

int pop() {
	if (IsEmpty() == true)
		printf("Stack empty");
	else
		return stack[top--];
}

int main() {
	int num;
	for (int i = 0; i < 5; i++) {
		printf("input number : ");
		std::cin >> num;
		push(num);
	}
	printf("%d ", pop());
	printf("%d ", pop());
	printf("%d ", pop());

	return 0;
}