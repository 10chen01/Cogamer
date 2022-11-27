//build of g++

#include "HeaderInfo.hpp"
#include "Macro.hpp"

int main(){
    pr_cnt_char(20, "=");
    printf("\n" bold_fg_yellow(Welcome to Cogamer!) reset "\n");
    
    pr_cnt_char(20, "=");
    return 0;
}