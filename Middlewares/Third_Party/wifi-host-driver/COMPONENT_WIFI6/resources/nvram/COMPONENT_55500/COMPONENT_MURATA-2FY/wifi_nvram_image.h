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

#ifndef INCLUDED_NVRAM_IMAGE_H_
#define INCLUDED_NVRAM_IMAGE_H_

#include <string.h>
#include <stdint.h>
#include "generated_mac_address.txt"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Character array of NVRAM image
 * Generated from ./cyfmac55500-sdio_Type2FY_0418.txt
 */

static const char wifi_nvram_image[] =
        "NVRAMRev=$Rev: 4628 $"                                              "\x00"
        "sromrev=11"                                                         "\x00"
        "boardrev=0x1203"                                                    "\x00"
        "boardtype=0x0899"                                                   "\x00"
        "boardflags=0x00400001"                                              "\x00"
        "boardflags2=0x00800000"                                             "\x00"
        "boardflags3=0x40000100"                                             "\x00"
        NVRAM_GENERATED_MAC_ADDRESS                                          "\x00"
        "ccode=0"                                                            "\x00"
        "regrev=0"                                                           "\x00"
        "vendid=0x12be"                                                      "\x00"
        "devid=0xbd3e"                                                       "\x00"
        "manfid=0x2d0"                                                       "\x00"
        "antswitch=0"                                                        "\x00"
        "pdgain5g=0"                                                         "\x00"
        "pdgain2g=0"                                                         "\x00"
        "aa2g=1"                                                             "\x00"
        "aa5g=1"                                                             "\x00"
        "agbg0=2"                                                            "\x00"
        "aga0=2"                                                             "\x00"
        "extpagain5g=2"                                                      "\x00"
        "extpagain2g=2"                                                      "\x00"
        "rxgains2gelnagaina0=0"                                              "\x00"
        "rxgains2gtrisoa0=13"                                                "\x00"
        "rxgains2gtrelnabypa0=0"                                             "\x00"
        "rxgains5gelnagaina0=0"                                              "\x00"
        "rxgains5gtrisoa0=7"                                                 "\x00"
        "rxgains5gtrelnabypa0=0"                                             "\x00"
        "rxgains5gmelnagaina0=0"                                             "\x00"
        "rxgains5gmtrisoa0=7"                                                "\x00"
        "rxgains5gmtrelnabypa0=0"                                            "\x00"
        "rxgains5ghelnagaina0=0"                                             "\x00"
        "rxgains5ghtrisoa0=7"                                                "\x00"
        "rxgains5ghtrelnabypa0=0"                                            "\x00"
        "rssicorrnorm_c0=-5,0"                                               "\x00"
        "rssicorrnorm5g_c0=7,0,0,6,0,0,3,0,0,4,0,0"                          "\x00"
        "rssicorrnorm6g_c0=1,0,0,-4,0,0,-2,0,0,0,0,0"                        "\x00"
        "rssi_cal_rev=1"                                                     "\x00"
        "rxgaincal_rssical=1"                                                "\x00"
        "low_pwr_rssi_thresh_qdBm_5g=-334"                                   "\x00"
        "low_pwr_rssi_bias_5g_c0=-2,0,0,-8,0,0,-6,0,0,-8,0,0"                "\x00"
        "gain_cal_temp=25"                                                   "\x00"
        "rxgain_tempcoeff2g_sub=32,32,32,32,32,32,32,32,32,32"               "\x00"
        "rxgain_tempcoeff5gl=28"                                             "\x00"
        "rxgain_tempcoeff5gml=24"                                            "\x00"
        "rxgain_tempcoeff5gmu=24"                                            "\x00"
        "rxgain_tempcoeff5gh=24"                                             "\x00"
        "rxgain_tempcoeff2g_sub_elnaoff=32,32,32,32,32,32,32,32,32,32"       "\x00"
        "rxgain_tempcoeff5gl_elnaoff=28"                                     "\x00"
        "rxgain_tempcoeff5gml_elnaoff=22"                                    "\x00"
        "rxgain_tempcoeff5gmu_elnaoff=22"                                    "\x00"
        "rxgain_tempcoeff5gh_elnaoff=22"                                     "\x00"
        "rxgain_tempcoeff6g_unii5=24"                                        "\x00"
        "rxgain_tempcoeff6g_unii6=24"                                        "\x00"
        "rxgain_tempcoeff6g_unii7=28"                                        "\x00"
        "rxgain_tempcoeff6g_unii8=34"                                        "\x00"
        "rssi_cal_freq_grp_2g= 0x08,0x01,0x91,0x2a,0x23,0xb3,0xc4"           "\x00"
        "rssi_delta_2gb0=0,0,0,0"                                            "\x00"
        "rssi_delta_2gb1=0,0,0,0"                                            "\x00"
        "rssi_delta_2gb2=0,0,0,0"                                            "\x00"
        "rssi_delta_2gb3=0,0,0,0"                                            "\x00"
        "rssi_delta_2gb4=0,0,0,0"                                            "\x00"
        "tworangetssi2g=0"                                                   "\x00"
        "tworangetssi5g=0"                                                   "\x00"
        "nocrc=1"                                                            "\x00"
        "otpimagesize=502"                                                   "\x00"
        "xtalfreq=37400"                                                     "\x00"
        "txchain=1"                                                          "\x00"
        "rxchain=1"                                                          "\x00"
        "cckdigfilttype=3"                                                   "\x00"
        "cck_txgain_offsetval=0x18"                                          "\x00"
        "bandcap=2"                                                          "\x00"
        "fdss_level_5g=9"                                                    "\x00"
        "fdss_interp_en=0"                                                   "\x00"
        "fdss_level_2g=4"                                                    "\x00"
        "fdss_level_6g=9"                                                    "\x00"
        "leg_preamble_boost=12,12,0"                                         "\x00"
        "lpb_comp=10"                                                        "\x00"
        "paprdis=0"                                                          "\x00"
        "paprrmcsgain2g=130,130,130,129,128,0,0,0,0,0,0,0"                   "\x00"
        "paprrmcsgamma2g=550,550,550,650,700,-1,-1,-1,-1,-1,-1,-1"           "\x00"
        "paprrmcsgain5g20=130,130,130,129,128,0,0,0,0,0,0,0"                 "\x00"
        "paprrmcsgamma5g20=500,500,550,650,700,-1,-1,-1,-1,-1,-1,-1"         "\x00"
        "paprrmcsgain6g20=130,130,130,129,128,0,0,0,0,0,0,0"                 "\x00"
        "paprrmcsgamma6g20=500,500,550,650,700,-1,-1,-1,-1,-1,-1,-1"         "\x00"
        "tempthresh=255"                                                     "\x00"
        "tempoffset=255"                                                     "\x00"
        "rawtempsense=0x1ff"                                                 "\x00"
        "phycal_tempdelta=15"                                                "\x00"
        "temps_period=15"                                                    "\x00"
        "temps_hysteresis=15"                                                "\x00"
        "tssipos2g=1"                                                        "\x00"
        "tssipos5g=1"                                                        "\x00"
        "AvVmid_c0=6,75,5,93,5,93,5,93,5,93,5,90,5,90,5,90,5,90"             "\x00"
        "low_adc_rate_en=1"                                                  "\x00"
        "txidxcap2g=0"                                                       "\x00"
        "txidxcap5g=0"                                                       "\x00"
        "txidxcap6g=0"                                                       "\x00"
        "pa2ga0=-156,6359,-711"                                              "\x00"
        "pa2gccka0=-110,7093,-749"                                           "\x00"
        "pa5ga0=-198,5370,-617,-211,5672,-695,-191,6112,-720,-170,5778,-646" "\x00"
        "pa6ga0=-137,6057,-650,-147,6141,-680,-119,6684,-706,-136,6880,-753" "\x00"
        "maxp2ga0=86"                                                        "\x00"
        "maxp5ga0=72,72,72,72"                                               "\x00"
        "maxp6ga0=66,62"                                                     "\x00"
        "subband5gver=0x4"                                                   "\x00"
        "paparambwver=3"                                                     "\x00"
        "cckpwroffset0=0"                                                    "\x00"
        "pdoffset20ma0=0xf010"                                               "\x00"
        "pdoffset6g20ma0=0x10ff"                                             "\x00"
        "pdoffset6g20ma0_group1=0xed40"                                      "\x00"
        "cckbw202gpo=0"                                                      "\x00"
        "cckbw20ul2gpo=0"                                                    "\x00"
        "mcsbw202gpo=0x88554444"                                             "\x00"
        "dot11agofdmhrbw202gpo=0x5444"                                       "\x00"
        "ofdmlrbw202gpo=0x0044"                                              "\x00"
        "mcsbw205glpo=0x55111110"                                            "\x00"
        "mcsbw205gmpo=0x55111110"                                            "\x00"
        "mcsbw205ghpo=0x55111110"                                            "\x00"
        "mcsbw206glpo=0x87522222"                                            "\x00"
        "mcsbw206gmpo=0x87522222"                                            "\x00"
        "powoffs2gtna0=-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3"            "\x00"
        "mcs1024qam2gpo=0x00aa"                                              "\x00"
        "mcs1024qam5glpo=0x000077"                                           "\x00"
        "mcs1024qam5gmpo=0x000077"                                           "\x00"
        "mcs1024qam5ghpo=0x000077"                                           "\x00"
        "mcs1024qam5gx1po=0x000077"                                          "\x00"
        "mcs1024qam5gx2po=0x000077"                                          "\x00"
        "mcs8poexp=0"                                                        "\x00"
        "mcs9poexp=0"                                                        "\x00"
        "mcs10poexp=0"                                                       "\x00"
        "mcs1024qam6glpo=0xBBBBAA"                                           "\x00"
        "mcs1024qam6gmpo=0xBBBBAA"                                           "\x00"
        "ruppr2g20bpska0=0x10842"                                            "\x00"
        "ruppr2g20qpska0=0x10842"                                            "\x00"
        "ruppr2g20qam16a0=0x10842"                                           "\x00"
        "ruppr2g20qam64a0=0x294A5"                                           "\x00"
        "ruppr2g20qam256a0=0x42108"                                          "\x00"
        "ruppr2g20qam1024a0=0x5294A"                                         "\x00"
        "ruppr5g20bpska0=0x0"                                                "\x00"
        "ruppr5g20qpska0=0x0"                                                "\x00"
        "ruppr5g20qam16a0=0x10842"                                           "\x00"
        "ruppr5g20qam64a0=0x10842"                                           "\x00"
        "ruppr5g20qam256a0=0x18c63"                                          "\x00"
        "ruppr5g20qam1024a0=0x294A5"                                         "\x00"
        "powoffs5g20mtna0=0,0,0,0,0,0,0"                                     "\x00"
        "mcs11poexp=0"                                                       "\x00"
        "disable_olpc=0"                                                     "\x00"
        "olpc_thresh5g=60"                                                   "\x00"
        "olpc_anchor5g=64"                                                   "\x00"
        "disable_olpc_2g=0"                                                  "\x00"
        "olpc_thresh2g=56"                                                   "\x00"
        "olpc_anchor2g=60"                                                   "\x00"
        "olpc_thresh6g=60"                                                   "\x00"
        "olpc_anchor6g=64"                                                   "\x00"
        "ltecxmux=0"                                                         "\x00"
        "ltecxpadnum=0x0504"                                                 "\x00"
        "ltecxfnsel=0x44"                                                    "\x00"
        "ltecxgcigpio=0x04"                                                  "\x00"
        "swctrlmap_5g=0x08080808,0x02020202,0x08080808,0x010008,0x00f							""\x00"
        "swctrlmapext_5g=0x00000000,0x00000000,0x00000000,0x000000,0x000	"   "\x00"
        "fem_table_init_val=0x06060606,0x08080808							"                    "\x00"
        "fem_table_init_val_ext=0x00000000,0x00000000"                       "\x00"
        "swctrlmap_2g=0x06060606,0x08080808,0x06060606,0x010008,0x10f							""\x00"
        "swctrlmapext_2g=0x00000000,0x00000000,0x00000000,0x000000,0x000	"   "\x00"
        "clb2gslice0core0=0xd							"                                        "\x00"
        "clb5gslice0core0=0x2"                                               "\x00"
        "btc_prisel_ant_mask=0x0							"                                     "\x00"
        "clb_swctrl_smask_ant0=0x3ff	"                                       "\x00"
        "muxenab=1"                                                          "\x00"
        "btc_mode=1"                                                         "\x00"
        "txwbpapden=1"                                                       "\x00"
        "nb_eps_offset=0x01dd01e3"                                           "\x00"
        "nb_bbmult=0x5550"                                                   "\x00"
        "nb_papdcalidx=0x050a"                                               "\x00"
        "nb_txattn=0x0000"                                                   "\x00"
        "nb_rxattn=0x0000"                                                   "\x00"
        "papdgainctrl2g=0"                                                   "\x00"
        "papdgainctrl5g=0"                                                   "\x00"
        "pacalshift2g=5"                                                     "\x00"
        "pacalshift5g=4"                                                     "\x00"
        "eps_stopidx=63"                                                     "\x00"
        "nb_txattn_6g=0,0,0,0"                                               "\x00"
        "nb_rxattn_6g=0,0,0,0"                                               "\x00"
        "nb_papdcalidx_6g=10,10,10,10"                                       "\x00"
        "nb_bbmult_6g=80,80,80,80"                                           "\x00"
        "nb_eps_offset_6g=475,475,475,475"                                   "\x00"
        "papdgainctrl6g=0"                                                   "\x00"
        "pacalshift6g20=3,4,4,4"                                             "\x00"
        "wb_txattn=0,1"                                                      "\x00"
        "wb_rxattn=0,0"                                                      "\x00"
        "wb_tia_gain_mode=2,2"                                               "\x00"
        "wb_eps_offset=474,462"                                              "\x00"
        "wb_papdcalidx=10,5"                                                 "\x00"
        "wb_bbmult=64,90"                                                    "\x00"
        "wb_calref_db=23,24"                                                 "\x00"
        "wb_txbuf_offset=33,32"                                              "\x00"
        "wb_frac_del=255,255"                                                "\x00"
        "wb_g_frac_bits=10,10"                                               "\x00"
        "wb_txattn_6g20=1,1,1,1"                                             "\x00"
        "wb_rxattn_6g20=0,0,0,0"                                             "\x00"
        "wb_tia_gain_mode_6g20=4,4,2,5"                                      "\x00"
        "wb_papdcalidx_6g20=10,10,5,30"                                      "\x00"
        "wb_bbmult_6g20=70,80,80,86"                                         "\x00"
        "wb_eps_offset_6g20=470,468,463,471"                                 "\x00"
        "wb_calref_db_6g20=24,24,24,28"                                      "\x00"
        "wb_multipapd_en=0"                                                  "\x00"
        "wb_PapdLutSel_idx_6g20=42,42,42,42"                                 "\x00"
        "wb_eps_index_offset_6g20=5,5,5,5"                                   "\x00"
        "wb_papdcalidx_6g20_lut1=10,10,10,10"                                "\x00"
        "wb_bbmult_6g20_lut1=66,70,74,74"                                    "\x00"
        "wb_calref_db_6g20_lut1=26,26,26,26"                                 "\x00"
        "wb_gainctrl_nvram_en=1"                                             "\x00"
        "wb_target_tssi_2g20=200"                                            "\x00"
        "wb_target_tssi_5g20=210,210,210,150"                                "\x00"
        "wb_target_tssi_6g20=75,71,100,-45"                                  "\x00"
        "wb_fudge_factor_2g5g=1,0,-1,-1,-1"                                  "\x00"
        "wb_eps_offset_lut1=22,10"                                           "\x00"
        "wb_calref_db_lut1=23,19"                                            "\x00"
        "wb_papdcalidx_lut1=10,10"                                           "\x00"
        "wb_bbmult_lut1=25,40"                                               "\x00"
        "wb_PapdLutSel_idx_2g5g=53,52"                                       "\x00"
        "ed_thresh2g=-65"                                                    "\x00"
        "ed_thresh5g=-68"                                                    "\x00"
        "ed_thresh6g=-68"                                                    "\x00"
        "eu_edthresh2g=-65"                                                  "\x00"
        "eu_edthresh5g=-68"                                                  "\x00"
        "eu_edthresh6g=-68"                                                  "\x00"
        "btldopu=0"                                                          "\x00"
        "rpcal2g=0"                                                          "\x00"
        "rpcal5gb0=238"                                                      "\x00"
        "rpcal5gb1=228"                                                      "\x00"
        "rpcal5gb2=222"                                                      "\x00"
        "rpcal5gb3=229"                                                      "\x00"
        "lhl_ps_mode=3"                                                      "\x00"
        "rmin=0x1"                                                           "\x00"
        "lpflags=0"                                                          "\x00"
        "fastlpo_pcie_dis=0"                                                 "\x00"
        "fastlpo_dis=0"                                                      "\x00"
        "tvpm=1"                                                             "\x00"
        "tvpm_txc_txdc=105,15"                                               "\x00"
        "tvpm_txc_txdc_lowlimit=1"                                           "\x00"
        "tvpm_txc_txdc_insert=0,0"                                           "\x00"
        "tvpm_monitor_period=3"                                              "\x00"
        "tvpm_txc_txdc_burst=110,20,5"                                       "\x00"
        "ppr_hitemp_offset=70,10"                                            "\x00"
        "cckbw202gpo_ht=0x6666"                                              "\x00"
        "ofdmbw202gpo_ht=0x66666666"                                         "\x00"
        "mcsbw202gpo_ht=0x66666666"                                          "\x00"
        "mcsbw202gpo_1024qam_ht=0x66"                                        "\x00"
        "ofdmbw205gpo_ht=0x66666666"                                         "\x00"
        "mcsbw205gpo_ht=0x66666666"                                          "\x00"
        "mcsbw205gpo_1024qam_ht=0x66"                                        "\x00"
        "ofdmbw206gpo_ht=0x66666666"                                         "\x00"
        "mcsbw206gpo_ht=0x66666666"                                          "\x00"
        "mcsbw206gpo_1024qam_ht=0x66"                                        "\x00"
        "swdiv_en=1 "                                                        "\x00"
        "swdiv_gpio=0"                                                       "\x00"
        "swdiv_swctrl_en=2"                                                  "\x00"
        "swdiv_swctrl_ant0=0"                                                "\x00"
        "swdiv_swctrl_ant1=1"                                                "\x00"
        "swdiv_antmap2g_main=1"                                              "\x00"
        "swdiv_antmap5g_main=1"                                              "\x00"
        "swdiv_snrlim=290 "                                                  "\x00"
        "swdiv_thresh=2000 "                                                 "\x00"
        "swdiv_snrthresh=24 "                                                "\x00"
        "swdiv_timeon=10"                                                    "\x00"
        "swdiv_timeoff=1"                                                    "\x00"
        "swdiv_snr2g20=232"                                                  "\x00"
        "swdiv_snr2g40=257"                                                  "\x00"
        "swdiv_snr5g20=232"                                                  "\x00"
        "swdiv_snr5g40=312"                                                  "\x00"
        "swdiv_snr5g80=296"                                                  "\x00"
        "swdiv_ap_dead_check=0 "                                             "\x00"
        "swdiv_ap_div=0 "                                                    "\x00"
        "\x00\x00";
#ifdef __cplusplus
} /*extern "C" */
#endif

#else /* ifndef INCLUDED_NVRAM_IMAGE_H_ */

#error Wi-Fi NVRAM image included twice

#endif /* ifndef INCLUDED_NVRAM_IMAGE_H_ */
