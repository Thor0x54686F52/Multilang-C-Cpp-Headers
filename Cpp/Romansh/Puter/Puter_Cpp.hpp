#ifndef PUTER_CPP_H
#define PUTER_CPP_H

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

#define scha                        if
#define altramaing                  else
#define per                         for
#define mentr                       while
#define romper                      break
#define cuntinueer                  continue      // you should use 'cuntinüer' in literature if you want to write in Puter
#define retornar                    return
#define structura                   struct
#define uniun                       union
#define enumeraziun                 enum
#define immutabel                   static
#define inalterabel                 const
#define segndag                     signed
#define senza_segn                  unsigned
#define vuot                        void
#define volat                       volatile
#define dimensiun_da                sizeof
#define predefini                   default      // you should use 'predefinì' in literature if you want to write in Puter
#define sagl                        char
#define sagl_larg                   wchar_t
#define entir                       int
#define entir_curt                  short
#define lung                        long
#define numer_flotant               float
#define numer_flotant_precis        double
#define boolean                     bool
#define senza_sign                  unsigned  
#define classa                      class
#define spazi_nom                   namespace
#define model                       template
#define operatur                    operator
#define surscrivibla                virtual
#define modifitgabel                mutable
#define explicit                    explicit
#define tipnom                      typename
#define identitad_da_tip            typeid
#define conversiun_dinamica         dynamic_cast
#define conversiun_immutabel        static_cast
#define conversiun_reinterpretar    reinterpret_cast
#define conversiun_constant         const_cast
#define nova                        new
#define stizzar                     delete

#define provar                      try 
#define piglier                     catch
#define manar                       throw
#define concept                     concept
#define requires                    basegia
#define co_await                    co_spettar
#define co_return                   co_retorna
#define co_yield                    co_produir

#define alignaziun                  alignas                 // Statt tenor_alignaziun/alinier_a
#define dimensiun_alignaziun        alignof                    
#define bit_e                       bitand                     
#define bit_u                       bitor                      
#define u_exclusiv                  xor                        
#define na                          not                        
#define e                           and                        
#define u                           or                         
#define local_thread                thread_local               
#define assert_static               static_assert              

#define funcziun_principala         main

#include <iostream>

#define stringa                     std::string
#define printar                     std::cout
#define fin_lingia                  std::endl
#define ler                         std::cin
#define leger_lingia                std::getline

#endif
