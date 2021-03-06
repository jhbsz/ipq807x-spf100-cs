/*
 * Copyright (c) 2014 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */
// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// $ATH_LICENSE_HOSTSDK0_C$
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================


#ifndef __WIFI_DESC_IP02__
#define __WIFI_DESC_IP02__


#include <hw/datastruct/pdg_setup_userx.h>
#include <hw/tlv/ppdu_ss_11ac_su_info.h>

/* RX Desc Status Header */
#define RX_DESC_STS_HDR_DESC_LEN_MASK       0x000000FF
#define RX_DESC_STS_HDR_RX_PRIO_MASK        0x00000100
/* Bit 9-13 is reserved */
#define RX_DESC_STS_HDR_DESC_CTRL_STAT_MASK 0x00004000
#define RX_DESC_STS_HDR_TX_RX_MASK          0x00008000
#define RX_DESC_STS_HDR_ATHID_MASK          0xFFFF0000

/* RX Desc Status0 */
#define RX_DESC_STS0_ACK_RSSI_ANT00_MASK    0x000000FF /* Strength of Ack on ant 00 */
#define RX_DESC_STS0_ACK_RSSI_ANT00_LSB     0
#define RX_DESC_STS0_ACK_RSSI_ANT01_MASK    0x0000FF00 /* Strength of Ack on ant 01 */
#define RX_DESC_STS0_ACK_RSSI_ANT01_LSB     8
#define RX_DESC_STS0_ACK_RSSI_ANT02_MASK    0x00FF0000 /* Strength of Ack on ant 02 */
#define RX_DESC_STS0_ACK_RSSI_ANT02_LSB     16 
#define RX_DESC_STS0_RX_RATE_MASK           0xFF000000 /* Recv rate */ 
#define RX_DESC_STS0_RX_RATE_LSB            24 

/* RX Desc Status1 */
#define RX_DESC_STS1_DATA_LEN_MASK          0x00000FFF  /* RX data length */
#define RX_DESC_STS1_DATA_LEN_LSB           0
#define RX_DESC_STS1_MORE_DS_MASK           0x00001000  /* More desc in this frame */
/* bit 13 is reserved */
#define RX_DESC_STS1_NUM_DELIM_MASK         0x003FC000  /* Num delimeters */
#define RX_DESC_STS1_NUM_DELIM_LSB          14 

#define RX_DESC_STS1_HW_UPLOAD_DATA_MASK    0x00400000  /* Hardware upload data */
/* bits 23-31 are reserved */

/* RX Desc Status2 */
#define RX_DESC_STS2_RCV_TIMESTAMP_MASK     0xFFFFFFFF /* Recv timestamp */

/* RX Desc Status3 */
#define RX_DESC_STS3_GI_MASK                0x00000001 /* Half GI */
#define RX_DESC_STS3_2040_MASK              0x00000002 /* 20/40 */
#define RX_DESC_STS3_DUP_MASK               0x00000004 /* Duplicate */
#define RX_DESC_STS3_STBC_MASK              0x00000008 /* STBC */
#define RX_DESC_STS3_NOT_SOUNDING_MASK      0x00000010 /* Not Sounding */
#define RX_DESC_STS3_NESS_MASK              0x00000060 /* Not Sounding */
#define RX_DESC_STS3_NESS_LSB               5
#define RX_DESC_STS3_HW_UPLD_DATA_VLD_MASK  0x00000080 /* Hardware upload data vaild */
#define RX_DESC_STS3_RX_ANTENNA_MASK        0xFFFFFF00 /* Recv antenna */
#define RX_DESC_STS3_RX_ANTENNA_LSB         8 

