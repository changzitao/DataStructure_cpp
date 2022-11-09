//
// Created by 1 on 2/11/2022.
//
#include "iostream"
#include "A_LinkList.h"
bool HeardInsert(LinkList &L,int val){
    LinkList p = (Node*)malloc(sizeof (Node));
    p->elem=val;
    p->next=L->next;
    L->next=p;
    return true;
}
bool LastInsert(LinkList&L,int val){
    LinkList p = L;
    while(p->next!= nullptr){
        p=p->next;
    }
    LinkList newNode = (Node*)malloc(sizeof (Node));
    newNode->elem=val;
    newNode->next= nullptr;
    p->next=newNode;
}
