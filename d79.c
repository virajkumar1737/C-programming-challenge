#include <stdio.h>
int main(){
FILE *fp=fopen("numbers.txt","r");
if(fp==NULL){
printf("Cannot open numbers.txt!\n");
return 1;
}
int num,count=0;
long sum=0;
while(fscanf(fp,"%d",&num)==1){
sum+=num;
count++;
}
if(count==0){
printf("No numbers found!\n");
fclose(fp);
return 0;
}
double avg=(double)sum/count;
printf("Sum: %ld\n",sum);
printf("Average: %.2f\n",avg);
fclose(fp);
return 0;
}
