#include "lightserver.h"
int start(short *port) {
	int server_fd = 0;
	struct sockaddr_in server_name;

	server_fd = socket(PF_INET, SOCK_STREAM, 0);
	memset(&server_name, 0, sizeof(server_name));
	server_name.sin_family = AF_INET;
	server_name.sin_port = htons(*port);
	server_name.sin_addr.s_addr = htonl(INADDR_ANY);
	bind(server_fd, (struct sockaddr *)&server_name. sizeof(server_name)); 

	int len_name = sizeof(server_name);
	getsockname(server_fd,(struct sockaddr *)&server_name, sizeof(server_name));
	*port = ntohl(server_name.sin_port);
	listen(server_fd, 5);
		
	return server_fd;
}

