#include<stdio.h> 
#include<math.h> 
#include<locale.h> 


int main(){ 

setlocale(LC_ALL,"portuguese"); 


int NUM,CHUTE=0,TENT=0;  
printf("\n Olá jogador1, digite um número e não deixe que niguém saiba haha \n"); 
scanf("%i",&NUM); 
printf("\n Olá jogador2, digite um  número que você suspeita que seja , boa sorte! \n");
scanf("%i",&CHUTE);
 
while(NUM!=CHUTE){ 

   if(NUM>CHUTE){ 
    printf("\n Ta frio em haha, chutou baixo \n"); 
    scanf("%i",&CHUTE); 
    TENT=TENT+1;} 
    
    else { 
    printf("\n haha está no céu? chutou alto."); 
    scanf("%i",&CHUTE); 
    TENT=TENT+1; }

} 

printf("\n Você acertou o número após :%i  tentativas\n", TENT); 

return 0; 

} 

 

  
