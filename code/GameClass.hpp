#pragma once

#include<bits/stdc++.h>
#include<unistd.h>
#include "Macro.hpp"

using namespace std;

class Game {
    public:
        char * path;
        vector<char*> args;
        char * game_name;
        Game(char * p, vector<char*> arg, char * game) : path(p), args(arg), game_name(game) {}
        Game(char * p, char* game) : path(p), game_name(game) {
            args[1] = "NormalSetup";
        }
        Game(char * name) : path("./NullPath"), game_name(game){
            args[1] = "NullExcept";
        }
        Game() : path("./NullPath"), game_name("Unknown") {
            args[1] = "NullExcept";
        }
        /**
         * can use `Game game(...); game();` to setup.
         * */
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

