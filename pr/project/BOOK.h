#ifndef DSA_LAB_PROJECT_BOOK_H
#define DSA_LAB_PROJECT_BOOK_H
#include<fstream>
#include<iostream>
#include <windows.h>
#include<map>
#include<iterator>
#include "COORD.cpp"

struct BOOK {
    int integer_id;
    char name[20];
    char author[20];
    int quantity;
    float price;
    int rack_no;
    char category[20];
    BOOK(){
    }
    void getData(int choice);
};


#endif //DSA_LAB_PROJECT_BOOK_H
