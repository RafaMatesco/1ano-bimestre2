#include<stdio.h>
#include<math.h>

int a,b,c,d,f;
main(){
printf("H) \n");
printf("Me fale quatro numeros: \n");
printf("A= ");
scanf("%d",&a);
if((a % 2==0) && (a % 3==1)){
printf("numero divisivel por 2\n");
}else{
printf("numero divisivel por 3\n");
}
printf("B= ");
scanf("%d",&b);
if( (b % 2==0) && (b % 3==1)){
printf("numero divisivel por 2\n");
}else{
printf("numero divisivel por 3\n");
}
printf("C= ");
scanf("%d",&c);
if( (c % 2==0) && (a % 3==1)){
printf("numero divisivel por 2\n");
}else{
printf("numero divisivel por 3\n");
}
printf("F= ");
scanf("%d",&f);
if((f % 2==0) && (f % 3==1)){
printf("numero divisivel por 2");
}else{
printf("numero divisivel por 3");
}

}