#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h>
#include <fcntl.h> 

/* the below code reads the data from the input.txt file
* the return of the read function is the number of bytes read.
* the value that is read is stored in the buf array
* a null terminator is added at the end of the array */


int main() 
{ 
  int fd, sz; 
  char buf[20] = {0};
  
  fd = open("input.txt", O_RDONLY); 
  if (fd < 0){
      perror("Error:");
      exit(1); 
  } 
  
  sz = read(fd, buf, 20);
  printf("\n");
  printf("call 1 - called read. fd = %d,  %d bytes  were read.\n", fd, sz); 
  buf[sz] = '\0'; 
  printf("Read bytes are as follows: \n<%s>\n", buf); 

  printf("Note the next set of bytes read from file, it is continuos\n");

  sz = read(fd, buf, 11);
  printf("\n");
  printf("call 2 - called read. fd = %d,  %d bytes  were read.\n", fd, sz); 
  buf[sz] = '\0'; 
  printf("Read bytes are as follows:\n<%s>\n", buf); 

  sz = read(fd, buf, 10);
  printf("\n"); 
  printf("call 3 - called read. fd = %d,  %d bytes  were read.\n", fd, sz); 
  if(sz == 0){
      printf("EOF Reached\n");
  }


  close(fd);



} 
