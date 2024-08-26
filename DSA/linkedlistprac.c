#include <stdio.h>

typedef struct node {
    char elem;
    struct node *link;
}ctype, *List;

void deleteID(List L, char target){
    List *p;
    List temp;
    p = &L;
    while ( *p != NULL && (*p)->link != NULL && (*p)->link->elem != target){
        p = &(*p)->link;
    }

    if ((*p)->link->elem == target){
        temp = (*p)->link;
        (*p)->link = temp->link;
        free(temp);
    }

}

void Insert(List L, char target, char new){
 List *p;
 p = &L;

 while (*p != NULL && (*p)->elem != target){
    p = &(*p)->link;
 }

 if (*p != NULL && (*p)->elem == target){
    List newNode = (List)malloc(sizeof(List));
    newNode->elem = new;;
    newNode->link = (*p)->link;

    (*p)->link = newNode;
 }
}

void main (){
List L;

List q;
List *p;

p = &L;

q = L;

}