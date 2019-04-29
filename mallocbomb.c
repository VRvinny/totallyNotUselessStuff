#include <stdlib.h>
#include <signal.h>
void sigintHandler(int sig_num){ 
	signal(SIGINT, sigintHandler); 
	printf("ayy lmao");
	fflush(stdout);
}
int main(){
	signal(SIGINT, sigintHandler);
	while(1){(void* ) malloc(1);}
}
