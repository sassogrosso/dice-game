#include "face.h"
#include <iostream>
int main()
{
    srand(time(0));
    std::cout<<std::endl<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<std::endl;
    std::cout<<"                   *****    *     *****   *****        \n";
    std::cout<<"                   *    *         *       *            \n";
    std::cout<<"                   *    *   *     *       *****        \n";
    std::cout<<"                   *    *   *     *       *            \n";
    std::cout<<"                   *****    *     *****   *****        \n";
    std::cout<<"rules of the game:\n";
    std::cout<<"to start the game press the key 's'(s for start) of the keyboard \n";
    
    do{

        bool cond1=false;
        bool cond2=false;
        std::cout<<"------------player 1: ------------\n";

        do{
            std::cin>>g1;
                if(g1=='s') cond1=true;
                else std::cout<<"------------wrong key,retry! ------------\n";
        }while(!cond1);

        num1=rand()%6+1;
        switch (num1) {
            case 1:
                std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n";
                break; 
            case 2:
                std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n";
                break; 
            case 3:
                std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n";
                break;
            case 4:
                std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n";
                break; 
            case 5:
                std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n";
                break; 
            case 6:
                std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n";
                break;
        }
        
        std::cout<<"------------player 2: ------------\n";
        do{
            std::cin>>g2;
            if(g2=='s') cond2=true;
            else std::cout<<"------------wrong key,retry! ------------\n";
        }while(!cond2);
        
        num2=rand()%6+1;    

        switch (num2) {
            case 1:
                std::cout<<"-----\n|   |\n| * |\n|   |\n-----\n";
                break; 
            case 2:
                std::cout<<"-----\n|*  |\n|   |\n|  *|\n-----\n";
                break; 
            case 3:
                std::cout<<"-----\n| * |\n| * |\n| * |\n-----\n";
                break;
            case 4:
                std::cout<<"-----\n|* *|\n|   |\n|* *|\n-----\n";
                break; 
            case 5:
                std::cout<<"-----\n|* *|\n| * |\n|* *|\n-----\n";
                break; 
            case 6:
                std::cout<<"-----\n|* *|\n|* *|\n|* *|\n-----\n";
                break;
        }
        if(num1>num2) std::cout<<"------------THE WINNER IS PLAYER 1------------\n";
        else if(num1<num2) std::cout<<"------------THE WINNER IS PLAYER 2------------\n";
        else std::cout<<"------------DRAW------------\n";
    
        std::cout<<'\n';
        std::cout<<"want to retry? (yes/no)";
        std::cin>>r;
        if(r =='n') retry=true;

    }while(!retry);
    std::cout<<"GOODBYE";
}
