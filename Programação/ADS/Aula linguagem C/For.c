#include <stdio.h>
#include <ctype.h>

main (){
    int x,y;

    for (x = 10, y = 0; x >= 0, y <= 10; y++, x--) /*For(para) cria repetição; a primeira parte é o inicio, a segunda é o final,
    a terceira é o incremento. */
    {
        printf("x=%2d, y=%2d\n",x,y);
    }
    return 0;
    
}