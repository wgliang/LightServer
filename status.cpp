#include "status.h"

void headers(int client, const char *file_name) {
	(void)file_name;
	char buffer[1024];

	strcpy(buffer, "HTTP/1.0 200 OK\r\n");
	send(client, buffer, strlen(buffer),0);
	strcpy(buffer, SERVER_VERSION);
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "Content-Type: text/html\r\n");
	send(client, buffer,strlen(buffer), 0);
	strcpy(buffer,"\r\n");
	send(client, buffer, strlen(buffer), 0);
}

void unfound(int client){
	char buffer[1024];

	sprintf(buffer, "HTTP/1.0 404 --- NOT FOUND\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, SERVER_STRING);
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "Content-Type: text/html\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "<HTML><TITLE>404 Not Found</TITLE>\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "<BODY><P>Sorry, Lightserver coundn't find resource!\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "May be the resource you look for\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "is unavailable or non-existent.\r\n");
	send(client, buffer, strlen(buffer), 0);
	sprintf(buffer, "</BODY></HTML>\r\n");
	send(client, buffer, strlen(buffer), 0);
}