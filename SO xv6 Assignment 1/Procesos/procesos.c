*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
*/

#include "types.h"
#include "user.h"

int main(int argc,char *argv[])
{
	pid_t pro_id,father_id,child_id;
	char c='A';
	father_id=getpid();
	pro_id=fork();
	if(pro_id==0){
		printf(1,"CHILD: %c\n",c);
		c='B';
	}
	else{
		printf(1,"FATHER: %c\n",c);
		/*sleep(20);*/
		printf(1,"FATHER: %c\n",c);
	}
	/*return 0;*/
}
