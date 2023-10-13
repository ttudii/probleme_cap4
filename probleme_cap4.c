#include <stdio.h>

int main(){

//problema 1

/*int val;
int poz=0,neg=0;
printf("Introduceti valori(programul se termina prin apasarea tastei 0):\n");
do{
    scanf("%d",&val);
    if(val<0)neg++;
    else poz++;
    fflush(stdin);
}while(val!=0);
poz=poz-1;
printf("Valori pozitive:%d\n",poz);
printf("Valori negative:%d",neg);

//problema 2

int nr;
for( ; ; ){
    scanf("%d",&nr);
    if(nr==30){
        returnToPreviousInput(nr, stdin);
        if(nr==20)
            returnToPreviousInput(nr, stdin);
        if(nr==10) break;
    }
}


//problema 3

int nr=0, val;
printf("Introduceti valori:\n\n");
do{
    scanf("%d",&val);
    if(val%3==2 && val%5==2 && val%7==2){
        //printf("%d\n",val);
        printf("Numarul respecta conditiile\n");
        nr++;
    }
    else printf("Numarul nu respecta conditiile\n");
}while(nr<10);*/

int k=1; int nr=1;
while(k<=10)
{
 if(nr%3==2 && nr%5==2 && nr%7==2)
 { printf("Numarul #%d este %d\n", k,nr);
 k++; }
 nr++; }

return 0;
}



