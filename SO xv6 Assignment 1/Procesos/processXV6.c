/*
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
*/

#include "types.h"
#icnlude "user.h"

int main(int argc,char *argv[])
{
	pid_t pro_id,father_id,child_id,pid;
	char c='A';
	father_id=getpid();
	pro_id=fork();
	if(pro_id==0){
		child_id=getpid();
		pid=getppid();
		printf(1,"CHILD: %c getpid():%d soy hijo de %d\n",c,child_id,pid);
		c='B';
		printf(1,"CHILD: %c\n",c);
	}
	else{
		printf(1,"FATHER: %c father_id=%d\n",c,father_id);
		printf(1,"FATHER: Me voy a dormir por 30 segundos");
		/*sleep(30);*/
		printf(1,"FATHER: Ya desperte");
		printf(1,"FATHER: %c\n",c);
	}
	/*return 0;*/
	exit();
}
