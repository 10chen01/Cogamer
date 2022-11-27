#include<bits/stdc++.h>
#include "Macro.hpp"

using namespace std;

int main(int argc,char* argv[]){
    char* varg = argv[1];
    if(varg == "NullExcept"){
        system("cls");
        pr_line("X");
        printf("\n" bold("Input Number Is Invalid!\n") reset "\n");
        pr_line("X");
        system("pause");
    }
    else{
        system("cls");
        pr_line("E");
        printf("\n" bold("Unknown Error.") reset "\n");
        pr_line("E");
        system("pause");
    }
}