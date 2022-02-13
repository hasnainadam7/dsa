#include <iostream>
#include "linklist.h"

LinkList::LinkList()    // linked list ke constructor ke andr. 
{
	this->head = NULL;       // head ko bhi hum null ke equal karden ge.
	this->current = NULL;     // aur current ko bhi null ke equal karden ge.
}

void LinkList::insertData(int data)          //inserting node at end 
{
	Node* temp= new Node(data);         
	if (head == NULL)              //agr linked list ke andr koi bhi node nai hai tu ye first node create hogi.
	{
		head =temp;             // aur is mein jo new node hogi for example first node wo head hojae gi.
	}
	else 			             	// or agr phele se first node hai tu wo direct else mein jae ga.
	{      
		Node* current = head;             // sub se phele hum head ko current karden ge.
		while (current->next != NULL)     // then while ka loop us waqt tak chale ga jab tak current->next ko null na mil jae.
		{
			current = current->next;      // aur loop ke andr jab tak current ko null nai mile ga tab tak wo loop ke andr current ko cureent->next karta rae ga,
		}
		current->next = temp;          // aur jese hi current->next ko null mil jae ga wo loop ke bahir ajae ga then null ko wo temp ke equal karde ga.
	}       
}

void LinkList::updateData(int enterValue , char playerTurn)    // is function mein board ka data update hoga jese value ke andr user input kare ga 1,2 etc and turn ke andr X hoga ya Y.
{
    Node* current = head;             // sab se phele hum current ko head ke equal karden ge .

    while(current->data != enterValue)      // then while ke loop ke andr current->data jab tak entered value ke equal nai hoga jab tak chalta rae ga.
	{
        current = current->next;      // is loop ke andr jab tak current data entered value ke equal nai hoga tab tak current, current.next pe jae ga.
    }
    current->data = playerTurn;       // aur jese hi current data enterd value ke equal hojae ga tu wo loop ke bahir ajae ga then current value or data ke andr X ya O aega.
}

void LinkList::printBoard()          // is print ke function ke andr hum board print kar rae hain.
{
    system("cls");
	std::cout << "\t\t\t\t----------------------------------------" << std::endl;
    std::cout << "\t\t\t\t|          TIC TAC TOE GAME            |" << std::endl;       // title of game.
    std::cout << "\t\t\t\t----------------------------------------" << std::endl;         
	std::cout << "\t\t\t\t\tPlayer 1 (X)  -  Player 2 (O)" << std::endl << std::endl;    // players info.
	std::cout << std::endl;     

    Node* current = head;         // sab se phele hum head ko current karden ge 
    
    while(current != NULL)
	{
        std::cout << "\t\t\t\t";          
        for(int i=0; i<3; i++)           // ye for ka loop first row ke liye hai.
		{
			if(current->data == 79) // if ascii value is 79         
			{
				std::cout << "\t" << "O";   // agr second player ki bari hai tu wo O print karde ga aur phir direct label pe jump hojae ga.
				goto label;       // agr if ki condition true hoti hai tu direct label pe jump hojae ga.
			}

			else if(current->data == 88)  // if  ascii value is 88
			{
				std::cout << "\t" << "X";  // agr first player ki bari hai tu wo X print karde ga aur phir direct label pe jump hojae ga.
				goto label;            // agr else-if ki condition true hoti hai tu direct label pe jump hojae ga.
			}

            std::cout << "\t" << current->data;
			 
			label:                         // aur jab label pe jump ho ga tu next condition chale gi.
            current = current->next;       // idr hum next node mein jane ke liye current ko current->next ke equal karen ge.

            if(i<2)
			{
                std::cout << "   |";
            }
		}

        std::cout << "\t\t\t\t";
        std::cout << std::endl;
        std::cout << "\t\t\t\t      ---------------------";
        std::cout << std::endl;
        std::cout << "\t\t\t\t";
        
        for(int i=0; i<3; i++)              // ye for ka loop second row ke liye hai.
		{
			if(current->data == 79) // if ascii value is 79
			{
				std::cout << "\t" << "O";   // agr second player ki bari hai tu wo O print karde ga aur phir direct label pe jump hojae ga.
				goto label2;              // agr if ki condition true hoti hai tu direct label2 pe jump hojae ga.
			}

			else if(current->data == 88)  // if 88
			{
				std::cout << "\t" << "X";     // agr first player ki bari hai tu wo X print karde ga aur phir direct label pe jump hojae ga.
				goto label2;                  // agr else-if ki condition true hoti hai tu direct label2 pe jump hojae ga.
			}

            std::cout << "\t" << current->data;

            label2:                    // aur jab label2 pe jump ho ga tu next condition chale gi.
            current = current->next;       // idr hum next node mein jane ke liye current ko current->next ke equal karen ge.
            if(i<2)
			{
                std::cout << "   |";
            }
        }
        
        std::cout << "\t\t\t\t";
        std::cout << std::endl;
        std::cout << "\t\t\t\t      ---------------------";
        std::cout << std::endl;
        std::cout << "\t\t\t\t";
        
        for(int i=0; i<3; i++)                // ye for ka loop third row ke liye hai.
		{
			if(current->data == 79) // if ascii value is 79
			{
				std::cout << "\t" << "O";        // agr second player ki bari hai tu wo O print karde ga aur phir direct label pe jump hojae ga.
				goto label3;                  // agr if ki condition true hoti hai tu direct label3 pe jump hojae ga.
			}

			else if(current->data == 88)  // if 88
			{
				std::cout << "\t" << "X";        // agr first player ki bari hai tu wo X print karde ga aur phir direct label pe jump hojae ga.
				goto label3;                     // agr else-if ki condition true hoti hai tu direct label3 pe jump hojae ga.
			}

            std::cout << "\t" << current->data;

            label3:                      // aur jab label3 pe jump ho ga tu next condition chale gi.
            current = current->next;       // idr hum next node mein jane ke liye current ko current->next ke equal karen ge.
            if(i<2)
			{
                std::cout << "   |";
            }
        }
    }    
}

