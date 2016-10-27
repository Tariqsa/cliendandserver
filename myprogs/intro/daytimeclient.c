#include "unp.h" 

int
main(int argc, char **argv)
{
int sockfd, n, counter =0 ;
char recvline[MAXLINE + 1];
stuct sockadd_in servaddr;


