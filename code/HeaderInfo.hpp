#pragma once

#include<bits/stdc++.h>
#include "Macro.hpp"

using namespace std;

class Game {
    public:
        char * path;
        vector<char*> args;
        Game(){
            path = "./NullPath.exe";
            args[1] = "NullExcept";
        }
        Game(char * p){
            path = p;
            args[1] = "NormalSetup";
        }
        Game(char * p, vector<char*> arg){
            args = arg;
        }
        void operator()(){
            char * obj;
            strcat(obj, path);
            for(auto i : args){
                strcat(obj, " ");
                strcat(obj, i);
            }
            system(obj);
        }
        void operator()(vector<char*> arg){
            char * obj;
            strcat(obj, path);
            for(auto i : arg){
                strcat(obj, " ");
                strcat(obj, i);
            }
            system(obj);
        }
        
};

