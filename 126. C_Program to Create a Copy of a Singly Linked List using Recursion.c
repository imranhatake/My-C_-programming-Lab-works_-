#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int d; struct Node* n; } Node;

Node* copy(Node* h){
    return h ? &(Node){ h->d, copy(h->n) } : NULL;
}

int main(){
    Node c = {30,NULL}, b = {20,&c}, a = {10,&b};
    for(Node* p = copy(&a); p; p = p->n) printf("%d ", p->d);
}
