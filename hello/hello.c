#include <ncurses.h>


int main()
{
    initscr();                   
    printw("Hello w!\n");  
    refresh();                   
    getch();                    
    endwin();                    
    return 0;
}
