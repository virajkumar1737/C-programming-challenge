#include <stdio.h>
int main(){
    FILE *fp;
    char ch;
    int chars=0,words=0,lines=0,inWord=0;
    fp=fopen("info.txt","r");
    if(fp==NULL){
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        chars++;
        if(ch=='\n') lines++;
        if(ch==' '||ch=='\n'||ch=='\t'){
            if(inWord==1) inWord=0;
        } else {
            if(inWord==0){
                inWord=1;
                words++;
            }
        }
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n",chars,words,lines+1);
    return 0;
}
