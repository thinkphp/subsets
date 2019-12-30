#include <stdio.h>
#define MAX_SIZE 100

struct Stack {	

	   int size,
	       data[MAX_SIZE]; 
};

typedef struct Stack Stack;

void Stack_Init(Stack *S) {

     S->size = 0;
};

void Stack_Push(Stack *S, int data) {

     if(S->size < MAX_SIZE) {

     	S->data[S->size++] = data;

     } else {

     	printf("%s\n", "Stack overflow!");
     }
};

void Stack_Pop(Stack *S) {

     if(S->size == 0) {

         printf("%s\n", "Stack underflow!");

     } else { 

     	  S->size--;

     } 	  
};

int Stack_Top(Stack *S) {
         	  
    return S->data[S->size - 1];  
};

void Stack_TopOne(Stack *S) {
         	  
     S->data[S->size - 1]++;  
};

int Stack_Empty(Stack *S) {

    if(S->size == 0) return 1;

         else 
         	         return 0;
};

void Stack_Display(Stack *S) {

     for(int i = 0; i < S->size; ++i) printf("%d ", S->data[i]);
}	


int main(int argc, char const *argv[])
{
	int n; 
	Stack S;

    printf("%s", "n=");
	scanf("%d", &n);

	Stack_Init(&S);

	Stack_Push(&S, 1);

    printf("%d\n", Stack_Top(&S));	

    while(!Stack_Empty(&S)){

          if(Stack_Top(&S) < n) {

             Stack_Push(&S, Stack_Top(&S) + 1);

          } else {

          	 Stack_Pop(&S);

             if(!Stack_Empty(&S)) Stack_TopOne(&S);     
          }

          Stack_Display(&S);

          printf("\n");
    }   

    
	return 0;
}
