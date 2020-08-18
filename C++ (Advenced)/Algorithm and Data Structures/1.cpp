/*
Author: Muhammed Salih Aydoğan 
Date : 09/03/2020
*/

#include <stdio.h>
#include <stdlib.h>


struct listNode{
    char data;
    struct listNode *nextPtr;
}

typedef struct listNode listNode;
typedef listNode *listNodePtr;

void insertNode(listNodePtr *sPtr, char value);

int main(){
    listNodePtr list1Ptr = NULL;
    char i;
    for(i='A'; i<='C'; i++)
        insert(&list1Ptr, i);

return 0;
}

void insertNode(listNodePtr *sPtr, char value){
    listNodePtr newPtr;
    listNodePtr previousPtr;
    listNodePtr currentPtr;
    newPtr = (listNode*)malloc(sizeof(listNode));

    if(newPtr){
        newPtr->data=value;
        newPtr->nextPtr=NULL;
        previousPtr=NULL;
        currentPtr=*sPtr;

        while(currentPtr!=NULL&&value > currentPtr->data){
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }

    }
    if (previousPtr==NULL){
        newPtr->nextPtr = *sPtr;
        *sPtr=newPtr;
    }
}