bool LinkList::checkWinner(std::string player1, std::string player2)        // is check ke function mein hum board check karen ge kn sa player win kiya hai.
{
    Node* current = head;     // sab se phele hum head ko current karen ge.
    
    // Sab se phele hum first row check karen ge.
 
    std::cout << std::endl << std::endl;
    if(current->data == current->next->data && current->data == current->next->next->data)    // sab se current jo head ke equal tha us mein X ya O hosakta hai then current->data check hoga current->next->data ke aur current->data check hoga current->next->next->data ke agr dono condition true hon gi tu if ke andr ae ga.
	{
        if(current->data == 'X')        // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;
        }
        else                        // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking first column.
    
    else if(current->data == current->next->next->next->data && current->data == current->next->next->next->next->next->next->data)   // sab se current jo head ke equal tha us mein X ya O hosakta hai then current->data check hoga current->next->next->next->data ke aur current->data check hoga current->next->next->next->next->next->next->data ke agr dono condition true hon gi tu if ke andr ae ga.
	{
        if(current->data == 'X')    // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;
        }
        else                       // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking left diagonal
    
    else if(current->data == current->next->next->next->next->data && current->data == current->next->next->next->next->next->next->next->next->data)      // sab se current jo head ke equal tha us mein X ya O hosakta hai then current->data check hoga current->next->next->next->next->data ke aur current->data check hoga current->next->next->next->next->next->next->next->next->data ke agr dono condition true hon gi tu if ke andr ae ga.
	{
        if(current->data == 'X')      // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
			std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;      
        }
        else                         // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking second column.
    
    current = current->next;   // sab se phele hum ne current ko head ke equal kiya tha then jab hum second column ko check karne ke liye hum current ko current->next ke equal karen ge.
    
    if(current->data == current->next->next->next->data && current->data == current->next->next->next->next->next->next->data)      // sab se current jo current->next ke equal tha us mein X ya O hosakta hai then hum condition check karen ge agr equal hui tu if ke andr aega.
	{
        if(current->data == 'X')       // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;
        }
        else                           // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking third column
    
    current = current->next;     // third column check karne se phele hum ne current ko current->next ke equal kiya tha ab hum third column ke liye current ko current->next ke equal karen ge tu wo direct third column mein ajae ga.
    
    if(current->data == current->next->next->next->data && current->data == current->next->next->next->next->next->next->data)
	{
        if(current->data == 'X')       // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;
        }
        else                        // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking right digonal
    
    else if(current->data == current->next->next->data && current->data == current->next->next->next->next->data)    // is ke andr hum right digonal check karen ga. sab se phekle current->data jo check hoga wo current->next->next se hoga.
	{
        if(current->data == 'X')         // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player1<< " [X] WIN!!!" << std::endl;  
        }
        else                 // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" << player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }
 
    //checking second row
    
    current= current->next;    // second row check karne ke liye hum sab se phele current ko curent->next ke equal karden ge jo phele current equal tha current->next ke.
 
    if(current->data == current->next->data && current->data == current->next->next->data)   // sab se current jo current->next ke equal tha us mein X ya O hosakta hai then current->data check hoga current->next->data ke aur current->data check hoga current->next->next->data ke agr dono condition true hon gi tu if ke andr ae ga.
	{
        if(current->data == 'X')          // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout <<"\n\t\t\t\t\t" <<player1<< " [X] WIN!!!" << std::endl;
        }
        else                 // agr current->data 'O' ke equal hoga tu player 2 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" <<player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }

    //checking third row
    
    current= current->next->next->next;     // then hum third row check karne ke liye hum current ko current->next->next->next ke equal karden ge jo phele cuurrent equal tha current->next ke.
    
    if(current->data == current->next->data && current->data == current->next->next->data)     // sab se current jo current->next->next->next ke equal tha us mein X ya O hosakta hai then current->data check hoga current->next->data ke aur current->data check hoga current->next->next->data ke agr dono condition true hon gi tu if ke andr ae ga.
	{
        if(current->data == 'X')        // agr current->data 'X' ke equal hoga tu player 1 winner hoga.
		{
            std::cout << "\n\t\t\t\t\t" <<player1<< " [X] WIN!!!" << std::endl;
        }
        else                // agr current->data 'O' ke equal hoga tu player 2 winner hoga
		{
            std::cout << "\n\t\t\t\t\t" <<player2<< " [O] WIN!!!" << std::endl;
        }
        return true;
    }
    
    //Then hum draw check karen ge.
    
    current = head;       // sab se phele hum current ko head ke equal karden ge.
    
    bool goFlag = false;    // then hum bool ke variable ko false ke equal karen ge.

    while(current != NULL)        // while ka loop us waqt tak chale ga  jab tak use null na mil jae.the while ki condition ke andr current null ke equal nai hai tu wo loop ke andr ajae ga.
	{ 
        if(current->data == 'X' || current->data == 'O')     // age current->data equal hota hai hai X ya O ke tu wo true rreturn karde ga.
		{
            goFlag = true;       
        }
        else             // agr current->data X ya O ke equal nai hota tu wo else ke andr jae ga aur goflag mein false return hogo.
		{
            goFlag = false;
        }
        if(goFlag == false)    // agr go flag false ke equal hota tu to draw wali condition break hojae gi 
		{
            break;
        }
        current = current->next;   // aur agr us ko current->data pe X ya O mil jata hai tu wo current ko current->next ke equal karde ga.
    }
    if(goFlag == true)   // sare boxes check karne ke baad agr goflag true hota hai ti wo print karde ga match draw warna return false karde ga. 
	{
        std::cout << "\n\t\t\t\t\t  ------GAME DRAW------" << std::endl;
        return true;
    }
    return false;
}

void LinkList::rematchAndNewgame()      // ye function hum ne rematch aur new game ke liye banaya hai.
{
    Node* current = head;           // idr hum sab se phele head ko current karen ge.
 
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    // ik array declare karen ge.
    int i =0;

    while(current != NULL)      
	{
        current->data = array[i];       // aur ye lines board dubara print karen gi.
        current = current->next;
        i++;
    }
}
