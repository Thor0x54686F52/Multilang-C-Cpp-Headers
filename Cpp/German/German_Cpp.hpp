#ifndef GERMAN_CPP_H
#define GERMAN_CPP_H

/*
    I had to use the long form for the German 'Umlaute'
    because you can't define something with them, so
    here are the translations for the German 'Umlaute'
    ss => ß (No this isn't the ss from the Nazis, just the long written form from the 'ß')
    ae => ä
    oe => ö
    ue => ü

    Ae => Ä
    Oe => Ö
    Ue => Ü
*/

#define ausrichten_als alignas
#define groesse_Ausrichtung alignof
#define und and
#define und_gleich and_eq
#define Assemblierung asm
#define automatisch auto
#define binaerund bitand
#define binaeroder bitor
#define Binaerwert bool
#define Abbruch break
#define Fall case
#define Auffang catch
#define Zeichen char
#define Zeichen_8bit char8_t
#define Zeichen_16bit char16_t
#define Zeichen_32bit char32_t
#define Klasse class
#define bitweises_Einerkomplement compl
#define Konzept concept
#define Konstante const
#define waehrend_Kompelierung_Evaluierung consteval
#define konstante_Ausdrucksform constexpr
#define konstante_Initialisierung constinit
#define konstante_Umwandlung const_cast
#define Rest_ueberspringen continue
#define ko_warte co_await
#define ko_Rueckkehr co_return
#define ko_Ertrag co_yield
#define Typ_Bestimmung decltype
#define Normalfall default
#define loesche delete
#define mache do
#define genaue_Gleitkommazahl double
#define dynamische_Umwandlung dynamic_cast
#define sonst else
#define Aufzaehlung enum
#define explizit explicit
#define exportiere export
#define ausserhalb extern
#define falsch false
#define ungenaue_Gleitkommazahl float
#define waehrend for
#define Freund friend
#define gehe_zu goto
#define wenn if
#define eingebettet inline
#define grosser_Ganzzahlbereich int
#define lang long
#define aenderbar mutable
#define Namensraum namespace
#define neu new
#define keine_Ausnahme noexcept
#define nicht not
#define nicht_gleich not_eq
#define null_zeiger nullptr
#define Bediener operator
#define oder or
#define oder_gleich or_eq
#define privat private
#define geschuetzt protected
#define oeffentlich public
#define registriere register
#define neuinterpretierte_Umwandlung reinterpret_cast
#define notwendig requires
#define Rueckgabewert return
#define kleiner_Ganzzahlbereich short
#define mit_Vorzeichen signed
#define Groesse_von sizeof
#define statisch static
#define statische_Pruefung static_assert
#define statische_Umwandlung static_cast
#define Struktur struct
#define Verzweigung switch
#define Vorlage template
#define dieses_Objekt this
#define faden_lokal thread_local
#define werfe throw
#define richtig true
#define versuche try
#define definiere_eine_Datentyp typedef
#define Datentypidentifikation typeid
#define Datentypname typename
#define Vereinigung union
#define ohne_Vorzeichen unsigned
#define verwende using
#define virtuell virtual
#define Leere void
#define fluechtig volatile
#define breites_Zeichen wchar_t
#define solange while
#define entweder_oder xor
#define entweder_oder_gleich xor_eq

#define Hauptfunktion main

#include <iostream>

#define Zeichenkette std::string
#define Ausgabe std::cout
#define Neue_Zeile_HIER std::endl
#define Eingabe std::cin
#define Eingabe_ohne_Zeilenumbruch std::getline

#endif