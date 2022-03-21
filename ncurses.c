//testing some ncurses stuff

#include <ncurses.h>

int main(int argc, char *argv[]){

    initscr();

    raw();

    noecho();

    

    return 1;
}