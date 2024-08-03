#pragma once

#include <stdint.h>

//Pokaż cyfrę na wyświetlaczu
//value - cyfra do wyświetlenia
void seg7_show_digit(uint32_t value);

//Pokaz liczbe na wyswietlaczu
//value - liczba do wyswietlenia
void seg7_show(uint32_t value);

//Funkcja pomocnicza
//Zmiana aktywnego wyswietlacza
void seg7_update(void);
