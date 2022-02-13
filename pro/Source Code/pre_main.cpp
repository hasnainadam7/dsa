#include "pre_main.h"

void BOOK::getData(int choice) {
    int t_id;
    char t_name[20];
    char t_author[20];
    int t_quantity;
    float t_price;
    int t_rack_no;

    gotoxy(20,3);std::cout<<("Enter the Information Below");
    gotoxy(20,4);std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,5);
    std::cout<<("\xB2");gotoxy(46,5);std::cout<<("\xB2");
    gotoxy(20,6);
    std::cout<<("\xB2");gotoxy(46,6);std::cout<<("\xB2");
    gotoxy(20,7);
    std::cout<<("\xB2");gotoxy(46,7);std::cout<<("\xB2");
    gotoxy(20,8);
    std::cout<<("\xB2");gotoxy(46,8);std::cout<<("\xB2");
    gotoxy(20,9);
    std::cout<<("\xB2");gotoxy(46,9);std::cout<<("\xB2");
    gotoxy(20,10);
    std::cout<<("\xB2");gotoxy(46,10);std::cout<<("\xB2");
    gotoxy(20,11);
    std::cout<<("\xB2");gotoxy(46,11);std::cout<<("\xB2");
    gotoxy(20,12);
    std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(21,5);
    std::cout<<("Category:");
    gotoxy(31,5);
    std::cout<<catagories[choice-1];
    gotoxy(21,6);
    std::cout<<("Book ID:");
    gotoxy(30,6);
    std::cin >>t_id;
    gotoxy(21,7);
    std::cout<<("Book Name:");gotoxy(33,7);
    std::cin >> t_name;
    gotoxy(21,8);
    std::cout<<("Author:");gotoxy(30,8);
    std::cin >>t_author;
    gotoxy(21,9);
    std::cout<<("Quantity:");gotoxy(31,9);
    std::cin >>t_quantity;
    gotoxy(21,10);
    std::cout<<("Price:");gotoxy(28,10);
    std::cin >>t_price;
    gotoxy(21,11);
    std::cout<<("Rack No:");gotoxy(30,11);
    std::cin >>t_rack_no;

    this->integer_id = t_id;
    strcpy(this->name, t_name);
    strcpy(this->author, t_author);
    this->quantity = t_quantity;
    this->price = t_price;
    this->rack_no = t_rack_no;
}

void adminsignup(){
    char temp_password[20], password[20];

    std::fstream signup;
    signup.open("password.dat",std::ios::out | std::ios::binary);
    gotoxy(10,10);
    std::cout<<("Enter password: ");
    std::cin.getline(password,20);
    gotoxy(10,11);
    std::cout<<("Re Enter Password: ");
    std::cin.getline(temp_password,20);
    while(strcmp(password,temp_password)!=0){
        gotoxy(10,10);
        std::cout<<("Password did not matched! Enter again");
        gotoxy(10,11);
        std::cout<<("Enter password: ");
        std::cin.getline(password,20);
        gotoxy(10,12);
        std::cout<<("Re Enter Password: ");
        std::cin.getline(temp_password,20);
        system("cls");
    }
    if(signup.is_open()){
        signup << password;
    }
    signup.close();
}
void adminsignin(){
    char temp_password[20],*password;
    std::string string_password;
    std::fstream signin;
    signin.open("password.dat",std::ios::in | std::ios::binary);
    gotoxy(10,10);
    std::cout<<("Enter password: ");
    std::cin.getline(temp_password,20);
    std::getline(signin,string_password);
    password = &string_password[0];
    while(signin.is_open()){
        while(strcmp(temp_password,password)!=0){
            system("cls");
            gotoxy(10,10);
            std::cout<<("Password did not match! ");
            std::cout<<("Enter Again: ");
            std::cin.getline(temp_password,20);
        }
        gotoxy(10,11);
        std::cout<<("Password Match");
        break;
    }
    signin.close();
    gotoxy(10,12);
    std::cout<<("Press any key...");
    getchar();
}
void check_database(){
    std::fstream database;
    database.open("record.dat",std::ios::in | std::ios::binary);
    if(!database.is_open()){
        std::cin.sync();
        std::cout<<"\nDatabase does not exist. Starting new. Press any key to continue...."<<std::endl;
        getchar();
        return;
    }
    getchar();
    if(database.is_open()){
        BOOK temp;
        while(!database.eof()){
            database.read((char*)&temp, sizeof(temp));
            database_map.insert(std::make_pair(temp.integer_id,temp));
        }
    }
    return;
}

