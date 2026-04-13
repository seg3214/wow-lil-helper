/*
 * Copyright (c) 2022-2026 seg3214 (https://github.com)
 * Licensed under the AGPL-3.0 license.
 *
 * DISCLAIMER: This tool is for educational purposes only.
 * The author is not responsible for account bans or system damage.
 */
#pragma once

void SetPHs();
void ResetPHs();
void Send_CMSG_CAST_SPELL(uint32_t* dataStorePtr, uint64_t* guid, int32_t SpellID, uint8_t CastCount, uint8_t unkFlags);
