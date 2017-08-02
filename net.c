#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Astral Net\n");
    if(argc == 2) {
        char *seed[255];
        strcpy(seed,argv[1]);
        printf("Creating Link to %s\n",seed);
        return 0;
    }
}