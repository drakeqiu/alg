//
//  main.c
//  Poly
//
//  Created by jarvis on 11/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#include <stdio.h>
#include "Poly.h"
int main(int argc, const char * argv[]) {
    Polynomial P, Q;
    
    P = (Polynomial)malloc(sizeof(*P));
    Q = (Polynomial)malloc(sizeof(*Q));
    
    P->HighPower = 1;
    P->CoeffArray[ 0 ] = 1;
    P->CoeffArray[ 1 ] = 1;
    
    MultPolynomial( P, P, Q );
    MultPolynomial( Q, Q, P );
    AddPolynomial( P, P, Q );
    PrintPoly( Q );
    return 0;
}
