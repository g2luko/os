#include<stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
int main() 
{ 
    // Create a child process       
    int pid = fork(); 
  
    if (pid > 0) 
        printf("in parent process"); 
  
    // Note that pid is 0 in child process 
    // and negative if fork() fails 
    else if (pid == 0) 
    { 
        sleep(30); 
        printf("in child process"); 
    } 
  
    return 0; 
} 

// .a.out &  ==> process number 
// pstree -p process number 
// ps aux | grep a.out ==> another process number
// ps -o ppid= another process number
// pstree -p 1
