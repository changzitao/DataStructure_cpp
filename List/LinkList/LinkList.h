//
// Created by 1 on 2/11/2022.
//

#ifndef PROJECT3_LINKLIST_H
#define PROJECT3_LINKLIST_H

typedef struct Node {
    int elem;
   struct Node* next;
}*LinkList,LNode;

bool InitList(LinkList&L);
bool GetElem(LinkList L,int i,int &e);
LNode *LocateElem(LinkList L,int val);
bool ListInsert(LinkList& L,int i,int val );
bool ListDelete(LinkList&L,int i );

#endif //PROJECT3_LINKLIST_H