/* RX Desc Status4 */
#define RX_DESC_STS4_ACK_RSSI_ANT10_MASK    0x000000FF /* Strength of Ack on ant 10 */
#define RX_DESC_STS4_ACK_RSSI_ANT10_LSB     0
#define RX_DESC_STS4_ACK_RSSI_ANT11_MASK    0x0000FF00 /* Strength of Ack on ant 11 */
#define RX_DESC_STS4_ACK_RSSI_ANT11_LSB     8
#define RX_DESC_STS4_ACK_RSSI_ANT12_MASK    0x00FF0000 /* Strength of Ack on ant 12 */
#define RX_DESC_STS4_ACK_RSSI_ANT12_LSB     16 
#define RX_DESC_STS4_ACK_RSSI_CMBD_MASK     0xFF000000 /* Combined Strength of Ack */
#define RX_DESC_STS4_ACK_RSSI_CMBD_LSB      24 

/* RX Desc Status5 */
#define RX_DESC_STS5_EVM0_MASK              0xFFFFFFFF

/* RX Desc Status6 */
#define RX_DESC_STS6_EVM1_MASK              0xFFFFFFFF

/* RX Desc Status7 */
#define RX_DESC_STS7_EVM2_MASK              0xFFFFFFFF

/* RX Desc Status8 */
#define RX_DESC_STS8_EVM3_MASK              0xFFFFFFFF

/* RX Desc Status9 */
#define RX_DESC_STS9_EVM4_MASK              0x0000FFFF
#define RX_DESC_STS9_EVM4_LSB               0
/* bits 16-21 are reserved */
#define RX_DESC_STS9_NF_MASK                0xFFC00000
#define RX_DESC_STS9_NF_LSB                 22

/* RX Desc Status10 */
#define RX_DESC_STS10_CKSUM_CORRECT_MASK      0x00000001  /* CheckSum correct */
#define RX_DESC_STS10_CKSUM_COMPUTED_MASK     0x00000002  /* CheckSum computed */
/* bits 2-15 are reserved */
#define RX_DESC_STS10_CKSUM_MASK              0xFFFF0000  /* Check Sum */
#define RX_DESC_STS10_CKSUM_LSB               16

/* RX Desc Status11 */
#define RX_DESC_STS11_RX_DONE_MASK            0x00000001  /* Descripter complete */
#define RX_DESC_STS11_FRM_RX_OK_MASK          0x00000002  /* Frame reception success */
#define RX_DESC_STS11_CRC_ERR_MASK            0x00000004  /* CRC error */
#define RX_DESC_STS11_DECRYPT_CRC_ERR_MASK    0x00000008  /* Decryption CRC fiailure */
#define RX_DESC_STS11_PHY_ERR_MASK            0x00000010  /* PHY error */
#define RX_DESC_STS11_MICHAEL_ERR_MASK        0x00000020  /* Michael decrypt error */
#define RX_DESC_STS11_PRE_DELIM_CRC_ERR_MASK  0x00000040  /* Pre delim CRC error */
#define RX_DESC_STS11_APSD_TRIG_MASK          0x00000040  /* APSD Trigger */
#define RX_DESC_STS11_KEY_IDX_VALID_MASK      0x00000100  /* Decryption key index valid */
#define RX_DESC_STS11_KEY_IDX_MASK            0x0000FE00  /* Decryption key index */
#define RX_DESC_STS11_KEY_IDX_LSB             9
#define RX_DESC_STS11_MORE_AGG_MASK           0x00010000  /* More aggregate */ 
#define RX_DESC_STS11_IS_AGG_MASK             0x00020000  /* Is part of an aggrerate */
#define RX_DESC_STS11_POST_DELIM_CRC_ERR_MASK 0x00040000  /* Post delim CRC error */
/* bits 19-24 are reserved */
#define RX_DESC_STS11_HW_UPLD_DATA_TYPE_MASK  0x06000000  /* Hardware upload data type */
#define RX_DESC_STS11_HW_UPLD_DATA_TYPE_LSB   25
#define RX_DESC_STS11_RX_LOCATION_MODE_MASK   0x08000000  /* Rx location mode */
#define RX_DESC_STS11_HI_RX_CHAIN_MASK        0x10000000  /* Hi rx chain */
#define RX_DESC_STS11_FIRST_AGG_MASK          0x20000000  /* First part of aggregate */
#define RX_DESC_STS11_DECRYPT_BUSY_ERR_MASK   0x40000000  /* Decrypt busy err */
#define RX_DESC_STS11_KEY_MISS_ERR_MASK       0x80000000  /* Key miss err */

