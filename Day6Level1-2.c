#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void copyFile(FILE* source, FILE* destination, int option) {
    char c;
    while ((c = fgetc(source)) != EOF) {
        if (option == 1) {
            fputc(toupper(c), destination); 
        } else if (option == 2) {
            fputc(tolower(c), destination); 
        } else if (option == 3) {
            fputc(toupper(c), destination); 
        } else {
            fputc(c, destination);
        }
    }
}
int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }
    int option = 0;
    if (strcmp(argv[1], "-s") == 0) {
        option = 3; 
    } else if (strcmp(argv[1], "-l") == 0) {
        option = 2; 
    } else if (strcmp(argv[1], "-u") == 0) {
        option = 1; 
    }
    
    FILE* source = fopen(argv[2], "r");
    if (source == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }
    FILE* destination = fopen(argv[3], "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }
    copyFile(source, destination, option);
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");
    return 0;
}
