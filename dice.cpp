#include "face.h"
#include <iostream>
int main()
{
    
    srand(time(0));
    std::cout<<std::endl;
    std::cout<<"                   *****    *   *****   *****   *****        \n";
    std::cout<<"                   *    *       *       *       *            \n";
    std::cout<<"                   *    *   *   *****   *       *****        \n";
    std::cout<<"                   *    *   *   *       *       *            \n";
    std::cout<<"                   *****    *   *****   *****   *****        \n";
    std::cout<<"rules of the game:\n";
    std::cout<<"for start the game press the key 's'(s for start) of the keyboard \n";
    do{
        std::cout<<"------------player 1: ------------\n";
        do{
            std::cin>>g1;
                if(g1=='s') cond1=true;
                else if(g1!='s') std::cout<<"------------wrong key,retry! ------------\n";
        }while(!cond1);

    num1=rand()%6+1;
    if(num1==1) std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n"; 
    if(num1==2) std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n"; 
    if(num1==3) std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n"; 
    if(num1==4) std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n"; 
    if(num1==5) std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n"; 
    if(num1==6) std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n"; 
    std::cout<<"------------player 2: ------------\n";
    do{
        std::cin>>g2;
        if(g2=='s') cond2=true;
        else if(g2!='s') std::cout<<"------------wrong key,retry! ------------\n";
    }while(!cond2);
    num2=rand()%6+1;    
    if(num2==1) std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n"; 
    if(num2==2) std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n"; 
    if(num2==3) std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n"; 
    if(num2==4) std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n"; 
    if(num2==5) std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n"; 
    if(num2==6) std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n";
    if(num1>num2) std::cout<<"------------THE WINNER IS PLAYER 1------------\n";
    else if(num1<num2) std::cout<<"------------THE WINNER IS PLAYER 2------------\n";
    else {
         std::cout<<"------------DRAW------------\n";
    }
    std::cout<<'\n';
    std::cout<<"want to retry? (yes/no)";
    std::cin>>r;
    if(r =="no") retry=true;
    }while(!retry);
    std::cout<<"GOODBYE";
}