/* NB: phy error code overlays key index and valid fields */
#define RX_DESC_STS11_PHY_ERRCODE_MASK        0x0000FF00  /* PHY error code */
#define RX_DESC_STS11_PHY_ERRCODE_LSB         8




/* For General TLV structure and for setting TLV header */
typedef struct{
    volatile A_UINT32 header;
    A_UINT32 data[1]; /* TLV data starts */
}__ATTRIB_PACK WHAL_TLV;

#define TLV_HEADER_SIZE        sizeof(A_UINT32)
#define TLV_REF_PTR_SIZE       sizeof(A_UINT32)
#define TLV_HEADER_TAG_MASK    0x00FF0000
#define TLV_HEADER_TAG_LSB     16

#define TLV_HEADER_LENGTH_MASK    0x00003FFF
#define TLV_HEADER_LENGTH_LSB     0
#define WIFI2_TLV_ID_CONST        0xAC
#define WIFI2_TLV_ID_CONST_LSB    24

#define WHAL_TLV_HEADER(tag,len) \
        ((((tag)<<TLV_HEADER_TAG_LSB)&TLV_HEADER_TAG_MASK) \
           |(((len)<<TLV_HEADER_LENGTH_LSB)&TLV_HEADER_LENGTH_MASK) \
           | (WIFI2_TLV_ID_CONST << WIFI2_TLV_ID_CONST_LSB))

#define WHAL_SET_TLV_HEADER(ptr,tag,len) \
        (((ptr)->header) = WHAL_TLV_HEADER((tag),(len)))

#define WHAL_GET_TLV_TAG(ptr) \
        ((((ptr)->header) & TLV_HEADER_TAG_MASK)>>TLV_HEADER_TAG_LSB)

#define WHAL_CHK_TLV_TAG(ptr,tag)       (WHAL_GET_TLV_TAG((ptr)) == (tag))




/* For accessing fields from QUEUE_HEAD descriptor */
#define WHAL_QUEUE_HEAD_MPDU_CNT(queue_head) \
        ( MS( *((A_UINT32 *)((queue_head)->data) \
                              + WO(QUEUE_HEAD_0_MPDU_CNT)) \
            , QUEUE_HEAD_0_MPDU_CNT \
            ) \
        )



/* For accessing fields from MPDU_QUEUE_EXT_COMMON descriptor */
#define WHAL_MPDU_Q_EXT_START_SEQ_NUM(ptr) \
        ( MS( *((A_UINT32 *)((ptr)) + \
                      WO(MPDU_QUEUE_EXT_COMMON_0_START_SEQ_NUM)) \
            , MPDU_QUEUE_EXT_COMMON_0_START_SEQ_NUM \
            ) \
        )

#define WHAL_MPDU_Q_EXT_SEQ_BITMAP_31_0(ptr) \
        ( MS( *((A_UINT32 *)((ptr)) + \
                      WO(MPDU_QUEUE_EXT_COMMON_1_SEQNUM_BITMAP_31_0)) \
            , MPDU_QUEUE_EXT_COMMON_1_SEQNUM_BITMAP_31_0 \
            ) \
        )

#define WHAL_MPDU_Q_EXT_SEQ_BITMAP_63_32(ptr) \
        ( MS( *((A_UINT32 *)((ptr)) + \
                      WO(MPDU_QUEUE_EXT_COMMON_2_SEQNUM_BITMAP_63_32)) \
            , MPDU_QUEUE_EXT_COMMON_2_SEQNUM_BITMAP_63_32 \
            ) \
        )

#define WHAL_MPDU_Q_EXT_AMPDU_FLAG(ptr) \
        ( MS( *((A_UINT32 *)((ptr)) + \
                      WO(MPDU_QUEUE_EXT_COMMON_0_AMPDU_FLAG)) \
            , MPDU_QUEUE_EXT_COMMON_0_AMPDU_FLAG \
            ) \
        )



