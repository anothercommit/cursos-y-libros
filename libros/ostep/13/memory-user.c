#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *entptr;
    int n = strtol(argv[1], &entptr, 10);

    if (entptr==argv[1]) return 1;

    char *a = malloc(n);
    printf("%d", n);

    while(1){
        for (int i=0; i<n; i++){
            a[i] += i;
        }
    }

    return 0;
}
