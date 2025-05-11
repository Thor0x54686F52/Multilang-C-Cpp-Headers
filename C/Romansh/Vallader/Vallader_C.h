#ifndef VALLADER_C_H
#define VALLADER_C_H

/*
  Translations of the reserved words of C++ into Vallader.
  If no terms exist in Vallader, a local descriptive term is used instead.
  
  I had to use ASCII forms for the Puter special characters
  because you can't define something with them, so
  here are the translations for the Puter characters:
  a  => à  (accent dropped)
  ue => ü

  Note: this is not intended as linguistic guidance—
  it’s just the ASCII mapping needed for C/C++ macros.
*/

#define automatic             auto
#define interromper           break
#define cas                   case
#define caracter              char
#define constanta             const
#define cuntinuar             continue
#define predeterminad         default
#define fai                   do
#define flotant_precis        double
#define altriment             else
#define enumeraziun           enum
#define dafor                 extern
#define flotant               float
#define per                   for
#define ir_a                  goto
#define sche                  if 
#define numer_entir           int
#define lung                  long
#define retornar              return
#define numer_entir_curt      short
#define signa                 signed       // in Vallader you should use 'signà', but you can't use 'à' in the definition name
#define dimensiun_da          sizeof
#define static                static
#define structura             struct
#define tscherna              switch
#define definiziun_tip        typedef
#define reuenion              union       // in Vallader you should use 'reünion', but you can't use 'ü' in the definition name
#define senza_sign            unsigned
#define nagin                 void
#define instabel              volatile
#define mentr                 while
#define registrar             register

#define Allinia_sco           _Alignas
#define dimensiun_align       _Alignof
#define atomic                _Atomic
#define bitarint              _BitInt
#define bolean                _Bool
#define complex               _Complex
#define decimal32             _Decimal32
#define decimal64             _Decimal64
#define decimal128            _Decimal128
#define generic               _Generic
#define imaginari             _Imaginary
#define sen_retornar          _Noreturn
#define assert_static         _Static_assert
#define fil_locala            _Thread_local

#define funcziun_principala   main

#include <stdio.h>
#include <stdlib.h>

#define stampetta             printf
#define leg_im                scanf
#define avra_file             fopen
#define serr_file             fclose

#define sortida_success       EXIT_SUCCESS
#define sortida_error         EXIT_FAILURE

#endif
