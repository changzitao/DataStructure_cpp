//
// Created by 1 on 2/11/2022.
//

#ifndef PROJECT3_SQLIST_H
#define PROJECT3_SQLIST_H


#define MAXSIZE 100
typedef  struct {
    int * elem;
    int length;
}SqList;
bool InitList(SqList &L);
bool ListInsert(SqList&L,int i,int val);
bool GetElem(SqList&L,int i,int &e);
int LocateElem(SqList&L,int val);
bool ListDelete(SqList&L,int i);

#endif //PROJECT3_SQLIST_H
