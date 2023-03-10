<<<<<<< HEAD
0x09

I created all the .c files and the main.h file

I created the .o files using the command " gcc -c *.c " 

I moved all the .o files into the library using the command 'ar rc libmy.a *.o'
//the 'ar rc' is the command used to create the library libmy.z and move the files
// the asterisk is a shortcut to include and move all the files with the extension .o, i think it is better than listing all the files
we can check the library by running the below code

ar -t libmy.a

We can also ist the symbols used in the library using the nm command as follows

nm libmy.a

the next step is running the git add
=======
0x09-Static_Libraries
>>>>>>> 989b5087bea7d7698740075358bedb3aa9abf83f
