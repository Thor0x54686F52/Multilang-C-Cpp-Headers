#ifndef VALLADER_CPP_H
#define VALLADER_CPP_H

/*
  Translations of the reserved words of C++ into Vallader.
  If no terms exist in Vallader, a local descriptive term is used instead.
  
  I had to use ASCII forms for the Puter special characters
  because you can't define something with them, so
  here are the translations for the Puter characters:
  a  => à  (accent dropped)
  i  => ì  (accent dropped)
  ue => ü
  oe => ö

  Note: this is not intended as linguistic guidance—
  it’s just the ASCII mapping needed for C/C++ macros.
 */

#define als_characteristicas              alignas
#define dimensiun_align                   alignof
#define e                                 and
#define e_egual                           and_eq
#define assemblar                         asm
#define automatic                         auto
#define bit_e                             bitand
#define bit_u                             bitor
#define bolean                            bool
#define interromper                       break
#define cas                               case
#define cujar                             catch
#define caracter                          char
#define caracter8bit                      char8_t
#define caracter16bit                     char16_t
#define caracter32bit                     char32_t
#define classa                            class
#define complement_bit                    compl
#define concept                           concept
#define constanta                         const
#define evaluaziun_duront_compile         consteval
#define constantaexpr                     constexpr
#define init_constanta                    constinit
#define midar_constanta                   const_cast
#define cuntinuar                         continue
#define co_sperar                         co_await
#define co_retornar                       co_return
#define co_produir                        co_yield
#define tip_determinaziun                 decltype
#define predeterminad                     default
#define scancellar                        delete
#define fai                               do
#define flotant_precis                    double
#define midar_dynamic                     dynamic_cast
#define altriment                         else
#define enumeraziun                       enum
#define cler                              explicit
#define exportar                          export
#define dafor                             extern
#define fals                              false
#define flotant                           float
#define per                               for
#define amic                              friend
#define ir_a                              goto
#define sche                              if
#define inlina                            inline
#define numer_entir                       int
#define lung                              long
#define mutabel                           mutable
#define spazi_nom                         namespace
#define nov                               new
#define senza_excepziuns                  noexcept
#define na                                not
#define na_egual                          not_eq
#define puntar_null                       nullptr
#define manipulader                       operator
#define u                                 or
#define u_egual                           or_eq
#define priva                             private              // in Vallader you should use 'privà', but you can't use 'à' in the definition name
#define protegi                           protected            // in Vallader you should use 'protegì', but you can't use 'ì' in the definition name
#define visibel_per_tuts                  public
#define registrar                         register
#define midar_vegl                        reinterpret_cast
#define basegia                           requires            // in Vallader you should use 'basegià', but you can't use 'à' in the definition name
#define retornar                          return
#define numer_entir_curt                  short
#define signa                             signed              // in Vallader you should use 'signà', but you can't use 'à' in the definition name
#define dimensiun_da                      sizeof
#define ferma                             static              // in Vallader you should use 'fermà', but you can't use 'à' in the definition name
#define assert_ferma                      static_assert       // in Vallader you should use 'assert fermà', but you can't use 'à' in the definition name
#define midar_ferma                       static_cast         // in Vallader you should use 'midar fermà', but you can't use 'à' in the definition name
#define structura                         struct
#define tscherna                          switch
#define mudel                             template
#define codezz                            this
#define fil_locala                        thread_local
#define manar                             throw
#define ver                               true
#define proevar                           try                 // in Vallader you should use 'prövar', but you can't use 'ö' in the definition name
#define definiziun_tip                    typedef
#define identificaziun_tip                typeid
#define nom_tip                           typename
#define reuenion                          union               // in Vallader you should use 'reünion', but you can't use 'ü' in the definition name
#define senza_sign                        unsigned
#define usar                              using
#define virtual                           virtual
#define nagin                             void
#define instabel                          volatile
#define caracter_larg                     wchar_t
#define mentr                             while
#define u_exclusiv                        xor
#define u_exclusiv_egual                  xor_eq

#define funcziun_principala               main

#include <iostream>

#define lingia_da_caracters               std::string
#define stampetta                         std::cout
#define fin_da_lingia                     std::endl
#define leg_im                            std::cin
#define leger_lingia                      std::getline

#endif