nclude <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100




int main (int argc, char *argv[])
{

        if(argc < 3) die("USAGE: ex7 <dbfile> <action> [actions params]");

        char *filename = argv[1];
        char action = argv[2][0];
        struct Connection *conn = Database_open(filename, action);
