//Braedan Robinson 10188414
//Luisa Stocco

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>

int main(int argc, char *argv[]) {

//int c;
//FILE *fp = fopen(argv[1], "w+");
//if (fp) {
  //  while ((c = getc(fp)) != EOF)
    //    putchar(c);
    //fclose(fp);

FILE *fp = fopen(argv[1],"r+");
if (fp == NULL) {
  void perror();
  exit(-1);
}
  char buff[255];
  while (1) {
    fscanf(fp, "%s", buff);
    if ( feof(fp) ) {
        break;}
    fprintf(fp,"%s", buff);
    }
//  int c;
 // while (( c = fgetc(fp)) != EOF) {
 // if (isalpha(c)){
 //    c = toupper(c);
  //   fprintf(fp," %c", c);
  //  }
 // else if (isspace(c)) {
 //    fprintf(fp," ");
  //  }
  // else {
   ////  fprintf(fp,"%c",c);
   // }
fclose (fp);
return 0;
}
