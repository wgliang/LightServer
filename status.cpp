#include "status.h"

void headers(int client, const char *file_name) {
	char buffer[1024];
	(void)file_name;

	strcpy(buffer, "HTTP/1.0 200 OK\r\n");
	sprintf(buffer, "Content-Type: text/html\r\n");
	strcpy(buffer,"\r\n");
}