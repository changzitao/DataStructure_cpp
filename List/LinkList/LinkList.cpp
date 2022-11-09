//
// Created by 1 on 2/11/2022.
//
#include "iostream"
#include "LinkList.h"
bool InitList(LinkList&L){
    L = (Node*)malloc(sizeof (Node));
    L->next= nullptr;
    return true;
}
bool GetElem(LinkList L,int i,int &e){
    LinkList  p = L;
    int j=0;
    while (p!= nullptr){
        if(j==i){
            e=p->elem;
            return true;
        }
        p=p->next;
    }
    return false;
}
LNode *LocateElem(LinkList L,int val){
    LinkList  dump = L;
    while(dump!= nullptr){
        if(dump->elem==val){
            return dump;
        }
    }
    return nullptr;
}
bool ListInsert(LinkList &L,int i,int val ){
    if(i<0)return false;
    LinkList  p = L;
    int j=0;
    LinkList l1 = (Node*) malloc(sizeof(Node));
    while(p!= nullptr){
        if(j==i) {
            l1->elem = val;
            l1->next = p->next;
            p->next = l1;
            return true;
        }
        p=p->next;
        j++;
    }
    return false;
}
bool ListDelete(LinkList&L,int i ){
    if(i<0)return false;
    int j=1;
    LinkList p = L;
    while(p!= nullptr){
        if(j==i-1){
            p->next=p->next->next;
            return true;
        }
        p=p->next;
        j++;
    }
    return false;
}

