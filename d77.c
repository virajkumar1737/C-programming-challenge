#include <stdio.h>
#include <ctype.h>
int main(){
FILE *fp1=fopen("input.txt","r");
if(fp1==NULL){
printf("Cannot open input.txt!\n");
return 1;
}
FILE *fp2=fopen("output.txt","w");
if(fp2==NULL){
printf("Cannot open output.txt!\n");
fclose(fp1);
return 1;
}
int ch;
while((ch=fgetc(fp1))!=EOF){
if(ch>='a' && ch<='z') ch = ch - 32;
fputc(ch,fp2);
}
printf("Converted to uppercase and written to output.txt\n");
fclose(fp1);
fclose(fp2);
return 0;
}
