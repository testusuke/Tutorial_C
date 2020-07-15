#include <stdio.h>

//  File
FILE *file;
//  Functions of File
int openFile(void);
int closeFile(void);
int writeStringFile(char c[]);
int nextLineFile(void);

//  Functions for develop.
int fileTest(void);

int main() {
    printf("Hello, World!\n");
    //  file test
    fileTest();

    //  finish
    printf("finish program.\n");
    return 0;
}

int openFile(void){
    file = fopen("text.txt","w+");
    return 0;
}
int closeFile(void){
    fclose(file);
    return 0;
}
int writeStringFile(char c[]){
    fprintf(file,"%s",c);
    return 0;
}
int nextLineFile(void){
    fprintf(file,"\n");
    return 0;
}

int fileTest(void){
    //  create file
    openFile();
    //  writing
    writeStringFile("Hello,World");
    nextLineFile();
    writeStringFile("test write file.");
    nextLineFile();
    //  input char and fprintf
    printf("enter string =");
    char input[64];
    scanf("%s\n",&input);
    printf("write string: %s\n",input);
    writeStringFile(input);

    closeFile();
    printf("finish writing test.\n");
    return 0;
}