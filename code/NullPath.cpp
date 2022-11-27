#include<bits/stdc++.h>
#include "Macro.hpp"
#include "unistd.h"

using namespace std;

int main(int argc,char* argv[]){
    char* varg = argv[1];
    if(varg == "NullExcept"){
        system("clear");
        printf("\n" bold(Input Number Is Invalid!) reset "\n");
    }
    else{
        system("clear");
        printf("\n" bold(Unknown Error.) reset "\n");
    }
}