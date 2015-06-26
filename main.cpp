#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>

int main(){
	int serverfd = -1;
	int clientfd = -1;
	struct sockaddr_in client = NULL;
	int len_client = sizeof(client);
	short port;
	pthread_t thread;
	//开启服务，初始化server
	serverfd = start(port);
	printf("Lightserver is running on port %d\n now!", port);
	for(;;) {
		clientfd = accept_request(serverfd, (struct sockaddr *)&client, &len_client);
		if(clientfd == -1) {
			error("accept");
		}

	}
	close(serverfd);
	return 0;
}