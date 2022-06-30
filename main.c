#include <stdio.h>
#include <stdint.h>
#include "foo.h"
#include "bar.h"

int main(int argc, char *argv[])
{
    printf("Running main\n");
    foo();
    bar();

    return 0;
}
