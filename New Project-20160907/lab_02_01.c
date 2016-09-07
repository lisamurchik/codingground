#include <stdio.h>
void main () {
    int a=3,
        b=7,
        c=21;
    if (a==3) {
        printf ("Значение переменной а равно трем \n");
        
    }
    if (b>0 && (c%a==0)) {
        printf ("Значение переменной b положительное. Значение переменной с кратно %d. \n",a );
    }
    else {
    printf ("Значение переменной b меньше или равно нулю либо значение переменной с не кратно %d. \n", a);
}
    if (b%10==0) {
        printf("Число %d кратно 10. \n", b);
    }
    else if (b%2==0) {
        printf ("Число %d кратно двум. \n",b);
            }
            else {
                printf("Число %d не кратно двум и не кратно 10. \n", b);
            }
    int place = 1;
    switch (place) {
        case 1:
            printf ("Первое место! \n");
            break;
        case 2:
            printf ("Второе место! \n");
            break;
        case 3 :
            printf ("Третье место! \n");
            break;
        default:
        printf ("Вы не заняли призового места. \n");
    }
}