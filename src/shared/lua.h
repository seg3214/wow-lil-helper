/*
 * Copyright (c) 2022-2026 nick-cdev (https://github.com)
 * Licensed under the AGPL-3.0 license.
 *
 * DISCLAIMER: This tool is for educational purposes only.
 * The author is not responsible for account bans or system damage.
 */
#pragma once
double* ExecuteInternal(char* query, uint32_t withResults);  //returns array indexes 0-n
void SetGlobalVar(const char* varName, const char* varValue);
char* GetGlobalVar_string(const char* varName);
double luaResToDouble(double* result, int index);
int64_t luaResToInteger(double* result, int index);
char* luaResToString(double* result, int index);
