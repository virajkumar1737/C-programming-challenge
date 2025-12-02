#include <stdio.h>
#include <ctype.h>
int main(){
char filename[100];
printf("Enter filename: ");
scanf("%s",filename);
FILE *fp=fopen(filename,"r");
if(fp==NULL){
printf("Cannot open file!\n");
return 1;
}
int ch,vowels=0,conso=0;
while((ch=fgetc(fp))!=EOF){
ch=tolower(ch);
if(ch>='a' && ch<='z'){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
else conso++;
}
}
printf("Vowels: %d\n",vowels);
printf("Consonants: %d\n",conso);
fclose(fp);
return 0;
}
