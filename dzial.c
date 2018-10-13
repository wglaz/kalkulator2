#include <stdio.h>




int main() {
    int x, y, zn, wynik; // trzeba wyzerować wyznaczniki bo inaczej podaje błedne dane


    zn = getchar();

    printf("Program wykonujący działania.");
    printf("wybierz co chesz zrobic:\n 1 - dodawanie\n 2 - odejmowanie\n 3 - mnożenie\n 4 - dzielenie\n" );
    scanf("%c", &zn);
    printf("Podaj x: "); scanf("%d", &x);
    printf("Podaj y: "); scanf("%d", &y);




    switch (zn){
        case '1' : wynik = x + y; break;
        case '2' : wynik = x - y; break;  // jesli damy break to nie bedzie dalej prszeszukiwac case tylko wyjdzie z programu
        case '3' : wynik = x * y; break;                 // jesli nie damy break to przejdzie do nastepnego case
        case '4' : wynik = x / y; break;

        default: printf("Podałęś błędne dane!!!");
    }



    printf("Wynik działania to: %d\n", wynik);
    return 0;


}





