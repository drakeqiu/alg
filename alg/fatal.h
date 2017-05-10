//
//  fatal.h
//  alg
//
//  Created by jarvis on 11/05/2017.
//  Copyright © 2017 jarvis. All rights reserved.
//

#ifndef fatal_h
#define fatal_h
#include <stdio.h>
#include <stdlib.h>

#define Error( Str )        FatalError( Str )
#define FatalError( Str )   fprintf( stderr, "%s\n", Str ), exit( 1 )

#endif /* fatal_h */
