//
//  main.c
//  List
//
//  Created by jarvis on 10/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#include <stdio.h>
#include "List.h"

void PrintList( const List L )
{
    Position P = Header( L );
    
    if( IsEmpty( L ) )
        printf( "Empty list\n" );
    else
    {
        do
        {
            P = Advance( P );
            printf( "%d ", Retrieve( P ) );
        } while( !IsLast( P, L ) );
        printf( "\n" );
    }
}

int main(int argc, char ** argv)
{
    List L;
    Position P;
    int i;
    
    L = MakeEmpty( NULL );
    P = Header( L );
    PrintList( L );
    
    for( i = 0; i < 10; i++ )
    {
        Insert( i, L, P );
        PrintList( L );
        P = Advance( P );
    }
    for( i = 0; i < 10; i+= 2 )
        Delete( i, L );
    
    for( i = 0; i < 10; i++ )
        if( ( i % 2 == 0 ) == ( Find( i, L ) != NULL ) )
            printf( "Find fails\n" );
    
    printf( "Finished deletions\n" );
    
    PrintList( L );
    
    DeleteList( L );
    
    return 0;
}
