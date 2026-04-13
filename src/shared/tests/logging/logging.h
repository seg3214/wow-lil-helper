/*
 * Copyright (c) 2022-2026 seg3214 (https://github.com)
 * Licensed under the AGPL-3.0 license.
 *
 * DISCLAIMER: This tool is for educational purposes only.
 * The author is not responsible for account bans or system damage.
 */

extern int log_generateID(char* label);
extern void log_line(int id, char* format, ...);
extern void log_dump(int id, char* filename, int append, void* buffer, size_t size);
