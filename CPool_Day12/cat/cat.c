#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"
#include <errno.h>
#include <string.h>
#include <stdlib.h>
int main(int ac,char *av[])
{
	int fd;
	int i = 1;
	extern int errno;
	int rc = 0; 
	char buffer[30] = {};
	if(ac == 1){
		while(rc = read(0,buffer,30)){
			write(1,buffer,rc);
		}
	}
	while(i < ac){
		fd = open(av[i],O_RDWR);
		if(fd < 0){
			char * mesg = strerror(errno);
			my_putstr("cat: "); 
			my_putstr(av[i]); 
			my_putstr(": "); 
			my_putstr(mesg); 
			my_putchar('\n'); 
			i++;
			continue;
		}
		else{		
				while(rc = read(fd,buffer,30)){
					write(1,buffer,rc);
				}
				close(fd);	
		}
		i++;
	}
	return 0;
}
