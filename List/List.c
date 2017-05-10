//
//  List.c
//  alg
//
//  Created by jarvis on 10/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#include "List.h"
#include "fatal.h"
#include <stdlib.h>

struct Node{
    ElementType Element;
    Position Next;
};

List MakeEmpty(List L)
{
    if (L != NULL) {
        DeleteList(L);
    }
    L = malloc(sizeof(struct Node));
    if (L == NULL) {
        FatalError( "Out of memory!");
    }
    
    L->Next = NULL;
    return L;
}

/* Return true if L is empty */
int IsEmpty(List L)
{
    return L->Next == NULL;
}

/* Return true if P is the last position in list L */
/* Parameter L is unused in this implementation */
int IsLast(Position P, List L)
{
    return P->Next == NULL;
}

/* Return Position of X in L; NULL if not found */
Position Find(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while (P != NULL && P->Element != X) {
        P = P->Next;
    }
    return P;
}

/* Delete first occurrence of X from a list */
/* Assume use of a head node */
void Delete(ElementType X, List L)
{
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if (!IsLast(P, L))      /* X is found */
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}

Position FindPrevious(ElementType X, List L)
{
    Position P;
    P = L;
    while (P->Next != NULL && P->Next->Element != X) {
        P = P->Next;
    }
    return P;
}


/**
 Insert （after leagl position P）

 @param X <#X description#>
 @param L <#L description#>
 @param P <#P description#>
 */
void Insert(ElementType X, List L, Position P)
{
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL) {
        FatalError("Out of space");
    }
    
    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}

/**
 Correct Delete algorithm

 @param L <#L description#>
 */
void DeleteList(List L)
{
    Position P, Tmp;
    P = L->Next;
    L->Next = NULL;
    while (P != NULL) {
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
    
}


/**
 Return an iterator representing the first node in the list.

 @param L <#L description#>
 @return <#return value description#>
 */
Position First(List L)
{
    return L->Next;
}

Position Head(List L)
{
    return L;
}

Position Advance(Position P)
{
    return P->Next;
}

ElementType Retrieve( Position P )
{
    return P->Element;
}

