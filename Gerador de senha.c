#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int Letrama(){

    int nu;
    srand( (unsigned)time(NULL) );  
            
        do{
             nu=rand()%1000;

        }while(nu<=65 || nu>=98);
    return nu;
}
int Letrasme(){

    int nu;
	srand( (unsigned)time(NULL) );  
            
        do{
             nu=rand()%1000;

        }while(nu<=97 || nu>=122);
    return nu;
}
int Alphanum(){

    int nu;
	srand( (unsigned)time(NULL) );  
            
        do{
             nu=rand()%1000;

        }while(nu<=33 || nu>=47);
    return nu;
}
int main(){

    int q,s[15],i;
    
    
    printf("What is your password size?(6,9,12): ");
    scanf("%d",&q);
 
   switch(q){

        case (6):
            printf("Your password: ");

                for(i=0;i<2;i++){
                    s[i]=Letrama();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<2;i++){
                    s[i]=Letrasme();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<2;i++){
                    s[i]=Alphanum();
                    printf("%c",s[i]-i);
                }
        break;
        case(9):
            printf("Sua senha: ");
                for(i=0;i<3;i++){
                    s[i]=Letrama();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<3;i++){
                    s[i]=Letrasme();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<3;i++){
                    s[i]=Alphanum();
                    printf("%c",s[i]-i);
                }
        break;
        case(12):
            printf("Sua senha: ");
                for(i=0;i<4;i++){
                    s[i]=Letrama();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<4;i++){
                    s[i]=Letrasme();
                    printf("%c",s[i]-i);
                }
                for(i=0;i<4;i++){
                    s[i]=Alphanum();
                    printf("%c",s[i]-i);
                }
        break;        
        default:
        printf("Digite um valor valido.");    
    }
    printf("\n");
    system("pause");
    return 0;
}