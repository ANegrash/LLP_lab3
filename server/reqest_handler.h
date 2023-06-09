#ifndef LLP3_LAB_REQEST_HANDLER_H
#define LLP3_LAB_REQEST_HANDLER_H

#include "graph.h"

void parseAddRequest(View v, FILE* file, char** response);
void parseGetRequest(View v, FILE* file, char** response);
void parseRemoveRequest(View v, FILE* file, char** response);
void parseUpdateRequest(View v, FILE* file, char** response);

#endif
