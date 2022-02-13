#include<iostream>
#include "linklist.h"
#include "node.h"
#include <cstdlib>         // general purpose library.
#include <ctime>           // for time

int main()
{
    LinkList ll;                 // yahan hum link list ka object create kar rae hain.
    char playerTurn = ' ';
    int enterValue= { };
    char temp = ' ';
    std::string player1;
    std::string player2;
    int choice = 0;

    ll.insertData(1);
    ll.insertData(2);
    ll.insertData(3);           // ye hum values insert kar rae hain.
    ll.insertData(4);
    ll.insertData(5);
    ll.insertData(6);
    ll.insertData(7);
    ll.insertData(8);
    ll.insertData(9);
    
    do              // sab se phele hum do while ka loop create karen ge jis mein sab se phele program ik dafa run hoga then condition check hogi.
	{
        system("cls");
        std::cout<<"\t\t\t----------------------------------------"<<std::endl;
        std::cout<<"\t\t\t|          TIC TAC TOE GAME            |"<<std::endl;
        std::cout<<"\t\t\t----------------------------------------"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"\t\t\t  Enter First Player  [X] Name: ";         // yahan player 1 ka name enter hoga.
        std::cin>>player1;
        std::cout<<"\n\t\t\t  Enter Second Player  [O] Name: ";         // yahan player 2 ka name enter hoga.
        std::cin>>player2;
        std::cout<<"\n\t\t\t----------------------------------------";

		do           // second do while ke loop mein hum check karen ge kn sa player phele start kare ga aur ye ik dafa run hoga then condition check hogi.
		{
            std::cout << "\n\n\t\t\tSystem select randomly who start the match...\n ";
            srand(time(nullptr));       // used to set the starting value (seed) for generating a sequence of pseudo-random integer values. 
            int dice = rand();    // yahan dice random numbers generate kare ga.
            
            if(dice <= 3)    // age dice less than 3 ya equal to 3 hota hai tu player 1 ki bari hogi.
			{
                std::cout << "\n\t\t\t\tPlayer 1 starts the match!\n";
                playerTurn = 'X';      // aur jese hi player 1 ki bari hogi turn ke variable ke andr 'X' chala jae ga.
            }
            else
            {
                std::cout<<"\n\t\t\t\tPlayer 2 starts the match!\n\n";     // aur agr dice ke andr greater than 3 ata hai tu tu wo else ke andr jae ga aur player 2 start kare ga.
                playerTurn = 'O';      // aur jese hi player 2 start kare ga tu turn ke variable ke andr 'O' chala jae ga.
            }
            
            system("pause");
            system("cls");

            bool flag = false;   // yahan hum sab se phele flag ke variable ko false ke equal karen ge.
            while(true)       // aur while(true) is an infinite loop that means creating for purpose to run for infinit times. 
			{
                if(flag == true)    // aur while ke loop ke andr ane ke baad wo if ke check ke andr jae ga agr if ki condition flag equal hota hai true ke tu wo if ke check ke andr age ga.
				{
                    break;          // aur if ke check ke andr ane ke baad condition break hojae gi.
                }
                
                ll.printBoard();       // aur phir linked list ke andr print ka function call hoga jo board print kare ga.
                std::cout<<std::endl<<std::endl;

                if(playerTurn == 'X')        // is if ke check ki condition check hogi agr jese is se phele bari 'X' ki thi aur turn ke variable ke andr 'X' hota tu ye equal hoga tu if ke check ke andr chala jae ga.
				{
                    std::cout<<"\n\t\t\t\t   "<<player1<<"'s [X] turn: ";
                    temp = 'O';             // aur jese hi if ki condition true hogi tu temp ke andr 'O' chala jae ga.
                }
                else     // is else ki condition check hogi agr jese is se phele bari 'O' ki thi aur turn ke variable ke andr 'O' hota tu ye equal hoga tu else ke check ke andr chala jae ga.
				{
                    std::cout<<"\n\t\t\t\t   "<<player2<<"'s [O] turn: ";
                    temp = 'X';             // aur jese hi else ki condition true hogi tu temp ke andr 'X' chala jae ga.
                }
                std::cin>>enterValue;
        
                while(enterValue < 1 || enterValue > 10 )   //checking players choice is in the range of '1' to '10' 
				{    
                    std::cout<<"invalid Choice.....Please Enter Again"<<std::endl;
                    std::cin>>enterValue;
                }
                
                ll.updateData(enterValue , playerTurn);      // update data ke function ke andr user value pass kare ga jo 1 se 10 ke darmiyan hogi aur turn ke andr jis player ki bari hogi us ka symbol  hoga.
                playerTurn = temp;        // then hum turn ko temp ke equal karden ge jese is se pheli bari 'X' ki thi tu temp ke andr 'O' pass hoga aur turn ke andr ab 'O' save hoga.
                
                ll.printBoard();        // aur phir linked list ke andr print ka function call hoga jo dubara board print kare ga lekin jab dubara board print hoga us mein first jo 'X' ya 'O' print hoga wo same rae ga.  
                flag = ll.checkWinner(player1 , player2);     // aur phir linked list ke andr check ka function call hoga tu check kare kn sa player jeeta hai ya draw hua hai ya agr koi nai jeeta tu dubara turn ho gi players ki   
            }
            
            std::cout<<std::endl<<std::endl; 
            std::cout<<"\t\t\t\t\tFor Exit Press '0'" <<std::endl;
            std::cout<<"\t\t\t\t\tFor Rematch Press '1'"<<std::endl;
            std::cout<<"\t\t\t\t\tFor Newgame Press '2'"<<std::endl;
            std::cout<<"\n\t\t\t\t\tENTER CHOICE : ";
            std::cin>>choice;
            system("cls");
            
            ll.rematchAndNewgame();
            
        }while(choice == 1);   // rematch ke liye press 1
		
    }while(choice == 2);   // new game ke liye press 2 

    std::cout<<std::endl<<std::endl;
    std::cout<<"\n\t\t\t\t\tEND GAME"<<std::endl;
    std::cout<<"\n\t\t\t\t   Thanks For Playing"<<std::endl;

	return 0;
}