#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


typedef struct {
    Node* top; 
} Stack;

// Fonction pour créer une pile vide
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL) {
        fprintf(stderr, "Erreur : Mémoire insuffisante pour créer la pile\n");
        exit(EXIT_FAILURE);
    }
    stack->top = NULL; 
    return stack;
}

// Fonction pour tester si la pile est vide
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}