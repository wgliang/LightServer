#ifndef _STATUS_H_
#define _STATUS_H_

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

void headers(int client, const char *file_name);

void unimplemented(int client);

void unfound(int client);

void request_error(int client);
#endif