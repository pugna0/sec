#include <stdio.h>

int main(int argc, char *argv[])
{


    int c=1;
    int b=2;

    __asm{
        push c
        push b
        pop  c
        pop  b
      }




    return 0;
}
