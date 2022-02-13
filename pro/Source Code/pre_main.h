#ifndef DSA_LAB_PROJECT_PRE_MAIN_H
#define DSA_LAB_PROJECT_PRE_MAIN_H

#include<fstream>
#include<iostream>
#include"BOOK.h"
#include<map>
#include<iterator>


std::multimap<const int,BOOK> database_map;
std::multimap<const int,BOOK>::iterator it;

char catagories[6][20] = { "Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
void check_database();
void mainmenu();
void addbooks();
void deletebooks();
void editbooks();
void searchbooks();
void viewbooks();
void adminsignup();
void add_window();
int change_password();
void adminsignin();
void save_record();
#endif //DSA_LAB_PROJECT_PRE_MAIN_H
