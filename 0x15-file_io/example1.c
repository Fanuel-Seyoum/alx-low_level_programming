#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

/* 
* The following code checks for the file named input.txt
* If the file exists the fopen will assign the least non-negative integer as a file descriptor
* if the file does not exist the desctiptor will be -1 and an error message will be printed.
* when we add another file descriptor the next least integer value is assigned for the file
* as shown by the fd value of 4 in the below program
* try to change the file permission for the README.md as chmod 377 README.md
* the value of the fd will change to -1 because the user will not have access to read the file
* hence it is not ony the existence of the file that matters the permission level is also important.
*/



int main(){
    int fdesctiptor, fd;
    fdesctiptor = open("input.txt", O_RDONLY);
    fd = open("README.md", O_RDONLY);
    if (fdesctiptor == -1){
        printf("\n open() was failed - errno = (%d)\n",errno);
        perror("ERROR:");
    }
    else
    {
        printf("open() system call executed successfully\n");
        printf("The least non-negative numbera assinged as file descriptor is : %d\n", fdesctiptor);
        printf("I know README exists so I assigned the direct fd value of : %d\n", fd);
    }

}