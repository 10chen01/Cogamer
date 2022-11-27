#include<bits/stdc++.h>
#include "Macro.hpp"

using namespace std;

int main(int argc,char* argv[]){
    char* varg = argv[1];
    if(varg == "NullExcept"){
        system("cls");
        pr_line("X");
        printf("\n" bold("Input Number Is Invalid!\n") "\n");
        pr_line("X");
        system("pause");
        return 0;
    }
    else{
        system("cls");
        pr_line("E");
        printf("\n" bold("Unknown Error.") "\n");
        pr_line("E");
        return 0;
    }
}