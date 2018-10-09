#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
    // To check if we can run commands using system() in an OS

    /* If we pass null pointer in place of string for command parameter, .
     * If command processor exists (or system can run)>> system returns nonzero
     * Otherwise If command processor don't exists >> returns 0.
     */
int main(){
    if(system(NULL)){
        printf("\n\n\n\n\n\n>> Command processor exists\n\n\n\n\n\n");
    }
	else{
        printf("\n\n\n\n\n\n>> Command processor don't exists\n\n\n\n\n\n");
	}
	getch();
	return 0;
}
