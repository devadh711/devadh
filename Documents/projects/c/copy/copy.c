  #include <sys/types.h>
  #include <sys/stat.h>   
  #include <fcntl.h>
  #include<stdlib.h>
  #include<errno.h>
  #include<unistd.h>
  #include<stdio.h>
  
  
int main()
{
    int fd,x;
    fd=open("text1.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR|S_IWGRP|S_IROTH);
    if(fd==-1)
    {
        perror("file can not be oppened");
        error(EXIT_FAILURE);
    }
    void *buf=(char*) malloc(500);
   int count=read(fd,buf,120);

        printf("count : %d\n",count);

        printf("%s",buf);
  
    x=close(fd);
    if(x!=0)
    {
        perror("file can not be closed");
        error(EXIT_FAILURE);
    }

     int f1;

    f1=open("text2.txt",O_CREAT | O_WRONLY);
    if(f1==-1)
    {

    printf("error opening the file");

    }
    int c;
    while(count=read(fd,buf,120)>0)
      {
         c=write(f1,buf,120);
      }
      if(c==-1)
    {

     printf("error writing to the file");

    }



        close(f1);

    return 0;
}