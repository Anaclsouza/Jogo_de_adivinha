#include<stdio.h> 
#include<math.h> 
#include<locale.h> 


int main(){ 

setlocale(LC_ALL,"portuguese"); 


int NUM,CHUTE=0,TENT=0;  
printf("\n Ol� jogador1, digite um n�mero e n�o deixe que nigu�m saiba haha \n"); 
scanf("%i",&NUM); 
printf("\n Ol� jogador2, digite um  n�mero que voc� suspeita que seja , boa sorte! \n");
scanf("%i",&CHUTE);
 
while(NUM!=CHUTE){ 

   if(NUM>CHUTE){ 
    printf("\n Ta frio em haha, chutou baixo \n"); 
    scanf("%i",&CHUTE); 
    TENT=TENT+1;} 
    
    else { 
    printf("\n haha est� no c�u? chutou alto."); 
    scanf("%i",&CHUTE); 
    TENT=TENT+1; }

} 

printf("\n Voc� acertou o n�mero ap�s :%i  tentativas\n", TENT); 

return 0; 

} 

 

  
