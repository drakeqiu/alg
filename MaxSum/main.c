//
//  main.c
//  MaxSum
//
//  Created by jarvis on 11/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#include <stdio.h>
#include "max_sum.h"

int main(int argc, const char * argv[]) {
    static int A[ ] = { 4, -3, 5, -2, -1, 2, 6, -2 };
    
    printf( "Maxsum = %d\n",
           MaxSubsequenceSum( A, sizeof( A ) / sizeof( A[ 0 ] ) ) );
    return 0;
}