/* For accessing fields from TX_FES_STATUS HW descriptor */

//- GENERIC MACRO for accessing various fields from FES status HW descriptor
#define _WHAL_FES_STATUS(A,STATUS_TYPE,OFFSET)\
    ( MS( *((A_UINT32 *)((A)->data) \
                        + WO(TX_FES_STATUS_##OFFSET##_##STATUS_TYPE)) \
        , TX_FES_STATUS_##OFFSET##_##STATUS_TYPE\
        ) \
    )


#define WHAL_FES_STS_FES_TRANSMIT_RESULT(tx_status) _WHAL_FES_STATUS(tx_status,FES_TRANSMIT_RESULT,0)
#define WHAL_FES_STS_PHY_ERR_STATUS(tx_status) _WHAL_FES_STATUS(tx_status,PHY_ERR_STATUS,1)
#define WHAL_FES_STS_PPDU_TIMESTAMP(tx_status) _WHAL_FES_STATUS(tx_status,PPDU_TIMESTAMP,11)
#define WHAL_FES_STS_DATA_UNDERFLOW_WARNING(tx_status) _WHAL_FES_STATUS(tx_status,DATA_UNDERFLOW_WARNING,1)
#define WHAL_FES_STS_UNDERFLOW_MPDU_CNT(tx_status) _WHAL_FES_STATUS(tx_status,UNDERFLOW_MPDU_CNT,2)
#define WHAL_FES_STS_MPDU_TX_CNT(tx_status) _WHAL_FES_STATUS(tx_status,MPDU_TX_CNT,2)


#define WHAL_FES_STS_ACK_RSSI_AVE(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_AVE,17)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN0_PRI20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN0_PRI20,13)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN0_SEC20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN0_SEC20,13)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN0_SEC40(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN0_SEC40,13)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN0_SEC80(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN0_SEC80,13)

#define WHAL_FES_STATUS_ACK_RSSI_CHAIN1_PRI20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN1_PRI20,14)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN1_SEC20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN1_SEC20,14)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN1_SEC40(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN1_SEC40,14)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN1_SEC80(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN1_SEC80,14)

#define WHAL_FES_STATUS_ACK_RSSI_CHAIN2_PRI20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN2_PRI20,15)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN2_SEC20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN2_SEC20,15)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN2_SEC40(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN2_SEC40,15)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN2_SEC80(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN2_SEC80,15)


#define WHAL_FES_STATUS_ACK_RSSI_CHAIN3_PRI20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN3_PRI20,16)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN3_SEC20(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN3_SEC20,16)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN3_SEC40(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN3_SEC40,16)
#define WHAL_FES_STATUS_ACK_RSSI_CHAIN3_SEC80(tx_status) _WHAL_FES_STATUS(tx_status,ACK_RSSI_CHAIN3_SEC80,16)


#define WHAL_FES_STS_RESPONSE_TYPE(status_tlv) _WHAL_FES_STATUS(status_tlv,RESPONSE_TYPE,1)
#define WHAL_FES_STS_BA_START_SEQ_NUM(tx_status) _WHAL_FES_STATUS(tx_status,BA_START_SEQ_NUM,6)
#define WHAL_FES_STS_BA_BITMAP_31_0(tx_status) _WHAL_FES_STATUS(tx_status,BA_BITMAP_31_0,7)
#define WHAL_FES_STS_BA_BITMAP_63_32(tx_status) _WHAL_FES_STATUS(tx_status,BA_BITMAP_63_32,8)
#define WHAL_FES_STS_TX_PHY_ERR_STATUS(tx_status) _WHAL_FES_STATUS(tx_status,TX_PHY_ERROR_STATUS,9)
#define WHAL_FES_STS_TX_PACKET_BW(tx_status) _WHAL_FES_STATUS(tx_status,PACKET_BW,9)
#define WHAL_FES_STS_TX_MEDIUM_PROT_BANDWIDTH(tx_status) _WHAL_FES_STATUS(tx_status,MEDIUM_PROT_BANDWIDTH,9)
#define WHAL_FES_STS_MEDIUM_PROT_TYPE(tx_status) _WHAL_FES_STATUS(tx_status,MEDIUM_PROT_TYPE,1)
#define WHAL_FES_STS_USER_ID(tx_status) _WHAL_FES_STATUS(tx_status,USER_ID,0)

#define WHAL_HWRING_PAUSED(stall_status) ((stall_status) != WIFI_NOT_STALLED)

#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_20_LSB PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_20_LSB
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_20_MASK PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_20_MASK
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_20_OFFSET PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_20_OFFSET

#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_40_LSB PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_40_LSB
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_40_MASK PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_40_MASK
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_40_OFFSET PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_40_OFFSET

#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_80_LSB PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_80_LSB
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_80_MASK PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_80_MASK
#define PPDU_SS_11AC_SU_INFO_PCU_DATA_THRESHOLD_80_OFFSET PPDU_SS_11AC_SU_INFO_34_PCU_DATA_THRESHOLD_80_OFFSET

#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW20_LSB PPDU_SS_11AC_SU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_LSB
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW20_MASK PPDU_SS_11AC_SU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_MASK
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET PPDU_SS_11AC_SU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET

#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW20_LSB PPDU_SS_11AC_SU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW20_LSB
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW20_MASK PPDU_SS_11AC_SU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW20_MASK
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET PPDU_SS_11AC_SU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET

#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW40_LSB PPDU_SS_11AC_SU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_LSB
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW40_MASK PPDU_SS_11AC_SU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_MASK
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET PPDU_SS_11AC_SU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET

#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW40_LSB PPDU_SS_11AC_SU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW40_LSB
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW40_MASK PPDU_SS_11AC_SU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW40_MASK
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET PPDU_SS_11AC_SU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET

#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW80_LSB PPDU_SS_11AC_SU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_LSB
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW80_MASK PPDU_SS_11AC_SU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_MASK
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET PPDU_SS_11AC_SU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET

#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW80_LSB PPDU_SS_11AC_SU_INFO_9_VHT_SIG_A_VHT_SIG_A_BW80_LSB
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW80_MASK PPDU_SS_11AC_SU_INFO_9_VHT_SIG_A_VHT_SIG_A_BW80_MASK
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET PPDU_SS_11AC_SU_INFO_9_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET

#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW160_LSB PPDU_SS_11AC_SU_INFO_10_VHT_SIG_A_VHT_SIG_A_BW160_LSB
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW160_MASK PPDU_SS_11AC_SU_INFO_10_VHT_SIG_A_VHT_SIG_A_BW160_MASK
#define PPDU_SS_11AC_SU_INFO_FH_VHT_SIG_A_VHT_SIG_A_BW160_OFFSET PPDU_SS_11AC_SU_INFO_10_VHT_SIG_A_VHT_SIG_A_BW160_OFFSET

#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW160_LSB PPDU_SS_11AC_SU_INFO_11_VHT_SIG_A_VHT_SIG_A_BW160_LSB
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW160_MASK PPDU_SS_11AC_SU_INFO_11_VHT_SIG_A_VHT_SIG_A_BW160_MASK
#define PPDU_SS_11AC_SU_INFO_SH_VHT_SIG_A_VHT_SIG_A_BW160_OFFSET PPDU_SS_11AC_SU_INFO_11_VHT_SIG_A_VHT_SIG_A_BW160_OFFSET


#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_SU20_VHT_SIG_B_BW20_LSB PPDU_SS_11AC_SU_INFO_12_VHT_SIG_B_SU20_VHT_SIG_B_BW20_LSB 
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_SU20_VHT_SIG_B_BW20_MASK PPDU_SS_11AC_SU_INFO_12_VHT_SIG_B_SU20_VHT_SIG_B_BW20_MASK 
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_SU20_VHT_SIG_B_BW20_OFFSET PPDU_SS_11AC_SU_INFO_12_VHT_SIG_B_SU20_VHT_SIG_B_BW20_OFFSET


#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_LSB PPDU_SS_11AC_SU_INFO_13_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_LSB  
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_MASK PPDU_SS_11AC_SU_INFO_13_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_MASK
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_OFFSET PPDU_SS_11AC_SU_INFO_13_VHT_SIG_B_MAC_SU40_VHT_SIG_B_BW40_OFFSET


#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_LSB PPDU_SS_11AC_SU_INFO_14_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_LSB   
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_MASK PPDU_SS_11AC_SU_INFO_14_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_MASK   
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_OFFSET PPDU_SS_11AC_SU_INFO_14_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW80_OFFSET


#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW160_LSB PPDU_SS_11AC_SU_INFO_15_VHT_SIG_B_MAC_SU160_VHT_SIG_B_BW160_LSB
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW160_MASK PPDU_SS_11AC_SU_INFO_15_VHT_SIG_B_MAC_SU160_VHT_SIG_B_BW160_MASK
#define PPDU_SS_11AC_SU_INFO_VHT_SIG_B_MAC_SU80_VHT_SIG_B_BW160_OFFSET PPDU_SS_11AC_SU_INFO_15_VHT_SIG_B_MAC_SU160_VHT_SIG_B_BW160_OFFSET


#define PCU_PPDU_SETUP_INSERT_TIMESTAMP_OFFSET_LSB   PCU_PPDU_SETUP_1_INSERT_TIMESTAMP_OFFSET_LSB
#define PCU_PPDU_SETUP_INSERT_TIMESTAMP_OFFSET_MASK   PCU_PPDU_SETUP_1_INSERT_TIMESTAMP_OFFSET_MASK
#define PCU_PPDU_SETUP_INSERT_TIMESTAMP_OFFSET_OFFSET   PCU_PPDU_SETUP_1_INSERT_TIMESTAMP_OFFSET_OFFSET


#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_LSB PDG_SETUP_USERX_5_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_MASK PDG_SETUP_USERX_5_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_OFFSET PDG_SETUP_USERX_5_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_LSB PDG_SETUP_USERX_6_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_MASK PDG_SETUP_USERX_6_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_OFFSET PDG_SETUP_USERX_6_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW20_OFFSET

#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_LSB PDG_SETUP_USERX_7_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_LWSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_MASK PDG_SETUP_USERX_7_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_OFFSET PDG_SETUP_USERX_7_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_LSB PDG_SETUP_USERX_8_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_MASK PDG_SETUP_USERX_8_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_OFFSET PDG_SETUP_USERX_8_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW40_OFFSET


#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_LSB PDG_SETUP_USERX_9_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_MASK PDG_SETUP_USERX_9_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_OFFSET PDG_SETUP_USERX_9_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_LSB PDG_SETUP_USERX_10_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_MASK PDG_SETUP_USERX_10_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_OFFSET PDG_SETUP_USERX_10_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW80_OFFSET

#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_LSB PDG_SETUP_USERX_11_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_MASK PDG_SETUP_USERX_11_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_OFFSET PDG_SETUP_USERX_11_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_LSB PDG_SETUP_USERX_12_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_MASK PDG_SETUP_USERX_12_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_OFFSET PDG_SETUP_USERX_12_TX_RATE_SETTING_TX_RATE_CTR_PPDU_BW160_OFFSET


#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW20_LSB PDG_SETUP_USERX_13_TX_RATE_SETTING_RESPONSE_RATE_BW20_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW20_MASK PDG_SETUP_USERX_13_TX_RATE_SETTING_RESPONSE_RATE_BW20_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW20_OFFSET PDG_SETUP_USERX_13_TX_RATE_SETTING_RESPONSE_RATE_BW20_OFFSET


#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW20_LSB PDG_SETUP_USERX_14_TX_RATE_SETTING_RESPONSE_RATE_BW20_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW20_MASK PDG_SETUP_USERX_14_TX_RATE_SETTING_RESPONSE_RATE_BW20_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW20_OFFSET PDG_SETUP_USERX_14_TX_RATE_SETTING_RESPONSE_RATE_BW20_OFFSET



#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW40_LSB PDG_SETUP_USERX_15_TX_RATE_SETTING_RESPONSE_RATE_BW40_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW40_MASK PDG_SETUP_USERX_15_TX_RATE_SETTING_RESPONSE_RATE_BW40_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW40_OFFSET PDG_SETUP_USERX_15_TX_RATE_SETTING_RESPONSE_RATE_BW40_OFFSET


#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW40_LSB PDG_SETUP_USERX_16_TX_RATE_SETTING_RESPONSE_RATE_BW40_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW40_MASK PDG_SETUP_USERX_16_TX_RATE_SETTING_RESPONSE_RATE_BW40_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW40_OFFSET PDG_SETUP_USERX_16_TX_RATE_SETTING_RESPONSE_RATE_BW40_OFFSET


#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW80_LSB PDG_SETUP_USERX_17_TX_RATE_SETTING_RESPONSE_RATE_BW80_LSB
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW80_MASK PDG_SETUP_USERX_17_TX_RATE_SETTING_RESPONSE_RATE_BW80_MASK
#define PDG_SETUP_USERX_FH_TX_RATE_SETTING_RESPONSE_RATE_BW80_OFFSET PDG_SETUP_USERX_17_TX_RATE_SETTING_RESPONSE_RATE_BW80_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW80_LSB PDG_SETUP_USERX_18_TX_RATE_SETTING_RESPONSE_RATE_BW80_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW80_MASK PDG_SETUP_USERX_18_TX_RATE_SETTING_RESPONSE_RATE_BW80_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW80_OFFSET PDG_SETUP_USERX_18_TX_RATE_SETTING_RESPONSE_RATE_BW80_OFFSET

#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW160_LSB PDG_SETUP_USERX_19_TX_RATE_SETTING_RESPONSE_RATE_BW160_LSB
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW160_MASK PDG_SETUP_USERX_19_TX_RATE_SETTING_RESPONSE_RATE_BW160_MASK
#define PDG_SETUP_USERX_SH_TX_RATE_SETTING_RESPONSE_RATE_BW160_OFFSET PDG_SETUP_USERX_19_TX_RATE_SETTING_RESPONSE_RATE_BW160_OFFSET


#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_LSB   PDG_FES_SETUP_13_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_LSB  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_MASK   PDG_FES_SETUP_13_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_MASK  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_OFFSET   PDG_FES_SETUP_13_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_OFFSET  

#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_LSB   PDG_FES_SETUP_14_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_LSB  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_MASK   PDG_FES_SETUP_14_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_MASK  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_OFFSET   PDG_FES_SETUP_14_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW20_OFFSET  


#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_LSB   PDG_FES_SETUP_15_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_LSB  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_MASK   PDG_FES_SETUP_15_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_MASK  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_OFFSET   PDG_FES_SETUP_15_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_OFFSET  

#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_LSB   PDG_FES_SETUP_16_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_LSB  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_MASK   PDG_FES_SETUP_16_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_MASK  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_OFFSET   PDG_FES_SETUP_16_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW40_OFFSET  


#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_LSB   PDG_FES_SETUP_17_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_LSB  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_MASK   PDG_FES_SETUP_17_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_MASK  
#define PDG_FES_SETUP_FH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_OFFSET   PDG_FES_SETUP_17_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_OFFSET  

#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_LSB   PDG_FES_SETUP_18_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_LSB  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_MASK   PDG_FES_SETUP_18_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_MASK  
#define PDG_FES_SETUP_SH_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_OFFSET   PDG_FES_SETUP_18_TX_RATE_SETTING_RESPONSE_RATE_MPROT_BW80_OFFSET  



#define LS(_v, _f) (_v = ((_v) << (_f)))
#define LSD(_v, _f, _d) (_v = (((_v) << (_f)) | (_d)))



#endif /* WIFI_DESC_IP02  */
