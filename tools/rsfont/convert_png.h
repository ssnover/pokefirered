// Copyright (c) 2015 YamaArashi

#ifndef CONVERT_PNG_H
#define CONVERT_PNG_H

#include "gfx.h"

void ReadPng(char* path, struct Image* image);
void WritePng(char* path, struct Image* image);

#endif // CONVERT_PNG_H
