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

#ifndef WLAN_MFG_FIRMWARE
#if defined(CY_STORAGE_WIFI_DATA)
CY_SECTION_WHD(CY_STORAGE_WIFI_DATA) __attribute__((used))
#endif
const unsigned char wifi_firmware_clm_blob_data[6982] = {
        66, 76, 79, 66, 60, 0, 0, 0, 19, 160, 183, 218, 1, 0, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 60, 0, 0, 0, 6, 27, 0, 0, 35, 233, 110, 219, 0, 0, 0,
        0, 0, 0, 0, 0, 66, 27, 0, 0, 4, 0, 0, 0, 76, 249, 168, 102, 0, 0, 0,
        0, 67, 76, 77, 32, 68, 65, 84, 65, 0, 0, 20, 0, 0, 0, 76, 97, 105, 114,
        100, 46, 83, 111, 110, 97, 73, 70, 53, 55, 51, 0, 0, 0, 0, 0, 49, 46,
        52, 57, 46, 53, 0, 0, 0, 0, 0, 0, 0, 0, 60, 1, 0, 0, 67, 108, 109, 73,
        109, 112, 111, 114, 116, 58, 32, 49, 46, 52, 56, 46, 48, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 52, 32, 50, 51, 47, 49, 48, 47, 50,
        48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 1, 1, 11, 1, 13, 2, 2, 3, 9, 10, 10, 11, 11, 36, 36,
        36, 40, 36, 48, 36, 64, 36, 116, 36, 136, 36, 140, 36, 144, 40, 40,
        40, 48, 44, 48, 44, 52, 44, 56, 52, 52, 52, 56, 52, 60, 52, 116, 56,
        56, 56, 60, 56, 64, 60, 60, 60, 100, 64, 64, 64, 100, 100, 100, 100,
        116, 100, 132, 100, 144, 104, 104, 104, 116, 104, 132, 108, 116, 108,
        132, 132, 132, 132, 136, 132, 140, 132, 144, 136, 136, 140, 140, 144,
        144, 149, 165, 1, 93, 1, 225, 1, 233, 97, 233, 229, 233, 3, 11, 38,
        38, 38, 46, 38, 54, 38, 62, 38, 175, 46, 46, 46, 54, 54, 54, 62, 62,
        62, 102, 102, 102, 102, 142, 110, 110, 110, 126, 110, 134, 118, 118,
        118, 126, 126, 126, 134, 134, 134, 142, 142, 142, 151, 151, 151, 159,
        159, 159, 3, 91, 3, 107, 115, 187, 115, 227, 195, 227, 42, 42, 42, 58,
        58, 58, 58, 106, 58, 122, 106, 106, 106, 122, 106, 138, 122, 122, 122,
        138, 122, 171, 138, 138, 155, 155, 7, 87, 7, 215, 140, 26, 0, 0, 164,
        26, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 84, 3, 0, 0, 80, 18, 0, 0, 109,
        3, 0, 0, 30, 5, 0, 0, 240, 3, 0, 0, 194, 5, 0, 0, 80, 2, 0, 0, 104,
        0, 0, 0, 112, 0, 0, 0, 255, 80, 129, 132, 84, 26, 0, 0, 0, 0, 0, 0,
        226, 0, 0, 0, 30, 1, 0, 0, 0, 0, 0, 0, 233, 18, 0, 0, 137, 19, 0, 0,
        0, 0, 0, 0, 217, 16, 0, 0, 0, 0, 0, 0, 108, 26, 0, 0, 148, 26, 0, 0,
        172, 26, 0, 0, 180, 26, 0, 0, 156, 26, 0, 0, 172, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 26, 0, 0, 76, 26, 0,
        0, 12, 0, 0, 0, 14, 0, 0, 0, 82, 0, 0, 0, 180, 2, 0, 0, 125, 23, 0,
        0, 196, 26, 0, 0, 41, 20, 0, 0, 44, 21, 0, 0, 62, 22, 0, 0, 0, 0, 0,
        0, 204, 26, 0, 0, 212, 26, 0, 0, 188, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 26, 0, 0, 100, 26, 0, 0, 74, 14, 0, 0,
        150, 14, 0, 0, 7, 0, 0, 0, 88, 2, 0, 0, 65, 85, 0, 0, 0, 0, 0, 41, 0,
        0, 0, 0, 67, 65, 0, 1, 1, 1, 1, 9, 0, 0, 1, 1, 68, 69, 0, 2, 2, 2, 2,
        41, 0, 0, 2, 2, 74, 80, 0, 3, 3, 3, 3, 41, 0, 0, 3, 3, 78, 90, 0, 4,
        4, 4, 4, 41, 0, 0, 4, 4, 85, 83, 0, 5, 5, 5, 5, 9, 0, 0, 5, 5, 88, 87,
        0, 6, 255, 6, 255, 8, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
        1, 0, 0, 1, 2, 0, 0, 1, 2, 1, 0, 2, 2, 0, 0, 2, 2, 1, 1, 1, 1, 0, 1,
        1, 2, 0, 1, 1, 2, 1, 1, 2, 2, 0, 1, 2, 2, 1, 2, 1, 1, 0, 2, 1, 2, 0,
        2, 1, 2, 1, 2, 2, 2, 0, 2, 2, 2, 1, 3, 1, 1, 0, 3, 1, 2, 0, 3, 1, 2,
        1, 3, 2, 2, 0, 3, 2, 2, 1, 4, 1, 1, 0, 4, 1, 2, 0, 4, 1, 2, 1, 4, 2,
        2, 0, 4, 2, 2, 1, 5, 1, 1, 0, 5, 1, 2, 0, 5, 1, 2, 1, 5, 2, 2, 0, 5,
        2, 2, 1, 6, 1, 1, 0, 6, 1, 2, 0, 6, 1, 2, 1, 6, 2, 2, 0, 6, 2, 2, 1,
        7, 1, 1, 0, 7, 1, 2, 0, 7, 1, 2, 1, 7, 2, 2, 0, 7, 2, 2, 1, 1, 1, 1,
        2, 4, 9, 23, 43, 47, 3, 11, 42, 47, 2, 13, 47, 1, 14, 2, 14, 47, 1,
        48, 1, 50, 1, 0, 255, 1, 36, 2, 0, 1, 76, 2, 0, 0, 0, 255, 1, 30, 1,
        0, 9, 64, 0, 3, 54, 0, 9, 70, 3, 3, 62, 3, 9, 126, 4, 0, 66, 5, 3, 58,
        5, 9, 56, 6, 3, 50, 6, 9, 1, 0, 255, 1, 30, 2, 0, 2, 66, 2, 3, 70, 2,
        9, 1, 0, 255, 1, 30, 2, 0, 2, 64, 2, 3, 70, 2, 9, 1, 0, 255, 1, 36,
        2, 0, 1, 76, 2, 0, 0, 0, 255, 1, 30, 1, 0, 9, 64, 0, 3, 54, 0, 9, 70,
        3, 3, 62, 3, 9, 126, 4, 0, 66, 5, 3, 58, 5, 9, 56, 6, 3, 50, 6, 9, 0,
        0, 255, 1, 30, 1, 0, 1, 40, 1, 0, 4, 3, 58, 2, 2, 76, 2, 4, 70, 2, 7,
        128, 4, 3, 68, 2, 15, 58, 2, 41, 70, 2, 46, 4, 15, 66, 0, 1, 36, 0,
        2, 64, 0, 4, 48, 0, 5, 46, 3, 2, 70, 3, 4, 58, 3, 7, 58, 4, 2, 126,
        4, 8, 46, 5, 2, 66, 5, 4, 58, 5, 7, 36, 6, 2, 56, 6, 4, 48, 6, 7, 128,
        4, 17, 66, 0, 27, 46, 0, 28, 36, 0, 41, 56, 0, 42, 48, 0, 47, 58, 3,
        14, 46, 3, 41, 68, 3, 42, 126, 4, 21, 58, 4, 41, 58, 5, 18, 50, 5, 28,
        46, 5, 41, 48, 6, 7, 38, 6, 28, 36, 6, 41, 46, 6, 42, 4, 3, 68, 2, 1,
        44, 2, 2, 56, 2, 6, 128, 4, 3, 56, 2, 19, 68, 2, 39, 44, 2, 41, 4, 3,
        54, 2, 2, 64, 2, 4, 66, 2, 7, 128, 4, 3, 54, 2, 4, 66, 2, 11, 44, 2,
        33, 4, 3, 58, 2, 2, 76, 2, 4, 70, 2, 7, 128, 4, 3, 68, 2, 15, 58, 2,
        41, 70, 2, 46, 4, 14, 36, 0, 2, 64, 0, 4, 48, 0, 7, 46, 3, 2, 70, 3,
        4, 58, 3, 7, 58, 4, 2, 126, 4, 8, 46, 5, 2, 66, 5, 4, 58, 5, 7, 36,
        6, 2, 56, 6, 4, 48, 6, 7, 128, 4, 16, 48, 0, 7, 46, 0, 28, 36, 0, 41,
        56, 0, 42, 58, 3, 14, 46, 3, 41, 68, 3, 42, 126, 4, 21, 58, 4, 41, 58,
        5, 18, 50, 5, 28, 46, 5, 41, 48, 6, 7, 38, 6, 28, 36, 6, 41, 46, 6,
        42, 4, 1, 40, 1, 10, 128, 4, 2, 32, 1, 15, 40, 1, 32, 3, 1, 255, 4,
        23, 10, 30, 32, 30, 42, 36, 47, 0, 3, 68, 11, 4, 68, 42, 4, 72, 47,
        4, 2, 2, 255, 4, 23, 9, 24, 23, 24, 43, 30, 47, 0, 11, 46, 8, 4, 44,
        17, 4, 62, 21, 4, 56, 28, 4, 66, 35, 4, 80, 38, 4, 80, 40, 4, 58, 44,
        4, 46, 45, 4, 80, 46, 4, 108, 47, 4, 4, 1, 255, 2, 24, 13, 30, 47, 0,
        2, 68, 13, 4, 38, 47, 4, 5, 2, 255, 1, 24, 14, 0, 2, 52, 10, 4, 70,
        34, 4, 6, 1, 255, 3, 23, 10, 30, 34, 36, 47, 0, 3, 68, 13, 4, 84, 46,
        4, 72, 47, 4, 6, 2, 255, 2, 24, 14, 30, 47, 0, 11, 50, 7, 4, 68, 15,
        4, 72, 17, 4, 84, 22, 4, 56, 30, 4, 64, 35, 4, 84, 39, 4, 64, 44, 4,
        46, 45, 4, 84, 46, 4, 108, 47, 4, 4, 11, 72, 11, 0, 46, 11, 1, 58, 11,
        2, 72, 41, 0, 46, 41, 1, 58, 41, 2, 68, 45, 0, 46, 45, 1, 58, 45, 2,
        60, 47, 1, 72, 47, 3, 5, 17, 72, 1, 0, 48, 1, 1, 60, 1, 2, 80, 7, 0,
        48, 7, 1, 60, 7, 2, 64, 10, 0, 44, 10, 1, 56, 10, 2, 80, 13, 0, 48,
        13, 1, 60, 13, 2, 72, 19, 0, 48, 19, 1, 60, 19, 2, 56, 23, 1, 68, 23,
        3, 12, 11, 72, 0, 0, 50, 0, 1, 62, 0, 2, 62, 2, 0, 42, 2, 1, 54, 2,
        2, 62, 5, 0, 40, 5, 1, 52, 5, 2, 56, 12, 1, 68, 12, 3, 132, 4, 13, 58,
        11, 19, 72, 11, 39, 46, 11, 41, 72, 41, 27, 58, 41, 40, 46, 41, 41,
        58, 42, 8, 72, 42, 29, 68, 45, 27, 58, 45, 40, 46, 45, 41, 72, 47, 24,
        60, 47, 41, 133, 4, 18, 60, 1, 40, 48, 1, 41, 72, 1, 43, 60, 3, 17,
        60, 7, 40, 48, 7, 41, 80, 7, 43, 56, 10, 22, 44, 10, 41, 64, 10, 43,
        60, 13, 22, 48, 13, 41, 80, 13, 43, 60, 19, 22, 48, 19, 41, 72, 19,
        43, 68, 23, 26, 56, 23, 41, 136, 4, 12, 62, 0, 25, 50, 0, 41, 72, 0,
        45, 54, 2, 25, 62, 2, 27, 42, 2, 41, 62, 3, 34, 52, 5, 25, 62, 5, 27,
        40, 5, 41, 68, 12, 30, 56, 12, 41, 4, 24, 38, 7, 1, 50, 7, 3, 40, 16,
        1, 52, 16, 3, 52, 22, 1, 64, 22, 3, 36, 29, 1, 48, 29, 3, 38, 31, 1,
        50, 31, 3, 46, 35, 1, 58, 35, 3, 68, 38, 1, 82, 38, 3, 68, 40, 1, 82,
        40, 3, 54, 44, 1, 42, 44, 3, 14, 45, 1, 26, 45, 3, 66, 46, 1, 82, 46,
        3, 66, 47, 1, 108, 47, 3, 5, 20, 28, 1, 1, 40, 1, 3, 50, 6, 1, 62, 6,
        3, 54, 8, 1, 66, 8, 3, 18, 9, 1, 30, 9, 3, 10, 11, 1, 22, 11, 3, 54,
        13, 1, 66, 13, 3, 36, 19, 1, 48, 19, 3, 60, 21, 1, 84, 21, 3, 52, 22,
        1, 66, 22, 3, 62, 24, 1, 108, 24, 3, 12, 10, 30, 0, 1, 42, 0, 3, 14,
        2, 1, 26, 2, 3, 12, 5, 1, 28, 5, 3, 52, 11, 1, 64, 11, 3, 46, 12, 1,
        58, 12, 3, 132, 4, 49, 38, 7, 41, 50, 7, 46, 16, 9, 33, 26, 9, 35, 38,
        9, 36, 40, 16, 41, 52, 16, 46, 66, 21, 36, 52, 21, 41, 64, 21, 46, 44,
        22, 33, 54, 22, 35, 62, 27, 36, 52, 27, 41, 64, 27, 46, 34, 29, 33,
        42, 29, 35, 52, 29, 36, 36, 29, 41, 48, 29, 46, 50, 31, 10, 64, 31,
        36, 38, 31, 41, 44, 32, 33, 46, 35, 41, 58, 35, 46, 54, 36, 35, 68,
        36, 36, 68, 38, 41, 82, 38, 46, 68, 40, 5, 54, 40, 35, 82, 40, 46, 44,
        41, 33, 46, 44, 35, 62, 44, 36, 54, 44, 41, 42, 44, 46, 28, 45, 33,
        34, 45, 35, 42, 45, 36, 14, 45, 41, 26, 45, 46, 66, 46, 5, 42, 46, 33,
        54, 46, 35, 82, 46, 46, 108, 47, 24, 66, 47, 41, 133, 4, 45, 14, 1,
        33, 28, 1, 41, 40, 1, 46, 26, 2, 35, 40, 2, 36, 52, 2, 37, 16, 6, 33,
        50, 6, 41, 62, 6, 46, 54, 8, 4, 42, 8, 33, 62, 8, 36, 64, 8, 37, 66,
        8, 46, 30, 9, 10, 26, 9, 33, 44, 9, 36, 50, 9, 37, 18, 9, 41, 28, 11,
        33, 34, 11, 35, 50, 11, 36, 42, 11, 37, 10, 11, 41, 22, 11, 46, 68,
        13, 1, 54, 13, 4, 38, 13, 33, 66, 13, 46, 62, 19, 1, 52, 19, 35, 36,
        19, 41, 48, 19, 46, 42, 20, 33, 84, 21, 12, 54, 21, 35, 66, 21, 36,
        60, 21, 41, 108, 22, 0, 52, 22, 41, 66, 22, 46, 108, 23, 1, 62, 24,
        4, 46, 24, 33, 108, 24, 46, 136, 4, 27, 42, 0, 13, 16, 0, 33, 22, 0,
        35, 36, 0, 36, 30, 0, 41, 44, 1, 37, 42, 2, 36, 28, 2, 38, 14, 2, 41,
        26, 2, 46, 34, 3, 0, 36, 5, 36, 40, 5, 37, 26, 5, 38, 12, 5, 41, 28,
        5, 46, 84, 11, 2, 52, 11, 4, 42, 11, 33, 66, 11, 36, 64, 11, 46, 108,
        12, 1, 62, 12, 33, 64, 12, 35, 66, 12, 38, 46, 12, 41, 58, 12, 46, 4,
        9, 72, 12, 0, 46, 12, 1, 58, 12, 2, 68, 45, 0, 46, 45, 1, 58, 45, 2,
        38, 47, 0, 14, 47, 1, 26, 47, 2, 5, 18, 72, 1, 0, 48, 1, 1, 60, 1, 2,
        80, 7, 0, 48, 7, 1, 60, 7, 2, 64, 10, 0, 44, 10, 1, 56, 10, 2, 80, 14,
        0, 48, 14, 1, 60, 14, 2, 72, 19, 0, 48, 19, 1, 60, 19, 2, 38, 23, 0,
        14, 23, 1, 26, 23, 2, 12, 15, 72, 0, 0, 50, 0, 1, 62, 0, 2, 62, 2, 0,
        42, 2, 1, 54, 2, 2, 62, 5, 0, 40, 5, 1, 52, 5, 2, 74, 8, 0, 50, 8, 1,
        62, 8, 2, 38, 12, 0, 14, 12, 1, 26, 12, 2, 132, 4, 11, 72, 12, 27, 58,
        12, 40, 46, 12, 41, 58, 13, 8, 72, 13, 29, 68, 45, 27, 58, 45, 40, 46,
        45, 41, 26, 47, 19, 38, 47, 39, 14, 47, 41, 133, 4, 20, 60, 1, 40, 48,
        1, 41, 72, 1, 43, 60, 3, 17, 60, 7, 40, 48, 7, 41, 80, 7, 43, 56, 10,
        22, 44, 10, 41, 64, 10, 43, 60, 14, 40, 48, 14, 41, 80, 14, 43, 60,
        15, 17, 60, 19, 40, 48, 19, 41, 72, 19, 43, 26, 23, 22, 14, 23, 41,
        38, 23, 43, 136, 4, 16, 62, 0, 25, 50, 0, 41, 72, 0, 45, 54, 2, 25,
        62, 2, 27, 42, 2, 41, 62, 3, 34, 52, 5, 25, 62, 5, 27, 40, 5, 41, 62,
        8, 25, 50, 8, 41, 74, 8, 45, 26, 12, 25, 14, 12, 41, 38, 12, 45, 4,
        4, 40, 10, 1, 52, 10, 3, 58, 34, 1, 70, 34, 3, 5, 4, 42, 4, 1, 54, 4,
        3, 56, 12, 1, 68, 12, 3, 12, 4, 42, 1, 1, 54, 1, 3, 54, 7, 1, 66, 7,
        3, 132, 4, 15, 50, 9, 36, 40, 9, 41, 52, 9, 46, 28, 10, 33, 38, 10,
        35, 42, 20, 36, 40, 20, 41, 52, 20, 46, 50, 26, 36, 40, 26, 41, 52,
        26, 46, 58, 34, 4, 42, 34, 33, 66, 34, 36, 70, 34, 46, 133, 4, 12, 14,
        4, 33, 26, 4, 35, 38, 4, 36, 46, 4, 37, 42, 4, 41, 54, 4, 46, 34, 12,
        33, 38, 12, 35, 54, 12, 36, 62, 12, 37, 56, 12, 41, 68, 12, 46, 136,
        4, 14, 246, 1, 33, 12, 1, 35, 30, 1, 36, 40, 1, 37, 48, 1, 38, 42, 1,
        41, 54, 1, 46, 22, 7, 33, 30, 7, 35, 40, 7, 36, 56, 7, 37, 64, 7, 38,
        54, 7, 41, 66, 7, 46, 4, 10, 72, 12, 0, 46, 12, 1, 58, 12, 2, 68, 45,
        0, 46, 45, 1, 58, 45, 2, 66, 46, 1, 84, 46, 3, 60, 47, 1, 72, 47, 3,
        5, 19, 72, 1, 0, 48, 1, 1, 60, 1, 2, 80, 7, 0, 48, 7, 1, 60, 7, 2, 64,
        10, 0, 44, 10, 1, 56, 10, 2, 80, 14, 0, 48, 14, 1, 60, 14, 2, 72, 19,
        0, 48, 19, 1, 60, 19, 2, 60, 21, 1, 84, 21, 3, 56, 23, 1, 68, 23, 3,
        12, 13, 72, 0, 0, 50, 0, 1, 62, 0, 2, 62, 2, 0, 42, 2, 1, 54, 2, 2,
        62, 6, 0, 40, 6, 1, 52, 6, 2, 52, 11, 1, 64, 11, 3, 56, 12, 1, 68, 12,
        3, 132, 4, 15, 72, 12, 27, 58, 12, 40, 46, 12, 41, 58, 13, 8, 72, 13,
        29, 68, 45, 27, 58, 45, 40, 46, 45, 41, 42, 46, 33, 54, 46, 35, 68,
        46, 36, 66, 46, 41, 84, 46, 46, 72, 47, 24, 60, 47, 41, 133, 4, 25,
        60, 1, 40, 48, 1, 41, 72, 1, 43, 60, 3, 17, 60, 7, 40, 48, 7, 41, 80,
        7, 43, 56, 10, 22, 44, 10, 41, 64, 10, 43, 60, 14, 40, 48, 14, 41, 80,
        14, 43, 60, 15, 17, 60, 19, 40, 48, 19, 41, 72, 19, 43, 42, 21, 33,
        54, 21, 35, 66, 21, 36, 126, 21, 37, 60, 21, 41, 84, 21, 46, 68, 23,
        26, 56, 23, 41, 136, 4, 18, 62, 0, 25, 50, 0, 41, 72, 0, 45, 54, 2,
        25, 62, 2, 27, 42, 2, 41, 62, 4, 34, 52, 6, 23, 62, 6, 27, 40, 6, 41,
        52, 7, 31, 84, 11, 2, 42, 11, 33, 66, 11, 36, 52, 11, 44, 64, 11, 46,
        68, 12, 30, 56, 12, 41, 4, 24, 38, 7, 1, 50, 7, 3, 56, 15, 1, 68, 15,
        3, 66, 19, 1, 84, 19, 3, 58, 27, 1, 70, 27, 3, 36, 29, 1, 48, 29, 3,
        38, 31, 1, 50, 31, 3, 46, 35, 1, 58, 35, 3, 66, 39, 1, 84, 39, 3, 42,
        44, 1, 58, 44, 3, 14, 45, 1, 28, 45, 3, 66, 46, 1, 84, 46, 3, 66, 47,
        1, 108, 47, 3, 5, 24, 26, 1, 1, 40, 1, 3, 56, 6, 1, 68, 6, 3, 54, 8,
        1, 66, 8, 3, 18, 9, 1, 30, 9, 3, 10, 11, 1, 22, 11, 3, 50, 13, 1, 62,
        13, 3, 58, 16, 1, 84, 16, 3, 54, 18, 1, 66, 18, 3, 36, 19, 1, 48, 19,
        3, 60, 21, 1, 84, 21, 3, 52, 22, 1, 64, 22, 3, 60, 24, 1, 108, 24, 3,
        12, 12, 32, 0, 1, 44, 0, 3, 14, 2, 1, 26, 2, 3, 16, 5, 1, 28, 5, 3,
        46, 8, 1, 58, 8, 3, 52, 11, 1, 64, 11, 3, 48, 12, 1, 60, 12, 3, 132,
        4, 56, 32, 7, 33, 44, 7, 35, 52, 7, 36, 38, 7, 41, 50, 7, 46, 42, 15,
        33, 54, 15, 35, 66, 15, 36, 56, 15, 41, 68, 15, 46, 56, 17, 35, 68,
        17, 36, 66, 17, 41, 84, 17, 46, 44, 18, 33, 66, 20, 5, 54, 20, 35, 84,
        20, 46, 66, 24, 41, 84, 24, 46, 46, 25, 33, 56, 25, 35, 68, 25, 36,
        58, 27, 41, 70, 27, 46, 34, 29, 33, 42, 29, 35, 52, 29, 36, 36, 29,
        41, 48, 29, 46, 50, 31, 20, 38, 31, 41, 44, 33, 33, 60, 35, 36, 46,
        35, 41, 58, 35, 46, 56, 37, 35, 68, 39, 36, 66, 39, 41, 84, 39, 46,
        40, 44, 33, 52, 44, 35, 56, 44, 36, 42, 44, 41, 58, 44, 46, 28, 45,
        9, 34, 45, 35, 42, 45, 36, 14, 45, 41, 42, 46, 33, 54, 46, 35, 68, 46,
        36, 66, 46, 41, 84, 46, 46, 108, 47, 24, 66, 47, 41, 133, 4, 53, 42,
        1, 35, 50, 1, 36, 54, 1, 37, 26, 1, 41, 40, 1, 46, 42, 3, 33, 56, 6,
        41, 68, 6, 46, 54, 7, 35, 66, 7, 36, 84, 7, 37, 54, 8, 41, 66, 8, 46,
        26, 9, 33, 32, 9, 35, 44, 9, 36, 50, 9, 37, 18, 9, 41, 30, 9, 46, 28,
        11, 33, 34, 11, 35, 50, 11, 36, 42, 11, 37, 10, 11, 41, 22, 11, 46,
        62, 13, 12, 50, 13, 41, 44, 14, 33, 54, 14, 35, 66, 14, 36, 58, 16,
        41, 84, 16, 46, 84, 17, 37, 54, 18, 41, 66, 18, 46, 62, 19, 1, 52, 19,
        35, 36, 19, 41, 48, 19, 46, 42, 20, 33, 54, 21, 35, 66, 21, 36, 126,
        21, 37, 60, 21, 41, 84, 21, 46, 108, 22, 0, 52, 22, 41, 64, 22, 46,
        108, 23, 1, 46, 24, 33, 62, 24, 35, 60, 24, 41, 108, 24, 46, 136, 4,
        30, 38, 0, 0, 44, 0, 11, 42, 0, 38, 32, 0, 41, 46, 1, 37, 42, 2, 36,
        28, 2, 38, 14, 2, 41, 26, 2, 46, 34, 3, 0, 36, 5, 36, 40, 5, 37, 26,
        5, 38, 16, 5, 41, 28, 5, 46, 54, 8, 35, 62, 8, 38, 46, 8, 41, 58, 8,
        46, 42, 9, 33, 66, 9, 36, 84, 9, 37, 52, 11, 4, 84, 11, 38, 64, 11,
        46, 64, 12, 0, 108, 12, 1, 66, 12, 38, 48, 12, 41, 60, 12, 46, 7, 0,
        255, 1, 20, 48, 0, 1, 52, 48, 6, 8, 0, 255, 2, 20, 48, 30, 51, 0, 2,
        254, 49, 6, 252, 52, 6, 7, 0, 255, 1, 20, 48, 0, 1, 64, 48, 6, 7, 0,
        255, 1, 20, 48, 0, 1, 52, 48, 6, 7, 0, 255, 1, 20, 48, 0, 1, 52, 48,
        6, 8, 0, 255, 2, 20, 48, 30, 51, 0, 2, 254, 49, 6, 252, 52, 6, 4, 2,
        46, 48, 1, 58, 48, 2, 5, 2, 46, 25, 1, 58, 25, 3, 12, 3, 62, 13, 0,
        46, 13, 1, 58, 13, 2, 132, 4, 5, 22, 48, 33, 30, 48, 35, 38, 48, 36,
        46, 48, 41, 58, 48, 46, 133, 4, 4, 46, 25, 5, 58, 25, 12, 26, 25, 33,
        38, 25, 35, 136, 4, 7, 58, 13, 3, 62, 13, 27, 24, 13, 33, 36, 13, 35,
        48, 13, 36, 60, 13, 38, 46, 13, 41, 4, 2, 6, 50, 4, 250, 50, 5, 5, 6,
        4, 26, 4, 16, 26, 5, 4, 27, 4, 16, 27, 5, 2, 29, 4, 14, 29, 5, 12, 2,
        14, 14, 5, 26, 14, 6, 132, 4, 5, 222, 50, 33, 236, 50, 35, 248, 50,
        36, 250, 50, 41, 6, 50, 46, 133, 4, 14, 224, 26, 33, 238, 26, 35, 248,
        26, 36, 6, 26, 37, 4, 26, 41, 16, 26, 46, 4, 27, 41, 16, 27, 46, 224,
        28, 33, 238, 28, 35, 248, 28, 36, 6, 28, 37, 2, 29, 41, 14, 29, 46,
        136, 4, 7, 226, 14, 33, 236, 14, 35, 246, 14, 36, 6, 14, 37, 16, 14,
        38, 14, 14, 41, 26, 14, 46, 4, 3, 98, 48, 0, 50, 48, 3, 38, 48, 5, 5,
        3, 98, 25, 0, 56, 25, 2, 44, 25, 4, 12, 3, 98, 13, 0, 58, 13, 3, 46,
        13, 5, 132, 4, 4, 50, 48, 19, 98, 48, 27, 54, 48, 29, 38, 48, 41, 133,
        4, 5, 54, 25, 15, 98, 25, 27, 50, 25, 37, 56, 25, 40, 44, 25, 41, 136,
        4, 4, 50, 13, 15, 46, 13, 16, 98, 13, 27, 58, 13, 40, 4, 2, 44, 48,
        1, 56, 48, 2, 5, 2, 44, 25, 1, 56, 25, 3, 12, 2, 44, 13, 1, 56, 13,
        4, 132, 4, 5, 24, 48, 33, 34, 48, 35, 42, 48, 36, 44, 48, 41, 56, 48,
        46, 133, 4, 6, 12, 25, 33, 22, 25, 35, 38, 25, 36, 46, 25, 37, 44, 25,
        41, 56, 25, 46, 136, 4, 7, 4, 13, 33, 14, 13, 35, 26, 13, 36, 40, 13,
        37, 46, 13, 38, 44, 13, 41, 56, 13, 46, 4, 2, 46, 48, 1, 58, 48, 2,
        5, 2, 46, 25, 1, 58, 25, 3, 12, 3, 62, 13, 0, 46, 13, 1, 58, 13, 2,
        132, 4, 5, 22, 48, 33, 30, 48, 35, 38, 48, 36, 46, 48, 41, 58, 48, 46,
        133, 4, 4, 46, 25, 5, 58, 25, 12, 26, 25, 33, 38, 25, 35, 136, 4, 7,
        58, 13, 3, 62, 13, 27, 24, 13, 33, 36, 13, 35, 48, 13, 36, 60, 13, 38,
        46, 13, 41, 4, 2, 6, 50, 4, 250, 50, 5, 5, 6, 4, 26, 4, 16, 26, 5, 4,
        27, 4, 16, 27, 5, 4, 29, 4, 14, 29, 5, 12, 2, 16, 14, 5, 26, 14, 6,
        132, 4, 5, 222, 50, 33, 236, 50, 35, 248, 50, 36, 250, 50, 41, 6, 50,
        46, 133, 4, 14, 224, 26, 33, 238, 26, 35, 248, 26, 36, 6, 26, 37, 4,
        26, 41, 16, 26, 46, 4, 27, 41, 16, 27, 46, 224, 28, 33, 238, 28, 35,
        248, 28, 36, 6, 28, 37, 4, 29, 41, 14, 29, 46, 136, 4, 6, 16, 14, 6,
        226, 14, 33, 236, 14, 35, 246, 14, 36, 6, 14, 37, 26, 14, 46, 12, 0,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 17, 18, 19,
        20, 21, 22, 23, 28, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
        84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99, 90, 91, 4, 0,
        1, 2, 3, 4, 24, 25, 26, 27, 44, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55,
        56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 46, 47, 58, 59, 70,
        71, 48, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
        39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
        60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 46, 47, 58, 59, 70, 71, 56,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 28, 29, 30, 31, 32, 33, 34,
        35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53,
        54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 22, 23, 46,
        47, 58, 59, 70, 71, 60, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24,
        25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
        42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62,
        63, 64, 65, 66, 67, 68, 69, 22, 23, 46, 47, 58, 59, 70, 71, 8, 4, 5,
        6, 7, 8, 9, 10, 11, 88, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24,
        25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
        42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62,
        63, 64, 65, 66, 67, 68, 69, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
        82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99, 22,
        23, 46, 47, 58, 59, 90, 91, 70, 71, 12, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 23, 28, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
        83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99, 90, 91,
        44, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
        44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64,
        65, 66, 67, 68, 69, 46, 47, 58, 59, 70, 71, 56, 12, 13, 14, 15, 16,
        17, 18, 19, 20, 21, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
        40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 22, 23, 46, 47, 58, 59, 70, 71,
        8, 4, 5, 6, 7, 8, 9, 10, 11, 20, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 22, 23, 28, 72, 73, 74, 75, 76, 77, 78,
        79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97,
        98, 99, 90, 91, 44, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
        40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 46, 47, 58, 59, 70, 71, 64, 4, 5,
        6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 28, 29,
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67,
        68, 69, 22, 23, 46, 47, 58, 59, 70, 71, 20, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 28, 72, 73, 74, 75,
        76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94,
        95, 96, 97, 98, 99, 90, 91, 44, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55,
        56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 46, 47, 58, 59, 70,
        71, 64, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
        44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64,
        65, 66, 67, 68, 69, 22, 23, 46, 47, 58, 59, 70, 71, 12, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 22, 23, 28, 72, 73, 74, 75, 76, 77, 78,
        79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97,
        98, 99, 90, 91, 56, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 28, 29,
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67,
        68, 69, 22, 23, 46, 47, 58, 59, 70, 71, 64, 28, 29, 30, 31, 32, 33,
        34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52,
        53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 80, 81,
        82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99, 46,
        47, 58, 59, 90, 91, 70, 71, 76, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
        44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64,
        65, 66, 67, 68, 69, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93,
        94, 95, 96, 97, 98, 99, 22, 23, 46, 47, 58, 59, 90, 91, 70, 71, 8, 72,
        73, 74, 75, 76, 77, 78, 79, 8, 4, 5, 6, 7, 8, 9, 10, 11, 20, 4, 5, 6,
        7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 28,
        72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
        89, 92, 93, 94, 95, 96, 97, 98, 99, 90, 91, 64, 28, 29, 30, 31, 32,
        33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51,
        52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99,
        46, 47, 58, 59, 90, 91, 70, 71, 64, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
        14, 15, 16, 17, 18, 19, 20, 21, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55,
        56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 22, 23, 46, 47, 58,
        59, 70, 71, 8, 72, 73, 74, 75, 76, 77, 78, 79, 84, 4, 5, 6, 7, 8, 9,
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 28, 29, 30, 31, 32,
        33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51,
        52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94, 95, 96, 97, 98, 99,
        22, 23, 46, 47, 58, 59, 90, 91, 70, 71, 20, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 28, 72, 73, 74, 75,
        76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93, 94,
        95, 96, 97, 98, 99, 90, 91, 44, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40, 41, 42, 43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55,
        56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 46, 47, 58, 59, 70,
        71, 64, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
        43, 44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63,
        64, 65, 66, 67, 68, 69, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92,
        93, 94, 95, 96, 97, 98, 99, 46, 47, 58, 59, 90, 91, 70, 71, 64, 4, 5,
        6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 28, 29,
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 48,
        49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67,
        68, 69, 22, 23, 46, 47, 58, 59, 70, 71, 8, 72, 73, 74, 75, 76, 77, 78,
        79, 84, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
        44, 45, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64,
        65, 66, 67, 68, 69, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 92, 93,
        94, 95, 96, 97, 98, 99, 22, 23, 46, 47, 58, 59, 90, 91, 70, 71, 10,
        5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 10, 15, 16, 17, 18, 19, 30, 31, 32,
        33, 34, 10, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 11, 1, 3, 21, 23,
        26, 28, 30, 31, 32, 33, 34, 11, 2, 4, 10, 11, 12, 13, 14, 22, 24, 27,
        29, 11, 2, 4, 15, 16, 17, 18, 19, 22, 24, 27, 29, 11, 2, 4, 22, 24,
        27, 29, 35, 36, 37, 38, 39, 12, 0, 1, 3, 8, 13, 18, 20, 21, 23, 25,
        26, 28, 12, 6, 7, 8, 9, 11, 12, 13, 14, 16, 17, 18, 19, 14, 0, 1, 3,
        5, 6, 7, 8, 9, 20, 21, 23, 25, 26, 28, 14, 0, 1, 3, 10, 11, 12, 13,
        14, 20, 21, 23, 25, 26, 28, 14, 0, 1, 3, 15, 16, 17, 18, 19, 20, 21,
        23, 25, 26, 28, 14, 0, 1, 3, 20, 21, 23, 25, 26, 28, 30, 31, 32, 33,
        34, 14, 0, 1, 3, 20, 21, 23, 25, 26, 28, 35, 36, 37, 38, 39, 15, 0,
        1, 3, 5, 6, 7, 8, 13, 18, 20, 21, 23, 25, 26, 28, 15, 5, 6, 7, 8, 9,
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 16, 2, 4, 22, 24, 27, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 16, 6, 7, 8, 9, 11, 12, 13, 14,
        16, 17, 18, 19, 31, 32, 33, 34, 18, 0, 1, 3, 8, 10, 11, 12, 13, 15,
        16, 17, 18, 20, 21, 23, 25, 26, 28, 18, 1, 3, 6, 7, 8, 9, 11, 12, 13,
        14, 16, 17, 18, 19, 21, 23, 26, 28, 19, 0, 1, 3, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 23, 25, 26, 28, 21, 0, 1, 3, 5, 6, 7, 8,
        10, 11, 12, 13, 15, 16, 17, 18, 20, 21, 23, 25, 26, 28, 22, 1, 3, 6,
        7, 8, 9, 11, 12, 13, 14, 16, 17, 18, 19, 21, 23, 26, 28, 31, 32, 33,
        34, 22, 1, 3, 6, 7, 8, 9, 16, 17, 18, 19, 21, 23, 26, 28, 31, 32, 33,
        34, 36, 37, 38, 39, 24, 0, 1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 23, 25, 26, 28, 26, 1, 3, 6, 7, 8, 9, 11,
        12, 13, 14, 16, 17, 18, 19, 21, 23, 26, 28, 31, 32, 33, 34, 36, 37,
        38, 39, 29, 0, 1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 23, 25, 26, 28, 30, 31, 32, 33, 34, 3, 0, 20, 25, 3,
        5, 6, 7, 3, 5, 10, 15, 34, 0, 1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 23, 25, 26, 28, 30, 31, 32, 33, 34, 35,
        36, 37, 38, 39, 4, 11, 12, 13, 14, 5, 0, 1, 2, 3, 4, 5, 5, 6, 7, 8,
        9, 5, 5, 10, 15, 30, 35, 5, 10, 11, 12, 13, 14, 5, 15, 16, 17, 18, 19,
        5, 30, 31, 32, 33, 34, 5, 35, 36, 37, 38, 39, 6, 0, 5, 10, 15, 20, 25,
        6, 1, 3, 21, 23, 26, 28, 6, 2, 4, 22, 24, 27, 29, 6, 10, 11, 12, 15,
        16, 17, 7, 0, 5, 10, 15, 20, 25, 30, 7, 2, 4, 10, 22, 24, 27, 29, 8,
        0, 5, 10, 15, 20, 25, 30, 35, 9, 0, 1, 3, 20, 21, 23, 25, 26, 28, 9,
        1, 3, 8, 13, 18, 21, 23, 26, 28, 0, 2, 2, 5, 2, 2, 0, 6, 2, 5, 1, 1,
        1, 2, 2, 4, 1, 1, 1, 2, 5, 4, 2, 2, 1, 1, 1, 10, 2, 2, 1, 1, 1, 1, 26,
        2, 2, 28, 2, 2, 14, 2, 2, 1, 1, 1, 1, 0, 1, 0, 0, 0, 236, 25, 0, 0,
        1, 0, 0, 0, 239, 25, 0, 0, 4, 0, 0, 0, 242, 25, 0, 0, 2, 0, 0, 0, 14,
        26, 0, 0, 1, 0, 0, 0, 20, 26, 0, 0, 1, 0, 0, 0, 28, 26, 0, 0, 1, 0,
        0, 0, 36, 26, 0, 0, 1, 0, 0, 0, 44, 26, 0, 0, 1, 0, 0, 0, 52, 26, 0,
        0, 1, 0, 0, 0, 60, 26, 0, 0, 50, 48, 50, 51, 45, 49, 48, 45, 50, 48,
        32, 48, 55, 58, 51, 56, 58, 48, 53, 0, 60, 84, 73, 77, 69, 83, 84, 65,
        77, 80, 62, 0, 1, 0, 0, 0, 220, 26, 0, 0, 1, 0, 0, 0, 223, 26, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 226, 26, 0, 0, 3, 0, 0, 0, 235,
        26, 0, 0, 3, 0, 0, 0, 244, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
        0, 253, 26, 0, 0, 1, 0, 0, 0, 0, 27, 0, 0, 1, 0, 0, 0, 3, 27, 0, 0,
        1, 13, 1, 3, 11, 1, 36, 64, 4, 100, 144, 4, 149, 165, 4, 38, 62, 8,
        102, 142, 8, 151, 175, 8, 42, 58, 16, 106, 138, 16, 155, 171, 16, 1,
        233, 4, 3, 227, 8, 7, 215, 16, 8, 217, 0, 0
};
const resource_hnd_t wifi_firmware_clm_blob = { RESOURCE_IN_MEMORY, 6982, {.mem = { (const char *) wifi_firmware_clm_blob_data }}};
#endif /* !WLAN_MFG_FIRMWARE */

