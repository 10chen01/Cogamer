#pragma once

#define count_for(cnt) for(int i=1;i<=cnt;i++)
#define pr_cnt_char(cnt, ch) count_for(cnt){printf(ch);}

#define reset "\033[0m"

#define bold_beg "\033[1m"
#define light_beg "\033[2m"
#define italic_beg "\033[4m"
#define u_shad_beg "\033[5m"

#define _default 39
#define _black 30
#define _red 31
#define _green 32
#define _yellow 33
#define _blue 34
#define _purple 35
#define _magenta _purple
#define _cyan 36
#define _white 37