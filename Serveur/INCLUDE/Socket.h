#ifndef Socket_h
#define Socket_h

int CreateSocket(int * sockfd, const char * ip, int port, struct sockaddr_in * interface_addr);


#endif