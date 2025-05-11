#ifndef PUTER_C_H
#define PUTER_C_H

/*
  Header for translating C keywords and basic functions into Putèr.
  If no exact term exists in Putèr, a local or descriptive word is used.

  I had to use ASCII forms for the Puter special characters
  because you can't define something with them, so
  here are the translations for the Puter characters:
  i  => ì  (accent dropped)
  ue => ü

  Note: this is not intended as linguistic guidance—
  it’s just the ASCII mapping needed for C/C++ macros.
*/

#define scha                          if
#define altramaing                    else
#define per                           for
#define mentr                         while
#define romper                        break
#define cuntinueer                    continue      // you should use 'cuntinüer' in literature if you want to write in Puter
#define retornar                      return
#define structura                     struct
#define uniun                         union
#define enumeraziun                   enum
#define immutabel                     static
#define inalterabel                   const
#define segndag                       signed
#define senza_segn                    unsigned
#define vuot                          void
#define volat                         volatile
#define dimensiun_da                  sizeof
#define predefini                     default     // you should use 'predefinì' in literature if you want to write in Puter

#define sagl                          char
#define sagl_larg                     wchar_t
#define entir                         int
#define entir_curt                    short
#define lung                          long
#define numer_flotant                 float
#define numer_flotant_precis          double
#define boolean                       bool
#define senza_sign                    unsigned

#define alinier_a                     _Alignas
#define tgagni_aliniament             _Alignof
#define atomic                        _Atomic
#define senza_turnar                  _Noreturn

#define funcziun_principala           main

#include <stdio.h>
#include <stdlib.h>

#define printar                       printf
#define ler                           scanf
#define dubrir_file                   fopen
#define clauder_file                  fclose

#define SORTIDA_SUCCESS               EXIT_SUCCESS
#define SORTIDA_ERRORE                EXIT_FAILURE

#endif
