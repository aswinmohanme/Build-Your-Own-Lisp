/**
* @Author: Aswin Mohan <aswinmohan>
* @Date:   2016-09-26T22:35:34+05:30
* @Last modified by:   aswinmohan
* @Last modified time: 2016-09-26T22:57:13+05:30
*/

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char const *argv[]) {

    puts("Lispa ver 0.0.0.1" );
    puts("Press Ctrl+C to Quit ");

    while(1){

        char *input = readline("Lisa > ");

        // Add input to scrollable history
        add_history(input);

        printf("Hey %s \n", input);

        // Free allocated Memory
        free(input);
    }
    return 0;
}
