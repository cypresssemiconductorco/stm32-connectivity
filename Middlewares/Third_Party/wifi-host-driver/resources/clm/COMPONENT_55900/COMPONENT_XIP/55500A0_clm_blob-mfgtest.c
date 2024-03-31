/*
 * Copyright (c) 2019, Cypress Semiconductor Corporation, All Rights Reserved
 * SPDX-License-Identifier: LicenseRef-PBL
 *
 * This file and the related binary are licensed under the
 * Permissive Binary License, Version 1.0 (the "License");
 * you may not use these files except in compliance with the License.
 *
 * You may obtain a copy of the License here:
 * LICENSE-permissive-binary-license-1.0.txt and at
 * https://www.mbed.com/licenses/PBL-1.0
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "wiced_resource.h"

#ifdef WLAN_MFG_FIRMWARE
#if defined(CY_STORAGE_WIFI_DATA)
CY_SECTION_WHD(CY_STORAGE_WIFI_DATA) __attribute__((used))
#endif
const unsigned char wifi_mfg_firmware_clm_blob_data[1435] = {
        66, 76, 79, 66, 60, 0, 0, 0, 83, 67, 25, 251, 1, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 0, 60, 0, 0, 0, 91, 5, 0, 0, 251, 55, 161, 127, 0, 0, 0, 0,
        0, 0, 0, 0, 151, 5, 0, 0, 4, 0, 0, 0, 42, 234, 69, 158, 0, 0, 0, 0,
        67, 76, 77, 32, 68, 65, 84, 65, 0, 0, 20, 0, 0, 0, 73, 70, 88, 46, 84,
        87, 73, 71, 95, 49, 56, 95, 53, 51, 95, 50, 49, 50, 0, 0, 49, 46, 52,
        57, 46, 53, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 67, 108, 109, 73,
        109, 112, 111, 114, 116, 58, 32, 49, 46, 52, 56, 46, 48, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 49, 32, 50, 51, 47, 48, 53, 47, 49,
        50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 90,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 112, 0, 0, 0, 1, 1, 1, 11,
        1, 13, 1, 14, 2, 10, 11, 11, 11, 13, 36, 48, 36, 60, 36, 64, 36, 140,
        36, 144, 36, 165, 52, 60, 64, 64, 64, 100, 100, 100, 100, 144, 100,
        165, 104, 128, 104, 165, 132, 140, 132, 144, 149, 165, 1, 93, 1, 233,
        97, 109, 113, 117, 121, 185, 189, 233, 252, 4, 0, 0, 20, 5, 0, 0, 132,
        0, 0, 0, 212, 4, 0, 0, 60, 2, 0, 0, 134, 4, 0, 0, 78, 2, 0, 0, 19, 3,
        0, 0, 157, 2, 0, 0, 116, 3, 0, 0, 212, 1, 0, 0, 104, 0, 0, 0, 124, 0,
        0, 0, 255, 80, 129, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 4, 0, 0, 0, 0,
        0, 0, 218, 4, 0, 0, 4, 5, 0, 0, 28, 5, 0, 0, 36, 5, 0, 0, 12, 5, 0,
        0, 24, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 14, 0, 0, 0, 82, 0, 0, 0, 32, 2,
        0, 0, 178, 4, 0, 0, 52, 5, 0, 0, 156, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 60, 5, 0, 0, 68, 5, 0, 0, 44, 5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 4, 0, 0,
        53, 4, 0, 0, 5, 0, 0, 0, 220, 1, 0, 0, 35, 97, 0, 4, 0, 4, 0, 8, 0,
        0, 0, 0, 68, 69, 0, 1, 1, 1, 1, 40, 0, 0, 0, 0, 74, 80, 0, 2, 2, 2,
        2, 8, 0, 0, 0, 0, 85, 83, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 88, 90, 0, 3,
        3, 3, 3, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1,
        0, 2, 1, 1, 0, 3, 1, 1, 0, 4, 1, 1, 0, 5, 1, 1, 0, 6, 1, 1, 0, 1, 1,
        1, 2, 1, 3, 2, 10, 23, 1, 11, 2, 11, 23, 1, 12, 1, 25, 0, 0, 255, 1,
        30, 1, 0, 5, 92, 0, 2, 86, 0, 3, 126, 4, 0, 92, 5, 2, 86, 5, 3, 1, 0,
        255, 1, 30, 2, 0, 1, 120, 2, 0, 1, 0, 255, 1, 23, 2, 0, 1, 60, 2, 0,
        1, 0, 0, 1, 23, 2, 0, 5, 92, 0, 2, 86, 0, 3, 126, 4, 0, 92, 6, 2, 86,
        6, 3, 2, 0, 255, 1, 30, 3, 0, 1, 120, 3, 0, 4, 3, 86, 0, 1, 126, 4,
        1, 86, 5, 1, 128, 4, 7, 98, 0, 1, 78, 0, 2, 86, 0, 6, 126, 4, 8, 98,
        5, 1, 78, 5, 2, 86, 5, 6, 4, 1, 60, 2, 1, 128, 4, 1, 60, 2, 8, 4, 1,
        60, 2, 1, 128, 4, 1, 60, 2, 8, 4, 3, 86, 0, 1, 126, 4, 1, 86, 6, 1,
        128, 4, 7, 98, 0, 1, 78, 0, 2, 86, 0, 6, 126, 4, 8, 98, 6, 1, 78, 6,
        2, 86, 6, 6, 4, 3, 120, 0, 1, 120, 4, 1, 120, 6, 1, 128, 4, 4, 120,
        0, 4, 120, 2, 5, 120, 4, 7, 120, 6, 4, 5, 2, 255, 2, 30, 11, 30, 23,
        0, 6, 120, 7, 1, 120, 13, 1, 120, 15, 1, 120, 19, 1, 120, 22, 1, 120,
        23, 1, 3, 1, 255, 2, 24, 10, 30, 23, 0, 6, 62, 7, 1, 90, 13, 1, 80,
        15, 1, 90, 19, 1, 86, 21, 1, 118, 23, 1, 4, 2, 255, 2, 23, 9, 30, 17,
        0, 1, 60, 11, 1, 6, 2, 1, 2, 23, 9, 30, 18, 0, 6, 62, 7, 1, 90, 13,
        1, 80, 15, 1, 90, 19, 1, 86, 22, 1, 118, 23, 1, 4, 6, 120, 7, 0, 120,
        13, 0, 120, 15, 0, 120, 19, 0, 120, 22, 0, 120, 23, 0, 128, 4, 10, 120,
        7, 4, 120, 8, 3, 120, 12, 5, 120, 13, 4, 120, 14, 4, 120, 16, 4, 120,
        19, 4, 120, 20, 3, 120, 22, 4, 120, 23, 4, 4, 6, 96, 7, 0, 90, 13, 0,
        80, 15, 0, 90, 19, 0, 86, 21, 0, 118, 23, 0, 128, 4, 12, 96, 7, 8, 90,
        13, 8, 80, 14, 0, 90, 14, 1, 72, 14, 2, 80, 15, 5, 80, 16, 0, 90, 16,
        1, 72, 16, 2, 90, 19, 8, 86, 21, 8, 118, 23, 8, 4, 1, 60, 11, 0, 128,
        4, 1, 60, 11, 8, 4, 6, 96, 7, 0, 90, 13, 0, 80, 15, 0, 90, 19, 0, 86,
        22, 0, 118, 23, 0, 128, 4, 12, 96, 7, 8, 90, 13, 8, 80, 14, 0, 90, 14,
        1, 72, 14, 2, 80, 15, 5, 80, 16, 0, 90, 16, 1, 72, 16, 2, 90, 19, 8,
        86, 22, 8, 118, 23, 8, 7, 0, 255, 1, 30, 25, 0, 1, 90, 25, 1, 4, 5,
        96, 24, 0, 90, 26, 0, 80, 27, 0, 90, 28, 0, 118, 29, 0, 128, 4, 7, 96,
        24, 8, 90, 26, 8, 90, 27, 1, 72, 27, 2, 80, 27, 6, 90, 28, 8, 118, 29,
        8, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16,
        17, 18, 19, 20, 21, 22, 23, 4, 0, 1, 2, 3, 8, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 8, 4, 5, 6,
        7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
        8, 4, 5, 6, 7, 8, 9, 10, 11, 1, 0, 1, 4, 1, 5, 1, 6, 3, 0, 4, 5, 3,
        1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 1, 2,
        3, 9, 17, 23, 50, 48, 50, 51, 45, 48, 56, 45, 50, 50, 32, 50, 50, 58,
        50, 49, 58, 53, 50, 0, 60, 84, 73, 77, 69, 83, 84, 65, 77, 80, 62, 0,
        0, 0, 1, 0, 0, 0, 76, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 3, 0, 0, 0, 79, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 88, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 14, 1, 36, 64, 4, 100, 144,
        4, 149, 165, 4, 1, 233, 4, 204, 216, 0, 0
};
const resource_hnd_t wifi_mfg_firmware_clm_blob = { RESOURCE_IN_MEMORY, 1435, {.mem = { (const char *) wifi_mfg_firmware_clm_blob_data }}};
#endif /* WLAN_MFG_FIRMWARE */
