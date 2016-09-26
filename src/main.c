/**
* @Author: Aswin Mohan <aswinmohan>
* @Date:   2016-09-26T22:35:34+05:30
* @Last modified by:   aswinmohan
* @Last modified time: 2016-09-26T22:49:27+05:30
*/

#include <stdio.h>

#define MAX_INPUT_SIZE 2048

int main(int argc, char const *argv[]) {

    static char input[MAX_INPUT_SIZE];

    puts("Lispa ver 0.0.0.1" );
    puts("Press Ctrl+C to Quit ");

    while(1){
        fputs("Lispa > " , stdout);

        // Get a line of Input from the Console
        fgets(input , MAX_INPUT_SIZE , stdin);

        printf("Hey %s \n", input);
    }
    return 0;
}
