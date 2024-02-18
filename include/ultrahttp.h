#ifndef ULTRAHTTP_H
#define ULTRAHTTP_H

#define MAX_URL_LENGTH 1024

int download_file(char *url, char *output_location);
int download_file(char *url, char *output_location, char *password);

#endif // ULTRAHTTP_H

