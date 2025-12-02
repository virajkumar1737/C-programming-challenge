#include <stdio.h>
int main(){
    FILE *fp;
    char name[100];
    int age;
    fp=fopen("info.txt","w");
    if(fp==NULL){
        printf("File cannot be opened");
        return 0;
    }
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter your age: ");
    scanf("%d",&age);
    fprintf(fp,"Name: %sAge: %d\n",name,age);
    fclose(fp);
    printf("Data successfully saved to info.txt");
    return 0;
}
