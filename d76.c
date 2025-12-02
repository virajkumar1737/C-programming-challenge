#include <stdio.h>
int main(){
char filename[100];
printf("Enter filename: ");
scanf("%s",filename);
FILE *fp=fopen(filename,"r");
if(fp==NULL){
printf("File does not exist or cannot be opened!\n");
return 1;
}
char ch;
printf("File content:\n");
while((ch=fgetc(fp))!=EOF){
printf("%c",ch);
}
fclose(fp);
return 0;
}
