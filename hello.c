#include <stdio.h>

/* c_lang basic syntax */

int main(void){
    printf("Hello world\n");  /*  => string */

    int  x = 10;           /* => variable */
    float y =3.14;
    char c ='A';
    printf("x= %d, y= %f, c= %c\n", x,y,c);
    
    int a;
    a = 10 % 3;    /* => operator */
    a += 4;        /*  assignment operator => a = a + 4 */
    a ++;          /*  unary operator => a= a + 1 */
    printf("%d\n",a);
    
    return 0;
}

