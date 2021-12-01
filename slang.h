#include "slangrules.h"
#include <stdlib.h>

typedef unsigned long u32;
typedef struct SlangSource {
    char* source;
    unsigned long position;
} SlangSource;

char consume(SlangSource *slangsrc) {
    return slangsrc->source[(slangsrc->position += 1)];
}

char peek(SlangSource *slangsrc) {
    return slangsrc->source[slangsrc->position + 1];
}

char current(SlangSource *slangsrc) {
    return slangsrc->source[slangsrc->position];
}

char *multiconsume(SlangSource *slangsrc, u32 count) {    
    // char* result = "";
    // u32 index = 0;

    // count += slangsrc->position + 1;
    // while ((slangsrc->position++) != count) {
    //     result[index++] = slangsrc->source[slangsrc->position];
    // }

    // return result;
    u32 index = 0;

    while (*slangsrc->source) {
        putchar(*slangsrc->source++);
    }
}

char *multipeek(char *buffer, u32 pos);

char *peekuntil(char *buffer, char del);

char *consumeuntil(char *buffer, char del);

char *peekwhile(SlangSource *slangsrc, _Bool (*rule)(char)) {
    // record the current position (position: current token)
    // in a given source string.
    u32 begin = slangsrc->position;

    // loop while a given character follows a given rule.
    // example: 
    //      continue if x is rule, where x is 'v' and rule is alphalower.
    //      This evaluates true, therefore it will continue.
    while (rule(slangsrc->source[slangsrc->position++]));
    // printf(rule(slangsrc->source[slangsrc->position]) ? "true" : "false");

    // char *str = (char*) malloc(((slangsrc->position - begin) + 1) * sizeof(char));
    // memset(str, ' ', sizeof(str));

    // printf("\nstring: %s\n", str);
}

char *consumewhile(SlangSource *slangsrc, _Bool (*rule)(char)) {
    
}

char *match(char *buffer, char *delims[]);