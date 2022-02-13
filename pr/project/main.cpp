#include <iostream>
#include "pre_main.cpp"

int main() {
    std::fstream login,database;
    login.open("password.dat",std::ios::in);
    if(!login.is_open()){
        gotoxy(10,9);
        std::cout<<("Database Do not exits. Be an administrator. Sign Up");
        adminsignup();
    }
    else{
        adminsignin();
        check_database();
    }
    mainmenu();
    return 0;
}
