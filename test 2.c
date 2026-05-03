#include<stdio.h>
unsigned int count=0;
unsigned int puissance_rapide(unsigned int x, unsigned int n){
printf("Appel %u ^ %u \n",x,n);
if(n==0){
printf("return1\n");
count++;
return 1;
}else if (n%2 == 0){
count++;
int temp= puissance_rapide(x,n/2);
printf("%u ^ %u = (%u^%u)*(%u^%u)",x,n,x,n/2,x,n/2);
printf("Avec %u^%u=%u \n",x,n/2,temp);
return temp*temp;
}else if (n%2==1){
count++;
int temp=puissance_rapide(x,(n-1)/2);
printf("%u ^ %u x (%u^%u)*(%u^%u)",x,n,x,x,(n-1)/2,x,(n-1)/2);
printf("Avec %u^%u - %u \n",x,(n-1)/2,temp);
return x*temp*temp;
}else{
// code d'erreur
return -1;}
}
int main(){
unsigned int res;
res=puissance_rapide(2,2);
printf("Resultat = %u\n",res);
printf("Repetition = %u\n",count);
return 0;
}
