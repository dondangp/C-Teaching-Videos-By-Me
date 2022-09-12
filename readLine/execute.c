#include <stdio.h>

int main(){
char Line[100];
FILE *fp = fopen("readFile.txt","r");
while(fgets(Line,100,fp)!=NULL){
    printf("%s", Line);
}

return 0;
}
