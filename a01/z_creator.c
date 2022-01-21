#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t child_pid = fork();

    if(child_pid > 0){
        printf("In Parent Process ! \n"); //This makes the parent process sleep
        system("ps -l");
        printf("\n");
        
        sleep(10); 
    } else {
        printf("In child process rn ! \n"); 
        exit(0);
        
    }
    
    return 0;
}