void add_window(){
    gotoxy(20,5);
    std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGORIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,7);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 1. Computer");
    gotoxy(20,9);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 2. Electronics");
    gotoxy(20,11);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 3. Electrical");
    gotoxy(20,13);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 4. Civil");
    gotoxy(20,15);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 5. Mechanical");
    gotoxy(20,17);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 6. Architecture");
    gotoxy(20,19);
    std::cout<<("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
    gotoxy(20,21);
    std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

}
void mainmenu()
{

    while(true){
        std::cin.sync();
        system("cls");
        gotoxy(20,3);
        std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(20,5);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 1. Add Books");
        gotoxy(20,7);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 2. Delete Book");
        gotoxy(20,9);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 3. Search Book");
        gotoxy(20,11);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 4. View Book List");
        gotoxy(20,13);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 5. Edit Book Record ");
        gotoxy(20,15);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 6. Change Password");
        gotoxy(20,17);
        std::cout<<("\xDB\xDB\xDB\xDB\xB2 7. Close Application");
        gotoxy(20,19);
        std::cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(20,21);
        std::cout<<("Enter your choice:");
        switch(std::getchar()){
            case '1':
                addbooks();
                break;
            case '2':
                deletebooks();
                break;
            case '3':
                searchbooks();
                break;
            case '4':
                viewbooks();
                break;
            case '5':
                editbooks();
                break;
            case '6':
                change_password();
                gotoxy(10,13);
                std::cout<<("press any key to continue....");
                getchar();
                break;
            case '7':
                save_record();
                return;
            default:
                gotoxy(10,23);
                std::cout<<("\aWrong Entry!!Please re-entered correct option");
                getchar(); //holds the screen until a key is pressed
        }
    }
}




void addbooks(){    //function that add books
    system("cls");
    std::cin.sync();
    int choice;
    add_window();
    gotoxy(20,22);
    std::cout<<("Enter your choice:");
    std::cin>>choice;
    if(choice==7)
        return;  //to main menu();
    system("cls");
    if(choice > 0 && choice < 7){
        BOOK temp;
        std::string temp_string = catagories[choice-1];
        strncpy(temp.category,temp_string.c_str(), sizeof(temp.category));
        getchar();
        temp.getData(choice);
        it = database_map.insert(std::make_pair(temp.integer_id,temp));
        getchar();
        gotoxy(21,14);
        std::cout<<("The record is successfully saved");
        gotoxy(21,15);
        std::cout<<("Save any more?(Y / N):");
        if(getchar()=='n')
            return;
        else{
            system("cls");
            addbooks();
        }
    }
}

void deletebooks(){    //function that delete items from file Record.dat
    system("cls");
    std::cin.sync();
    int d;

    system("cls");
    gotoxy(10,5);
    std::cout<<("Enter the Book ID to  delete:");
    std::cin >> d;

    it  = database_map.find(d);

    if(it != database_map.end()) {
        gotoxy(10,7);
        std::cout<<("The book record is available");
        gotoxy(10,8);
        std::cout<<"Book name is "<<it->second.name<<std::endl;
        gotoxy(10,9);
        std::cout<<"Rack No. is "<<it->second.rack_no<<std::endl;
        gotoxy(10,10);
        std::cout<<("Do you want to delete it?(Y/N):");
        std::cin.sync();
        if(getchar() == 'y' | getchar()=='Y'){
            database_map.erase(it);
        }
        std::cout<<("Delete another record?(Y/N)");
        fflush(stdin);
        if(getchar() == 'y'| getchar() == 'Y'){
            deletebooks();
        }
    }
}

void searchbooks()
{
    system("cls");
    int t_id;
    std::cin.sync();
    std::cout << "*****************************Search Books*********************************";
    gotoxy(20,10);
    std::cout<< "\xDB\xDB\xDB\xB2 Enter Book ID: ";
    std::cin >> t_id;

    it = database_map.find(t_id);

    if(it != database_map.end()) {
        system("cls");
        std::cout << "The Book is available";
        gotoxy(20, 8);
        std::cout
                << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20, 9);
        std::cout << "\xB2 ID: " << it->second.integer_id;
        gotoxy(47, 9);
        std::cout << "\xB2";
        gotoxy(20, 10);
        std::cout << "\xB2 Name: " << it->second.name;
        gotoxy(47, 10);
        std::cout << "\xB2";
        gotoxy(20, 11);
        std::cout << "\xB2 Author: " << it->second.author;
        gotoxy(47, 11);
        std::cout << "\xB2";
        gotoxy(20, 12);
        std::cout << "\xB2 Quantity: " << it->second.quantity;
        gotoxy(47, 12);
        std::cout << "\xB2";
        gotoxy(47, 11);
        std::cout << "\xB2";
        gotoxy(20, 13);
        std::cout << "\xB2 Price:Rs." << it->second.price;
        gotoxy(47, 13);
        std::cout << "\xB2";
        gotoxy(20, 14);
        std::cout << "\xB2 Rack No: " << it->second.rack_no;
        gotoxy(47, 14);
        std::cout << "\xB2";
        gotoxy(20, 15);
        std::cout<< "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    }
    else{
        gotoxy(20,8);
        std::cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(20,9);std::cout<<"\xB2";  gotoxy(38,9);std::cout<<"\xB2";
        gotoxy(20,10);
        std::cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        gotoxy(22,9);std::cout<<"\aNo Record Found";
    }

    std::cout<<"Try another search?(Y/N)";
    if(getchar()== 'y' | getchar()== 'Y')
        searchbooks();
    else
        return;
}

