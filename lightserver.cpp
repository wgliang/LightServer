void cat(int client, FILE *resource);
void cgi(int client, const char *path, const char *style, cost  char *query_string);
void return_file(int client, const char file_name);
int start(short *port);
void accept(int client);
