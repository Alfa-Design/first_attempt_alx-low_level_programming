#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _keygen - generates random valid passwords
 *
 * Return - a password
 *
 */

#define MIN_CHAR 8
#define MAX_CHAR 1023
#define BUF_SIZE 1024
#define PRIME_MOD 94
int main()
{
    int N = 10;
    char password [BUF_SIZE];

        time_t now = time (NULL);

        srand ((unsigned int) (now % PRIME_MOD));

        for (int i = 0; i < N; i++)
            password [i] = 33 + rand () % 94;

        password [N] = '\0';

        return (0);
    
}
