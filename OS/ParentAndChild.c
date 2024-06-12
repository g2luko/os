#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() 
{ 
    for(int i = 0; i < 5; i++) // loop will run n times (n=5) 
    { 
        pid_t pid = fork(); 
        if(pid == 0) 
        { 
            // Child process
            printf("Hello from [child] pid %d from [parent] pid %d\n", getpid(), getppid()); 
            exit(0); 
        } 
    } 

    for(int i = 0; i < 5; i++) // loop will run n times (n=5) 
    { 
        wait(NULL); // Wait for each child to exit
    } 

    // Parent process
    printf("Hello from [parent] pid %d\n", getpid());

    return 0; 
} 
