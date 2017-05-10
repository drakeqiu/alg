//
//  Poly.h
//  alg
//
//  Created by jarvis on 11/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#ifndef Poly_h
#define Poly_h

#include <stdio.h>
#include <stdlib.h>
#define MaxDegree 100

typedef struct
{
    int CoeffArray[MaxDegree + 1];
    int HighPower;
} *Polynomial;

void MultPolynomial(const Polynomial Poly1,const Polynomial Poly2, Polynomial PolyProd);
void PrintPoly(const Polynomial Q);
void AddPolynomial(const Polynomial Poly1, const Polynomial Poly2,Polynomial PolySum);


#endif /* Poly_h */
