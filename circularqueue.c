#include <stdio.h>
void enqueue();
void dequeue();
void display();
int queue[50],front=-1,rear=-1,size;
void main()
{ 
	int choice=0;
	printf("Enter the size of circular queue: ");
	scanf("%d",&size);
	while (choice!=4) {
		printf("\nEnter Operation to perform on Queue: 1. Enqueue 2. Dequeue 3. Display 4. Exit \n");
		scanf("%d",&choice);
		switch (choice) {
			case 1: 
				enqueue();
				break;
			case 2: 
				dequeue();
				break;
			case 3: 
				display();
				break;
			case 4: 
				printf("Successfully exited from the program");
				break;
		}
	}
}

void enqueue() {
	if (front ==(rear+1)%size) {
		printf("\nQueue Overflow Error");
	}
	else {
		int ele;
		printf("\nEnter the element to enqueue: ");
		scanf("%d",&ele);
		if (front == -1 && rear == -1) {
			rear=0;
			front=0;
		}
		else {
			rear=(rear+1)%size;
		}
		queue[rear]=ele;
	}
}

void dequeue() {
	if (front == -1 && rear == -1) {
		printf("\ncircular Queue Underflow Error");
	}
	else {
		printf("\nDeleted element is %d",queue[front]);
		if (front == rear) {
			front=-1;
			rear=-1;
		}
		else {
			front=(front+1)%size;
		}
	}
}

void display() {
	if (front == -1 && rear == -1) {
		printf("\ncircular Queue Empty");
	}
	else {
		printf("\nEntered circular queue is: \n");
		for (int i=front; i<=rear; i++) {
			printf("%d \t",queue[i]);
		}
	}
}
