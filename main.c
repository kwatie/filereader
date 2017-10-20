/**
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int main(int argc, char *argv[]) {
    short cSource = 0;
    short cHead = 0;
    short Obj = 0;
    short Make = 0;
    short Other = 0;
    char *point;
//    char *cFile = strrchr(argv, '.');
//    char *hFile = 'h';
//    char *oFile = 'o';


//Loop to iterate through arguments
    for (int i = 0; i < argc; i++) {

        //Points the pointer to the last occurrence of a '.' in the argument
        point = strrchr(argv[i], (const char) '.');

        //Quick error check
        if(point == !NULL) {
            printf("Pointer has been set\n");
        }

        //If the pointer fails to find a '.' in the argument, check for makefile
        if(point == NULL) {

            //Error check
            printf("Pointer is not set\n");

            //makefile checks
            if(strcmp(argv[i], "Makefile") == 0) {
                Make++;
            } //Fuck you for segfaulting like a lil bitch

            else if(strcmp(argv[i], "makefile") == 0) {
                Make++;
            }

                //If it is not a makefile, it is another
            else {
                Other++;
            }
        }


            //if arg has a '.', checks the char right after

//            if(strcmp(argv[i]+strlen(argv[i] - 1), cFile) == 0) {
             if(point+1 == 'c') {
                cSource+=1;
            }

//            if (strcmp(argv[i]+strlen(argv[i] - 1), hFile) == 0) {
            if(point+1 == 'h') {
                cHead++;
            }

//            if(strcmp(argv[i]+strlen(argv[i] - 1), oFile) == 0) {
            if(point + 1 == 'o') {
                Obj++;
            }

        //redundant code
/*            if(strcmp(argv[i], "Makefile") == 0) {
                Make++;
            }

            else if(strcmp(argv[i], "makefile") == 0) {
                Make++;
            }

            else {
                Other++;
            }*/

        }
            //printf(strrchr('.', ));

    //Counters
    printf("C Source files: %i \n", cSource);
    printf("C Header files: %i \n", cHead);
    printf("Objects: %i \n", Obj);
    printf("Makefile: %i \n", Make);
    printf("Other files: %i \n", Other);
}