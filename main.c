#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int main(int argc, char *argv[]) {
    short cSource = 0;
    short cHead = 0;
    short Obj = 0;
    short Make = 0;
    short Other = -1;
    char* point;

        for (int i = 0; i < argc; i++) {
            point = strrchr(argv[i], '.');


            if(strcmp(point + 1, "c") == 0) {
                cSource+=1;
            }

            if (strcmp(point + 1, "h") == 0) {
                cHead++;
            }

            if(strcmp(point + 1, "o") == 0) {
                Obj++;
            }

            if(strcmp(argv[i], "Makefile") == 0) {
                Make++;
            }

            if(strcmp(argv[i], "makefile") == 0) {
                Make++;
            }
            else {
                Other++;
        }
            //printf(strrchr('.', ));
    }

    printf("C Source files: %i \n", cSource);
    printf("C Header files: %i \n", cHead);
    printf("Objects: %i \n", Obj);
    printf("Makefile: %i \n", Make);
    printf("Other files: %i \n", Other);
}