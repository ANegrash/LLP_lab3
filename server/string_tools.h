#ifndef LLP3_LAB_STRING_TOOLS_H
#define LLP3_LAB_STRING_TOOLS_H

#include <malloc.h>
#include <string.h>
#include "../protobuffer/message.pb.h"
#include "graph.h"

#define STR_LEN 64
void toString(Field f, char *res[STR_LEN]);
char *concat(const char *s1, const char *s2);
void setDefault(uint8_t type, char *res[STR_LEN]);

#endif