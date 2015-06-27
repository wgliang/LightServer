#ifndef _LIGHTSERVER_H_
#define _LIGHTSERVER_H_

#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
#include <sys/stat.h>
#include <pthread.h>
#include <sys/wait.h>
#include <stdlib.h>

#define IsSpace(x) isspace((int)(x))

void cat(int client, FILE *resource);

void cgi(int client, const char *path, const char *style, cost  char *query_string);

void return_file(int client, const char file_name);

int start(short *port);

void accept_request(int client);

#endif