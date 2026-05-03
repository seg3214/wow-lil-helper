/*
 * Copyright (c) 2022-2026 nick-cdev (https://github.com)
 * Licensed under the AGPL-3.0 license.
 *
 * DISCLAIMER: This tool is for educational purposes only.
 * The author is not responsible for account bans or system damage.
 */
#include <stdint.h>
#include <stdio.h>
#if defined LINUX

uint32_t arPlayersHostile[ph_size];
uint32_t arPlayersFriendly[pf_size];
int CanAttack(uint32_t objBase) {
	return 1;
}
// int initObject(uint32_t objBase, struct stObject2* stObj) {
// 	return 1;
// }
#endif