void viewbooks(){
    system("cls");
    int j = 4;
    it = database_map.find(2);
    gotoxy(1,1);
    std::cout<<"*********************************Book List*****************************";
    gotoxy(2,2);
    std::cout<<" CATEGORY     ID    BOOK NAME     AUTHOR       QTY     PRICE     RackNo ";

    it = database_map.begin();

    while(it != database_map.end()){
        gotoxy(3,j);
        std::cout<<it->second.category;
        gotoxy(16,j);
        std::cout<<it->second.integer_id;
        gotoxy(22,j);
        std::cout<<it->second.name;
        gotoxy(36,j);
        std::cout<<it->second.author;
        gotoxy(50,j);
        std::cout<<it->second.quantity;
        gotoxy(57,j);
        std::cout<<it->second.price;
        gotoxy(69,j);
        std::cout<<it->second.rack_no;
        std::cout<<"\n\n";
        it++;
        j++;
    }
    std::cin.sync();
    getchar();
}

void editbooks()  {
    char t_name[20];
    char t_author[20];
    int t_quantity;
    float t_price;
    int t_rack_no;


    system("cls");
    std::cin.sync();
    int c=0,d;
    gotoxy(20,4);
    std::cout<<"****Edit Books Section****";

    gotoxy(15,6);
    std::cout<<"Enter Book Id to be edited:";
    std::cin>>d;

    it = database_map.find(d);

    if(it != database_map.end()){
        gotoxy(15,7);
        std::cout<<"The book is availble";
        gotoxy(15,8);
        std::cout<<"The Book ID: "<<it->second.integer_id;
        gotoxy(15,9);
        std::cout<<"Enter new name:";
        std::cin >> t_name;
        gotoxy(15,10);
        std::cout<<"Enter new Author:";
        std::cin >>t_author;
        gotoxy(15,11);
        std::cout<<"Enter new quantity:";
        std::cin >>t_quantity;
        gotoxy(15,12);
        std::cout<<"Enter new price:";
        std::cin >>t_price;
        gotoxy(15,13);
        std::cout<<"Enter new rackno:";
        std::cin >>t_rack_no;
        gotoxy(15,14);

        strcpy(it->second.name, t_name);
        strcpy(it->second.author, t_author);
        it->second.quantity = t_quantity;
        it->second.price = t_price;
        it->second.rack_no = t_rack_no;
        std::cout<<"The record is modified";
        c=1;
    }
    if(c==0){
        gotoxy(15,9);
        std::cout<<"No record found";
    }

    gotoxy(15,16);
    std::cout<<"Modify another Record?(Y/N)";
    getchar();

    if(getchar()== 'y' | getchar()== 'Y')
       editbooks();
    else
        return;
}

int change_password(){
    system("cls");
    std::string file_string;
    std::fstream change_password;
    change_password.open("password.dat",std::ios::in | std::ios::binary);
    std::getline(change_password,file_string);
    change_password.close();

    std::cin.sync();
    char old_pass[20], new_pass[20];
    gotoxy(10,10);
    std::cout<<"Enter Old password: ";
    std::cin.getline(old_pass,20);
    gotoxy(10,11);
    std::cout<<"Enter New password: ";
    std::cin.getline(new_pass,20);

    if(strcmp(old_pass,file_string.c_str())==0){
        change_password.open("password.dat",std::ios::out | std::ios::binary);
        if(change_password.is_open()) {
            change_password << new_pass;
        }
        gotoxy(10,12);
        std::cout<<"Password sucessfully changed! ";
        return 1;
    }
    else{
        gotoxy(10,12);
        std::cout<<"Password changing process failed!";
        return 0;
    }
}

void save_record(){
    std::fstream save;
    save.open("record.dat",std::ios::out | std::ios::binary | std::ios::app);
    if(save.is_open()){
        it = database_map.begin();
        while(it != database_map.end()){
            save.write((char*)&it->second, sizeof(it->second));
            it++;
        }
    }
}





