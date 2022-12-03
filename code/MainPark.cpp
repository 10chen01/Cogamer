//build of g++

#include "GameClass.hpp"
#include "Info.hpp"
#include "Macro.hpp"

int main(){
    pr_cnt_char(20, "=");
    // Title
    printf("\n" bold_fg_yellow(Welcome to Cogamer!) reset "\n");
    //Body
    with_for(auto item , gamelist){
        printf("- " bold(%s) reset " \n", item.game_name);
    }
    pr_cnt_char(20, "=");
    while(true){
        printf(":(exit:q)>");
        char* temp;
        fgets(temp, 100, stdin);
        if(!strcmp(temp, "q")){
            break;
        }
        bool flag = true;
        with_for(auto item, gamelist){
            if(!strcmp(temp, item.game_name)){
                printf("cogamer: " bold_fg_green([success]) reset " Setup game [%s]", item.game_name);
                item();
            }
        }
        if(flag){
            printf("cogamer: " bold_fg_red([error 0x01]) reset "No more game.");
        }
    }
    printf("bye!");
    sleep(1);
    return 0;
}