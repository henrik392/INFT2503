# Teori oppgaver

## Oppgave 2
Koden:
```cpp
char *line = nullptr;   // eller char *line = 0;
strcpy(line, "Dette er en tekst");
```

Om man kjører koden får man segmentation fault. Det er fordi strcpy skriver til en del av minne som ikke er tilegnet `char *line`.

## Oppgave 3
Kode:
```cpp
char text[5];
char *pointer = text;
char search_for = 'e';
cin >> text;
while (*pointer != search_for) {
  *pointer = search_for;
  pointer++;
}
```

Følgende program endrer alle tegn i `text` til `e` frem til den finner en `e`. Her er det flere ting som kan gå galt.
For det første blir det overflow om brukeren skriver inn tekst med mer enn 4 tegn (`char text[5]` kan holde 4 tegn + null terminator \0).
For det andre vil while løkken fortsette å kjøre selv etter maks-størrelsen til text, og dermed få overflow der og.

En fiks for dette er å bruke cin.get(text, 5) i stedet for cin >> text og å sjekke om while løkken er utenfor området til text.
