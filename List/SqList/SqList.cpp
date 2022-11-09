//
// Created by 1 on 2/11/2022.
//
#include "iostream"
#include "SqList.h"
bool InitList(SqList &L){
    L.elem =(int*) malloc(MAXSIZE);
    L.length=0;
    if(L.elem== nullptr)return false;
    return true;
}
bool ListInsert(SqList&L,int i,int val){
    if(i<0||i>L.length)return false;
    if(L.length==MAXSIZE-1)return false;
    for(int j=L.length;j>=i;j--){
        L.elem[j]=L.elem[j-1];
    }

    L.elem[i]=val;

    L.length++;
    return true;
}
bool GetElem(SqList&L,int i,int &e){
    if(i<0||i>L.length)return false;
    e=L.elem[i];
    return true;
}
int LocateElem(SqList&L,int val){
    for(int i=0;i<L.length;i++){
        if(L.elem[i]==val)return i;
        //如果找到返回下表
    }
    return -1;
    //找不到就返回-1
}
bool ListDelete(SqList&L,int i){
    if(i<0||i>L.length)return false;
    for(int j=i;j<L.length;j++){
        L.elem[j]=L.elem[j+1];
    }
    L.length--;
    return true;
}