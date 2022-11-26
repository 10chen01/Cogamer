#pragma once

#define count_for(cnt) for(int i=1;i<=cnt;i++)
#define pr_cnt_char(cnt, ch) count_for(cnt){printf(ch);}
#define pr_line(ch) pr_cnt_char(20)

// ASNI normal text
#define reset "\033[0m"

// ASNI style
#define bold(str) "\033[1m"#str
#define light(str) "\033[2m"#str
#define italic(str) "\033[4m"#str
#define u_shad(str) "\033[5m"#str

// ASNI color normal
#define __default 39
#define __black 30
#define __red 31
#define __green 32
#define __yellow 33
#define __blue 34
#define __purple 35
#define __magenta _purple
#define __cyan 36
#define __white 37

// ASNI color style
#define fg_default(str) "\033[39"#str
#define fg_black(str) "\033[30"#str
#define fg_red(str) "\033[31"#str
#define fg_green(str) "\033[32"#str
#define fg_yellow(str) "\033[33"#str
#define fg_blue(str) "\033[34"#str
#define fg_purple(str) "\033[35"#str
#define fg_magenta(str) _fg_purple(str)
#define fg_cyan(str) "\033[36"#str
#define fg_white(str) "\033[37"#str

#define bg_default(str) "\033[49"#str
#define bg_black(str) "\033[40"#str
#define bg_red(str) "\033[41"#str
#define bg_green(str) "\033[42"#str
#define bg_yellow(str) "\033[43"#str
#define bg_blue(str) "\033[44"#str
#define bg_purple(str) "\033[45"#str
#define bg_magenta(str) _bg_purple(str)
#define bg_cyan(str) "\033[46"#str
#define bg_white(str) "\033[47"#str
