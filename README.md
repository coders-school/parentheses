# Parentheses

Write a program to determine if the the parentheses (),
the brackets [], and the braces {}, in a string are balanced.

For example:

{{)(}} is not balanced because ) comes before (

({)} is not balanced because ) is not balanced between {}
     and similarly the { is not balanced between ()

[({})] is balanced
{}([]) is balanced
{()}[[{}]] is balanced

1 commit = 1 nowy test (i tylko jeden). Mogą być też oddzielne commity na refactor. Każdy commit powinien się kompilować i przecchodzić testy (zawsze zielono na CI). Refaktoruj na bieżaco. Użyj STLa. Użyj Catcha lub GTesta do pracy w trybie TDD.
Gdy skończysz całość, napisz te same testy w drugim frameworku (Catch lub GTest) i również je wkomituj.

Struktura projektu:

```
Parentheses
  |- src (pliki cpp)
  |- inc (pliki hpp)
  |- test_catch (pliki cpp z testami w Catch)
  |- test_gtest (pliki cpp z testami z GTest)
  |- CMakeLists.txt
```
