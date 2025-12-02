

#include <stdio.h>
int main(){
char filename[100], text[200];
printf("Enter filename: ");
scanf("%s",filename);
FILE *fp=fopen(filename,"a");
if(fp==NULL){
printf("Cannot open file!\n");
return 1;
}
printf("Enter text to append: ");
scanf(" %[^\n]",text);
fprintf(fp,"\n%s",text);
printf("Text appended successfully!\n");
fclose(fp);
return 0;
}