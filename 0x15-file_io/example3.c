#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
/*
* for the first time this excutes the code succefly
* but since the first instance of run creates the file named newFile2.log
* the system will result in the error message the "File exists"since the file is already
* created in the first instance of the code
* what will happen if we remove the O_EXCL command;
    * the protection against accidentally overwriting the existing file will be removed
    * so the file will be overwritten though it exists.
    * so the program will always excute the open call successfully while overwriting the existing one
*/

int main(){
    int fd;
    fd = open("newFile2.log", O_CREAT | O_EXCL, 0774);
    if (fd == -1){
        printf("open() was failed - errno = (%d)\n",errno);
        perror("ERROR message is");
    }
    else
    {
        printf("open() system call executed successfully\n");
    }

}