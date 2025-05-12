#ifndef GERMAN_C_H
#define GERMAN_C_H

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

#define automatisch							auto
#define Abbruch								break
#define Fall								case
#define Zeichen								char
#define Konstante							const
#define Rest_ueberspringen					continue 
#define Normalfall							default
#define mache								do
#define genaue_Gleitkommazahl				double
#define sonst								else
#define Aufzaehlung							enum     
#define ausserhalb							extern
#define ungenaue_Gleitkommazahl				float
#define waehrend							for
#define gehe_zu								goto
#define wenn								if       
#define grosser_Ganzzahlbereich				int
#define lang								long
#define registriere							registe
#define Rueckgabewert						return
#define kleiner_Ganzzahlbereich				short    
#define mit_Vorzeichen						signed
#define Groesse_von							sizeof
#define statisch							statics
#define Struktur							struct
#define Verzweigung							switch
#define Typendefinition						typedef
#define Vereinigung							union
#define ohne_Vorzeichen						unsigned
#define Leere								void
#define fluechtig							volatile
#define solange								while

#define ausrichten_als						_Alignas
#define groesse_Ausrichtung					_Alignof
#define Atomisch							_Atomic
#define bit_Ganzzahl						_BitInt
#define Binaerwert							_Bool
#define Komplex								_Complex
#define Dezimal32							_Decimal32
#define Dezimal64							_Decimal64
#define Dezimal128							_Decimal128
#define generisch							_Generic
#define imaginaer							_Imaginary
#define keine_Rueckkehr						_Noreturn
#define statische_Pruefung					_Static_assert
#define faden_lokal							_Thread_local

#define Hauptfunktion						main

#include <stdio.h>
#include <stdlib.h>

#define Ausgabe								printf
#define unsicher_Eingabe					scanf
#define Datei_oeffnen						fopen
#define Datei_schliessen					fclose

#define ERFOLGREICH_BEENDET					EXIT_SUCCESS
#define FEHLERHAFT_BEENDET					EXIT_FAILURE

#endif
