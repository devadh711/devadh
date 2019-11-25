  #include <sys/types.h>
  #include <sys/stat.h>   
  #include <fcntl.h>
  #include<stdlib.h>
  #include<errno.h>
  #include<unistd.h>
  
int main()
{
    int fd,x;
    fd=open("text.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR|S_IWGRP|S_IROTH);
    if(fd==-1)
    {
        perror("file can not be oppened");
        error(EXIT_FAILURE);
    }
    write(fd,"hello world\n",12);
   // x=close(fd);
    if(x!=0)
    {
        perror("file can not be closed");
        error(EXIT_FAILURE);
    }

    return 0;
}