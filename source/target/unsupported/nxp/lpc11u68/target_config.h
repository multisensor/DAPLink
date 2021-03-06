/**
 * @file    target_config.h
 * @brief   Target configuration for the lpc11u68
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TARGET_CONFIG_H
#define TARGET_CONFIG_H

#define FLASH_SECTOR_SIZE           (1024)  /* 1024 is assuming that this value is in number of uint32_t's */
#define TARGET_AUTO_INCREMENT_PAGE_SIZE    (0x1000)

#define MIN_FLASH_ADDRESS 0x00000
#define MAX_FLASH_ADDRESS 0x10000

#define MIN_RAM_ADDRESS 0x20000000
#define MAX_RAM_ADDRESS 0x20030000


#endif
