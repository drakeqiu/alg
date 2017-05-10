//
//  List.h
//  alg
//
//  Created by jarvis on 10/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#ifndef _List_h
#define _List_h
#define ElementType int
#include <stdio.h>
#include <stdlib.h>

struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert(ElementType X, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
#endif /* List_h */
