#include <stdio.h>

	int maxsize=8;
	int size=0;
	char stack[8];
	int top=-1;
	
void isEmpty(){
	if(size<=0)
		printf("Stack is empty");
}

void isFull(){
	if(size>=8)
		printf("Stack is full");
	else
		printf("Stack is not full");
}

void outPut(){
	if(top>-1)
		printf("%s", stack);
	
	else
		printf("Stack is empty");
}

void getSize(){
	int i;
	for(i=0;stack[i]!='\0';i++){
	size+=1;
	top=size-1;
	}
}

void push(){
	if(top<=8){
		char x;
		printf("Enter a letter to push ");
		scanf("%c", &x);
		top++;
		x=stack[top];
	}
	
	else
		printf("Stack is overflow");
}

void pop(){
	if(top<-1)
		printf("Stack is underflof");
	
	else{
		top--;
	}
}

char peek(){
	return stack[top];
	printf("Top element is %c",stack[top]);	
}

int main(){
	push();
	outPut();
}

