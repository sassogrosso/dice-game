#include "face.h"
#include <iostream>
int main()
{
    
    srand(time(0));
    std::cout<<std::endl;
    std::cout<<"                   LANCIO DEL DADO                           \n";
    std::cout<<"regole del gioco:\n";
    std::cout<<"per incominciare premere il tasto a della tastiera\n";
    std::cout<<"se si premera' un tasto di diverso dara' un messaggio di errore\n";
    std::cout<<"------------giocatore 1 prema il tasto per iniziare: ------------\n";
    do{
        std::cin>>tasto1;
        if(tasto1=='a') cond1=true;
        else std::cout<<"------------tasto sbagliato,riprovare: ------------\n";
    }while(cond1==false);
    num1=rand()%6;
    if(num1==1) std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n"; 
    if(num1==2) std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n"; 
    if(num1==3) std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n"; 
    if(num1==4) std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n"; 
    if(num1==5) std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n"; 
    if(num1==6) std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n"; 
    std::cout<<"------------giocatore 2 prema il tasto per iniziare: ------------\n";
    do{
        std::cin>>tasto2;
        if(tasto2=='a') cond2=true;
        else std::cout<<"------------tasto sbagliato,riprovare: ------------\n";
    }while(cond2==false);
    num2=rand()%6;    
    if(num2==1) std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n"; 
    if(num2==2) std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n"; 
    if(num2==3) std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n"; 
    if(num2==4) std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n"; 
    if(num2==5) std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n"; 
    if(num2==6) std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n";
    if(num1>num2) std::cout<<"------------il vincitore e' il giocatore 1------------\n";
    else if(num1<num2) std::cout<<"------------il vincitore e' il giocatore 2------------\n";
    else {
         std::cout<<"------------pareggio------------\n";
    }

}
