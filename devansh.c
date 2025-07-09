#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Devansh has entered your terminal!\n\n");

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            printf("Current mood: %s\n", argv[++i]);
        }
        else if (strcmp(argv[i], "-s") == 0 && i + 1 < argc) {
            printf("Craving snack: %s\n", argv[++i]);
        }
        else if (strcmp(argv[i], "-h") == 0 && i + 1 < argc) {
            printf("Hi %s. Are you enjoying this session?\n", argv[++i]);
        }
        else {
            printf("Unknown tag: %s\n", argv[i]);
        }
    }

    return 0;
}
