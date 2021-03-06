
// This file has been automatically generated using nplc.py. Do not edit it manually.
// Version: 1.76.2_0.0.0.0 generated on devsrv15.leaba.local at 2021-05-12 16:09:15



#ifndef __NPL_TABLES_ENUM_H__
#define __NPL_TABLES_ENUM_H__

typedef enum {
    NPL_TABLES_NONE,
    NPL_TABLES_ACL_MAP_FI_HEADER_TYPE_TO_PROTOCOL_NUMBER_TABLE,
    NPL_TABLES_ADDITIONAL_LABELS_TABLE,
    NPL_TABLES_ALL_REACHABLE_VECTOR,
    NPL_TABLES_BFD_DESIRED_TX_INTERVAL_TABLE,
    NPL_TABLES_BFD_DETECTION_MULTIPLE_TABLE,
    NPL_TABLES_BFD_EVENT_QUEUE_TABLE,
    NPL_TABLES_BFD_INJECT_INNER_DA_HIGH_TABLE,
    NPL_TABLES_BFD_INJECT_INNER_DA_LOW_TABLE,
    NPL_TABLES_BFD_INJECT_INNER_ETHERNET_HEADER_STATIC_TABLE,
    NPL_TABLES_BFD_INJECT_TTL_STATIC_TABLE,
    NPL_TABLES_BFD_IPV6_SIP_A_TABLE,
    NPL_TABLES_BFD_IPV6_SIP_B_TABLE,
    NPL_TABLES_BFD_IPV6_SIP_C_TABLE,
    NPL_TABLES_BFD_IPV6_SIP_D_TABLE,
    NPL_TABLES_BFD_PUNT_ENCAP_STATIC_TABLE,
    NPL_TABLES_BFD_REQUIRED_TX_INTERVAL_TABLE,
    NPL_TABLES_BFD_RX_TABLE,
    NPL_TABLES_BFD_SET_INJECT_TYPE_STATIC_TABLE,
    NPL_TABLES_BFD_UDP_PORT_MAP_STATIC_TABLE,
    NPL_TABLES_BFD_UDP_PORT_STATIC_TABLE,
    NPL_TABLES_BITMAP_OQG_MAP_TABLE,
    NPL_TABLES_BVN_TC_MAP_TABLE,
    NPL_TABLES_CALC_CHECKSUM_ENABLE_TABLE,
    NPL_TABLES_CCM_FLAGS_TABLE,
    NPL_TABLES_CIF2NPA_C_LRI_MACRO,
    NPL_TABLES_CIF2NPA_C_MPS_MACRO,
    NPL_TABLES_COUNTERS_BLOCK_CONFIG_TABLE,
    NPL_TABLES_COUNTERS_VOQ_BLOCK_MAP_TABLE,
    NPL_TABLES_CUD_IS_MULTICAST_BITMAP,
    NPL_TABLES_CUD_NARROW_HW_TABLE,
    NPL_TABLES_CUD_WIDE_HW_TABLE,
    NPL_TABLES_DEFAULT_EGRESS_IPV4_SEC_ACL_TABLE,
    NPL_TABLES_DEFAULT_EGRESS_IPV6_ACL_SEC_TABLE,
    NPL_TABLES_DEST_SLICE_VOQ_MAP_TABLE,
    NPL_TABLES_DESTINATION_DECODING_TABLE,
    NPL_TABLES_DEVICE_MODE_TABLE,
    NPL_TABLES_DSP_L2_ATTRIBUTES_TABLE,
    NPL_TABLES_DSP_L3_ATTRIBUTES_TABLE,
    NPL_TABLES_DUMMY_DIP_INDEX_TABLE,
    NPL_TABLES_ECN_REMARK_STATIC_TABLE,
    NPL_TABLES_EGRESS_MAC_IPV4_SEC_ACL_TABLE,
    NPL_TABLES_EGRESS_NH_AND_SVI_DIRECT0_TABLE,
    NPL_TABLES_EGRESS_NH_AND_SVI_DIRECT1_TABLE,
    NPL_TABLES_EM_MP_TABLE,
    NPL_TABLES_EM_PFC_CONG_TABLE,
    NPL_TABLES_ENE_BYTE_ADDITION_STATIC_TABLE,
    NPL_TABLES_ENE_MACRO_CODE_TPID_PROFILE_STATIC_TABLE,
    NPL_TABLES_ERPP_FABRIC_COUNTERS_OFFSET_TABLE,
    NPL_TABLES_ERPP_FABRIC_COUNTERS_TABLE,
    NPL_TABLES_ETH_METER_PROFILE_MAPPING_TABLE,
    NPL_TABLES_ETH_OAM_SET_DA_MC2_STATIC_TABLE,
    NPL_TABLES_ETH_OAM_SET_DA_MC_STATIC_TABLE,
    NPL_TABLES_ETH_RTF_CONF_SET_MAPPING_TABLE,
    NPL_TABLES_EVE_BYTE_ADDITION_STATIC_TABLE,
    NPL_TABLES_EVE_TO_ETHERNET_ENE_STATIC_TABLE,
    NPL_TABLES_EVENT_QUEUE_TABLE,
    NPL_TABLES_EXTERNAL_AUX_TABLE,
    NPL_TABLES_FABRIC_AND_TM_HEADER_SIZE_STATIC_TABLE,
    NPL_TABLES_FABRIC_HEADER_ENE_MACRO_TABLE,
    NPL_TABLES_FABRIC_HEADER_TYPES_STATIC_TABLE,
    NPL_TABLES_FABRIC_HEADERS_TYPE_TABLE,
    NPL_TABLES_FABRIC_INIT_CFG,
    NPL_TABLES_FABRIC_NPUH_SIZE_CALCULATION_STATIC_TABLE,
    NPL_TABLES_FABRIC_OUT_COLOR_MAP_TABLE,
    NPL_TABLES_FABRIC_RX_FWD_ERROR_HANDLING_COUNTER_TABLE,
    NPL_TABLES_FABRIC_RX_FWD_ERROR_HANDLING_DESTINATION_TABLE,
    NPL_TABLES_FABRIC_RX_TERM_ERROR_HANDLING_COUNTER_TABLE,
    NPL_TABLES_FABRIC_RX_TERM_ERROR_HANDLING_DESTINATION_TABLE,
    NPL_TABLES_FABRIC_SCALED_MC_MAP_TO_NETORK_SLICE_STATIC_TABLE,
    NPL_TABLES_FABRIC_SMCID_THRESHOLD_TABLE,
    NPL_TABLES_FABRIC_TERM_ERROR_CHECKER_STATIC_TABLE,
    NPL_TABLES_FABRIC_TM_HEADERS_TABLE,
    NPL_TABLES_FABRIC_TRANSMIT_ERROR_CHECKER_STATIC_TABLE,
    NPL_TABLES_FB_LINK_2_LINK_BUNDLE_TABLE,
    NPL_TABLES_FE_BROADCAST_BMP_TABLE,
    NPL_TABLES_FE_RLB_UC_TX_FB_LINK_TO_OQ_MAP_TABLE,
    NPL_TABLES_FE_SMCID_THRESHOLD_TABLE,
    NPL_TABLES_FE_SMCID_TO_MCID_TABLE,
    NPL_TABLES_FE_UC_LINK_BUNDLE_DESC_TABLE,
    NPL_TABLES_FI_CORE_TCAM_TABLE,
    NPL_TABLES_FI_MACRO_CONFIG_TABLE,
    NPL_TABLES_FILB_VOQ_MAPPING,
    NPL_TABLES_FIRST_ENE_STATIC_TABLE,
    NPL_TABLES_FRM_DB_FABRIC_ROUTING_TABLE,
    NPL_TABLES_FWD_DESTINATION_TO_TM_RESULT_DATA,
    NPL_TABLES_FWD_TYPE_TO_IVE_ENABLE_TABLE,
    NPL_TABLES_GET_ECM_METER_PTR_TABLE,
    NPL_TABLES_GET_INGRESS_PTP_INFO_AND_IS_SLP_DM_STATIC_TABLE,
    NPL_TABLES_GET_L2_RTF_CONF_SET_AND_INIT_STAGES,
    NPL_TABLES_GET_NON_COMP_MC_VALUE_STATIC_TABLE,
    NPL_TABLES_GRE_PROTO_STATIC_TABLE,
    NPL_TABLES_HMC_CGM_CGM_LUT_TABLE,
    NPL_TABLES_HMC_CGM_PROFILE_GLOBAL_TABLE,
    NPL_TABLES_IBM_CMD_TABLE,
    NPL_TABLES_IBM_MC_CMD_TO_ENCAP_DATA_TABLE,
    NPL_TABLES_IBM_UC_CMD_TO_ENCAP_DATA_TABLE,
    NPL_TABLES_IFGB_TC_LUT_TABLE,
    NPL_TABLES_INGRESS_IP_QOS_MAPPING_TABLE,
    NPL_TABLES_INGRESS_RTF_ETH_DB1_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_ETH_DB2_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB1_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB1_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB1_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB2_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB2_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB2_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB3_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB3_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB3_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB4_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB4_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV4_DB4_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB1_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB1_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB1_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB2_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB2_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB2_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB3_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB3_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB3_320_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB4_160_F0_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB4_160_F1_TABLE,
    NPL_TABLES_INGRESS_RTF_IPV6_DB4_320_F0_TABLE,
    NPL_TABLES_INJECT_DOWN_SELECT_ENE_STATIC_TABLE,
    NPL_TABLES_INJECT_DOWN_TX_REDIRECT_COUNTER_TABLE,
    NPL_TABLES_INJECT_MACT_LDB_TO_OUTPUT_LR,
    NPL_TABLES_INJECT_UP_PIF_IFG_INIT_DATA_TABLE,
    NPL_TABLES_INJECT_UP_SSP_INIT_DATA_TABLE,
    NPL_TABLES_INNER_TPID_TABLE,
    NPL_TABLES_IP_FWD_HEADER_MAPPING_TO_ETHTYPE_STATIC_TABLE,
    NPL_TABLES_IP_INGRESS_CMP_MCID_STATIC_TABLE,
    NPL_TABLES_IP_MC_LOCAL_INJECT_TYPE_STATIC_TABLE,
    NPL_TABLES_IP_MC_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_IP_METER_PROFILE_MAPPING_TABLE,
    NPL_TABLES_IP_PREFIX_DESTINATION_TABLE,
    NPL_TABLES_IP_RELAY_TO_VNI_TABLE,
    NPL_TABLES_IP_RX_GLOBAL_COUNTER_TABLE,
    NPL_TABLES_IP_VER_MC_STATIC_TABLE,
    NPL_TABLES_IPV4_ACL_MAP_PROTOCOL_TYPE_TO_PROTOCOL_NUMBER_TABLE,
    NPL_TABLES_IPV4_ACL_SPORT_STATIC_TABLE,
    NPL_TABLES_IPV4_IP_TUNNEL_TERMINATION_DIP_INDEX_TT0_TABLE,
    NPL_TABLES_IPV4_IP_TUNNEL_TERMINATION_SIP_DIP_INDEX_TT0_TABLE,
    NPL_TABLES_IPV4_IP_TUNNEL_TERMINATION_SIP_DIP_INDEX_TT1_TABLE,
    NPL_TABLES_IPV4_LPM_TABLE,
    NPL_TABLES_IPV4_LPTS_TABLE,
    NPL_TABLES_IPV4_OG_PCL_EM_TABLE,
    NPL_TABLES_IPV4_OG_PCL_LPM_TABLE,
    NPL_TABLES_IPV4_RTF_CONF_SET_MAPPING_TABLE,
    NPL_TABLES_IPV4_VRF_DIP_EM_TABLE,
    NPL_TABLES_IPV4_VRF_S_G_TABLE,
    NPL_TABLES_IPV6_ACL_SPORT_STATIC_TABLE,
    NPL_TABLES_IPV6_FIRST_FRAGMENT_STATIC_TABLE,
    NPL_TABLES_IPV6_LPM_TABLE,
    NPL_TABLES_IPV6_LPTS_TABLE,
    NPL_TABLES_IPV6_MC_SELECT_QOS_ID,
    NPL_TABLES_IPV6_OG_PCL_EM_TABLE,
    NPL_TABLES_IPV6_OG_PCL_LPM_TABLE,
    NPL_TABLES_IPV6_RTF_CONF_SET_MAPPING_TABLE,
    NPL_TABLES_IPV6_SIP_COMPRESSION_TABLE,
    NPL_TABLES_IPV6_VRF_DIP_EM_TABLE,
    NPL_TABLES_IPV6_VRF_S_G_TABLE,
    NPL_TABLES_IS_PACIFIC_B1_STATIC_TABLE,
    NPL_TABLES_L2_DLP_TABLE,
    NPL_TABLES_L2_LP_PROFILE_FILTER_TABLE,
    NPL_TABLES_L2_LPTS_CTRL_FIELDS_STATIC_TABLE,
    NPL_TABLES_L2_LPTS_IP_FRAGMENT_STATIC_TABLE,
    NPL_TABLES_L2_LPTS_IPV4_TABLE,
    NPL_TABLES_L2_LPTS_IPV6_TABLE,
    NPL_TABLES_L2_LPTS_MAC_TABLE,
    NPL_TABLES_L2_LPTS_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_L2_LPTS_PROTOCOL_TABLE,
    NPL_TABLES_L2_LPTS_SKIP_P2P_STATIC_TABLE,
    NPL_TABLES_L2_TERMINATION_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_L2_TUNNEL_TERM_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_L3_DLP_P_COUNTER_OFFSET_TABLE,
    NPL_TABLES_L3_DLP_TABLE,
    NPL_TABLES_L3_TERMINATION_CLASSIFY_IP_TUNNELS_TABLE,
    NPL_TABLES_L3_TERMINATION_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_L3_TUNNEL_TERMINATION_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_L3_VXLAN_OVERLAY_SA_TABLE,
    NPL_TABLES_LARGE_ENCAP_GLOBAL_LSP_PREFIX_TABLE,
    NPL_TABLES_LARGE_ENCAP_IP_TUNNEL_TABLE,
    NPL_TABLES_LARGE_ENCAP_MPLS_HE_NO_LDP_TABLE,
    NPL_TABLES_LARGE_ENCAP_MPLS_LDP_OVER_TE_TABLE,
    NPL_TABLES_LARGE_ENCAP_TE_HE_TUNNEL_ID_TABLE,
    NPL_TABLES_LATEST_LEARN_RECORDS_TABLE,
    NPL_TABLES_LEARN_MANAGER_CFG_MAX_LEARN_TYPE_REG,
    NPL_TABLES_LEARN_RECORD_FIFO_TABLE,
    NPL_TABLES_LIGHT_FI_FABRIC_TABLE,
    NPL_TABLES_LIGHT_FI_NPU_BASE_TABLE,
    NPL_TABLES_LIGHT_FI_NPU_ENCAP_TABLE,
    NPL_TABLES_LIGHT_FI_NW_0_TABLE,
    NPL_TABLES_LIGHT_FI_NW_1_TABLE,
    NPL_TABLES_LIGHT_FI_NW_2_TABLE,
    NPL_TABLES_LIGHT_FI_NW_3_TABLE,
    NPL_TABLES_LIGHT_FI_STAGES_CFG_TABLE,
    NPL_TABLES_LIGHT_FI_TM_TABLE,
    NPL_TABLES_LINK_RELAY_ATTRIBUTES_TABLE,
    NPL_TABLES_LINK_UP_VECTOR,
    NPL_TABLES_LP_OVER_LAG_TABLE,
    NPL_TABLES_LPM_DESTINATION_PREFIX_MAP_TABLE,
    NPL_TABLES_LPTS_2ND_LOOKUP_TABLE,
    NPL_TABLES_LPTS_METER_TABLE,
    NPL_TABLES_LPTS_OG_APPLICATION_TABLE,
    NPL_TABLES_LR_FILTER_WRITE_PTR_REG,
    NPL_TABLES_LR_WRITE_PTR_REG,
    NPL_TABLES_MAC_AF_NPP_ATTRIBUTES_TABLE,
    NPL_TABLES_MAC_DA_TABLE,
    NPL_TABLES_MAC_ETHERNET_RATE_LIMIT_TYPE_STATIC_TABLE,
    NPL_TABLES_MAC_FORWARDING_TABLE,
    NPL_TABLES_MAC_MC_EM_TERMINATION_ATTRIBUTES_TABLE,
    NPL_TABLES_MAC_MC_TCAM_TERMINATION_ATTRIBUTES_TABLE,
    NPL_TABLES_MAC_QOS_MAPPING_TABLE,
    NPL_TABLES_MAC_RELAY_G_IPV4_TABLE,
    NPL_TABLES_MAC_RELAY_G_IPV6_TABLE,
    NPL_TABLES_MAC_RELAY_TO_VNI_TABLE,
    NPL_TABLES_MAC_TERMINATION_EM_TABLE,
    NPL_TABLES_MAC_TERMINATION_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_MAC_TERMINATION_NO_DA_EM_TABLE,
    NPL_TABLES_MAC_TERMINATION_TCAM_TABLE,
    NPL_TABLES_MAP_ENE_SUBCODE_TO8BIT_STATIC_TABLE,
    NPL_TABLES_MAP_INJECT_CCM_MACRO_STATIC_TABLE,
    NPL_TABLES_MAP_MORE_LABELS_STATIC_TABLE,
    NPL_TABLES_MAP_RECYLE_TX_TO_RX_DATA_ON_PD_STATIC_TABLE,
    NPL_TABLES_MAP_TM_DP_ECN_TO_WA_ECN_DP_STATIC_TABLE,
    NPL_TABLES_MAP_TX_PUNT_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_MAP_TX_PUNT_RCY_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_MC_BITMAP_BASE_VOQ_LOOKUP_TABLE,
    NPL_TABLES_MC_BITMAP_TC_MAP_TABLE,
    NPL_TABLES_MC_COPY_ID_MAP,
    NPL_TABLES_MC_CUD_IS_WIDE_TABLE,
    NPL_TABLES_MC_EM_DB,
    NPL_TABLES_MC_EMDB_TC_MAP_TABLE,
    NPL_TABLES_MC_FE_LINKS_BMP,
    NPL_TABLES_MC_IBM_CUD_MAPPING_TABLE,
    NPL_TABLES_MC_SLICE_BITMAP_TABLE,
    NPL_TABLES_MEG_ID_FORMAT_TABLE,
    NPL_TABLES_MEP_ADDRESS_PREFIX_TABLE,
    NPL_TABLES_MII_LOOPBACK_TABLE,
    NPL_TABLES_MIRROR_CODE_HW_TABLE,
    NPL_TABLES_MIRROR_EGRESS_ATTRIBUTES_TABLE,
    NPL_TABLES_MIRROR_TO_DSP_IN_NPU_SOFT_HEADER_TABLE,
    NPL_TABLES_MLDP_PROTECTION_ENABLED_STATIC_TABLE,
    NPL_TABLES_MLDP_PROTECTION_TABLE,
    NPL_TABLES_MP_AUX_DATA_TABLE,
    NPL_TABLES_MP_DATA_TABLE,
    NPL_TABLES_MPLS_ENCAP_CONTROL_STATIC_TABLE,
    NPL_TABLES_MPLS_FORWARDING_TABLE,
    NPL_TABLES_MPLS_HEADER_OFFSET_IN_BYTES_STATIC_TABLE,
    NPL_TABLES_MPLS_L3_LSP_STATIC_TABLE,
    NPL_TABLES_MPLS_LABELS_1_TO_4_JUMP_OFFSET_STATIC_TABLE,
    NPL_TABLES_MPLS_LSP_LABELS_CONFIG_STATIC_TABLE,
    NPL_TABLES_MPLS_QOS_MAPPING_TABLE,
    NPL_TABLES_MPLS_RESOLVE_SERVICE_LABELS_STATIC_TABLE,
    NPL_TABLES_MPLS_TERMINATION_EM0_TABLE,
    NPL_TABLES_MPLS_TERMINATION_EM1_TABLE,
    NPL_TABLES_MPLS_VPN_ENABLED_STATIC_TABLE,
    NPL_TABLES_MS_VOQ_FABRIC_CONTEXT_OFFSET_TABLE,
    NPL_TABLES_MY_IPV4_TABLE,
    NPL_TABLES_NATIVE_CE_PTR_TABLE,
    NPL_TABLES_NATIVE_FEC_TABLE,
    NPL_TABLES_NATIVE_FEC_TYPE_DECODING_TABLE,
    NPL_TABLES_NATIVE_FRR_TABLE,
    NPL_TABLES_NATIVE_FRR_TYPE_DECODING_TABLE,
    NPL_TABLES_NATIVE_L2_LP_TABLE,
    NPL_TABLES_NATIVE_L2_LP_TYPE_DECODING_TABLE,
    NPL_TABLES_NATIVE_LB_GROUP_SIZE_TABLE,
    NPL_TABLES_NATIVE_LB_TABLE,
    NPL_TABLES_NATIVE_LB_TYPE_DECODING_TABLE,
    NPL_TABLES_NATIVE_LP_IS_PBTS_PREFIX_TABLE,
    NPL_TABLES_NATIVE_LP_PBTS_MAP_TABLE,
    NPL_TABLES_NATIVE_PROTECTION_TABLE,
    NPL_TABLES_NEXT_HEADER_1_IS_L4_OVER_IPV4_STATIC_TABLE,
    NPL_TABLES_NH_MACRO_CODE_TO_ID_L6_STATIC_TABLE,
    NPL_TABLES_NHLFE_TYPE_MAPPING_STATIC_TABLE,
    NPL_TABLES_NULL_RTF_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_NW_SMCID_THRESHOLD_TABLE,
    NPL_TABLES_OAMP_DROP_DESTINATION_STATIC_TABLE,
    NPL_TABLES_OAMP_EVENT_QUEUE_TABLE,
    NPL_TABLES_OAMP_REDIRECT_GET_COUNTER_TABLE,
    NPL_TABLES_OAMP_REDIRECT_PUNT_ETH_HDR_1_TABLE,
    NPL_TABLES_OAMP_REDIRECT_PUNT_ETH_HDR_2_TABLE,
    NPL_TABLES_OAMP_REDIRECT_PUNT_ETH_HDR_3_TABLE,
    NPL_TABLES_OAMP_REDIRECT_PUNT_ETH_HDR_4_TABLE,
    NPL_TABLES_OAMP_REDIRECT_TABLE,
    NPL_TABLES_OBM_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_OG_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_OUTER_TPID_TABLE,
    NPL_TABLES_OVERLAY_IPV4_SIP_TABLE,
    NPL_TABLES_PAD_MTU_INJ_CHECK_STATIC_TABLE,
    NPL_TABLES_PATH_LB_TYPE_DECODING_TABLE,
    NPL_TABLES_PATH_LP_IS_PBTS_PREFIX_TABLE,
    NPL_TABLES_PATH_LP_PBTS_MAP_TABLE,
    NPL_TABLES_PATH_LP_TABLE,
    NPL_TABLES_PATH_LP_TYPE_DECODING_TABLE,
    NPL_TABLES_PATH_PROTECTION_TABLE,
    NPL_TABLES_PDOQ_OQ_IFC_MAPPING,
    NPL_TABLES_PDVOQ_BANK_PAIR_OFFSET_TABLE,
    NPL_TABLES_PDVOQ_SLICE_VOQ_PROPERTIES_TABLE,
    NPL_TABLES_PER_ASBR_AND_DPE_TABLE,
    NPL_TABLES_PER_PE_AND_PREFIX_VPN_KEY_LARGE_TABLE,
    NPL_TABLES_PER_PE_AND_VRF_VPN_KEY_LARGE_TABLE,
    NPL_TABLES_PER_PORT_DESTINATION_TABLE,
    NPL_TABLES_PER_VRF_MPLS_FORWARDING_TABLE,
    NPL_TABLES_PFC_DESTINATION_TABLE,
    NPL_TABLES_PFC_EVENT_QUEUE_TABLE,
    NPL_TABLES_PFC_FILTER_WD_TABLE,
    NPL_TABLES_PFC_OFFSET_FROM_VECTOR_STATIC_TABLE,
    NPL_TABLES_PFC_SSP_SLICE_MAP_TABLE,
    NPL_TABLES_PFC_TC_LATENCY_TABLE,
    NPL_TABLES_PFC_TC_TABLE,
    NPL_TABLES_PFC_TC_WRAP_LATENCY_TABLE,
    NPL_TABLES_PFC_VECTOR_STATIC_TABLE,
    NPL_TABLES_PIN_START_OFFSET_MACROS,
    NPL_TABLES_PMA_LOOPBACK_TABLE,
    NPL_TABLES_PORT_DSPA_GROUP_SIZE_TABLE,
    NPL_TABLES_PORT_DSPA_TABLE,
    NPL_TABLES_PORT_DSPA_TYPE_DECODING_TABLE,
    NPL_TABLES_PORT_NPP_PROTECTION_TABLE,
    NPL_TABLES_PORT_NPP_PROTECTION_TYPE_DECODING_TABLE,
    NPL_TABLES_PORT_PROTECTION_TABLE,
    NPL_TABLES_PUNT_ETHERTYPE_STATIC_TABLE,
    NPL_TABLES_PUNT_RCY_INJECT_HEADER_ENE_ENCAP_TABLE,
    NPL_TABLES_PUNT_SELECT_NW_ENE_STATIC_TABLE,
    NPL_TABLES_PUNT_TUNNEL_TRANSPORT_ENCAP_TABLE,
    NPL_TABLES_PUNT_TUNNEL_TRANSPORT_EXTENDED_ENCAP_TABLE,
    NPL_TABLES_PUNT_TUNNEL_TRANSPORT_EXTENDED_ENCAP_TABLE2,
    NPL_TABLES_PWE_LABEL_TABLE,
    NPL_TABLES_PWE_TO_L3_DEST_TABLE,
    NPL_TABLES_PWE_VPLS_LABEL_TABLE,
    NPL_TABLES_PWE_VPLS_TUNNEL_LABEL_TABLE,
    NPL_TABLES_REASSEMBLY_SOURCE_PORT_MAP_TABLE,
    NPL_TABLES_RECYCLE_OVERRIDE_TABLE,
    NPL_TABLES_RECYCLED_INJECT_UP_INFO_TABLE,
    NPL_TABLES_REDIRECT_DESTINATION_TABLE,
    NPL_TABLES_REDIRECT_TABLE,
    NPL_TABLES_RESOLUTION_PFC_SELECT_TABLE,
    NPL_TABLES_RESOLUTION_SET_NEXT_MACRO_TABLE,
    NPL_TABLES_REWRITE_SA_PREFIX_INDEX_TABLE,
    NPL_TABLES_RMEP_LAST_TIME_TABLE,
    NPL_TABLES_RMEP_STATE_TABLE,
    NPL_TABLES_RPF_FEC_ACCESS_MAP_TABLE,
    NPL_TABLES_RPF_FEC_TABLE,
    NPL_TABLES_RTF_CONF_SET_TO_OG_PCL_COMPRESS_BITS_MAPPING_TABLE,
    NPL_TABLES_RTF_CONF_SET_TO_OG_PCL_IDS_MAPPING_TABLE,
    NPL_TABLES_RTF_CONF_SET_TO_POST_FWD_STAGE_MAPPING_TABLE,
    NPL_TABLES_RTF_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_RX_COUNTERS_BLOCK_CONFIG_TABLE,
    NPL_TABLES_RX_FWD_ERROR_HANDLING_COUNTER_TABLE,
    NPL_TABLES_RX_FWD_ERROR_HANDLING_DESTINATION_TABLE,
    NPL_TABLES_RX_IP_P_COUNTER_OFFSET_STATIC_TABLE,
    NPL_TABLES_RX_MAP_NPP_TO_SSP_TABLE,
    NPL_TABLES_RX_METER_BLOCK_METER_ATTRIBUTE_TABLE,
    NPL_TABLES_RX_METER_BLOCK_METER_PROFILE_TABLE,
    NPL_TABLES_RX_METER_BLOCK_METER_SHAPER_CONFIGURATION_TABLE,
    NPL_TABLES_RX_METER_DISTRIBUTED_METER_PROFILE_TABLE,
    NPL_TABLES_RX_METER_EXACT_METER_DECISION_MAPPING_TABLE,
    NPL_TABLES_RX_METER_METER_PROFILE_TABLE,
    NPL_TABLES_RX_METER_METER_SHAPER_CONFIGURATION_TABLE,
    NPL_TABLES_RX_METER_METERS_ATTRIBUTE_TABLE,
    NPL_TABLES_RX_METER_RATE_LIMITER_SHAPER_CONFIGURATION_TABLE,
    NPL_TABLES_RX_METER_STAT_METER_DECISION_MAPPING_TABLE,
    NPL_TABLES_RX_NPU_TO_TM_DEST_TABLE,
    NPL_TABLES_RX_OBM_CODE_TABLE,
    NPL_TABLES_RX_OBM_PUNT_SRC_AND_CODE_TABLE,
    NPL_TABLES_RX_REDIRECT_CODE_EXT_TABLE,
    NPL_TABLES_RX_REDIRECT_CODE_TABLE,
    NPL_TABLES_RX_REDIRECT_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_RX_TERM_ERROR_HANDLING_COUNTER_TABLE,
    NPL_TABLES_RX_TERM_ERROR_HANDLING_DESTINATION_TABLE,
    NPL_TABLES_RXPDR_DSP_LOOKUP_TABLE,
    NPL_TABLES_RXPDR_DSP_TC_MAP,
    NPL_TABLES_SCH_OQSE_CFG,
    NPL_TABLES_SECOND_ENE_STATIC_TABLE,
    NPL_TABLES_SELECT_INJECT_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_SERVICE_LP_ATTRIBUTES_TABLE,
    NPL_TABLES_SERVICE_MAPPING_EM0_AC_PORT_TABLE,
    NPL_TABLES_SERVICE_MAPPING_EM0_AC_PORT_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_EM0_AC_PORT_TAG_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_EM0_PWE_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_EM1_AC_PORT_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_TCAM_AC_PORT_TABLE,
    NPL_TABLES_SERVICE_MAPPING_TCAM_AC_PORT_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_TCAM_AC_PORT_TAG_TAG_TABLE,
    NPL_TABLES_SERVICE_MAPPING_TCAM_PWE_TAG_TABLE,
    NPL_TABLES_SERVICE_RELAY_ATTRIBUTES_TABLE,
    NPL_TABLES_SET_ENE_MACRO_AND_BYTES_TO_REMOVE_TABLE,
    NPL_TABLES_SGACL_TABLE,
    NPL_TABLES_SIP_INDEX_TABLE,
    NPL_TABLES_SLICE_MODES_TABLE,
    NPL_TABLES_SLP_BASED_FORWARDING_TABLE,
    NPL_TABLES_SMALL_ENCAP_MPLS_HE_ASBR_TABLE,
    NPL_TABLES_SMALL_ENCAP_MPLS_HE_TE_TABLE,
    NPL_TABLES_SNOOP_CODE_HW_TABLE,
    NPL_TABLES_SNOOP_TABLE,
    NPL_TABLES_SNOOP_TO_DSP_IN_NPU_SOFT_HEADER_TABLE,
    NPL_TABLES_SOURCE_PIF_HW_TABLE,
    NPL_TABLES_STAGE2_LB_GROUP_SIZE_TABLE,
    NPL_TABLES_STAGE2_LB_TABLE,
    NPL_TABLES_STAGE3_LB_GROUP_SIZE_TABLE,
    NPL_TABLES_STAGE3_LB_TABLE,
    NPL_TABLES_STAGE3_LB_TYPE_DECODING_TABLE,
    NPL_TABLES_SVL_NEXT_MACRO_STATIC_TABLE,
    NPL_TABLES_TE_HEADEND_LSP_COUNTER_OFFSET_TABLE,
    NPL_TABLES_TERMINATION_TO_FORWARDING_FI_HARDWIRED_TABLE,
    NPL_TABLES_TM_IBM_CMD_TO_DESTINATION,
    NPL_TABLES_TS_CMD_HW_STATIC_TABLE,
    NPL_TABLES_TUNNEL_DLP_P_COUNTER_OFFSET_TABLE,
    NPL_TABLES_TUNNEL_QOS_STATIC_TABLE,
    NPL_TABLES_TX_COUNTERS_BLOCK_CONFIG_TABLE,
    NPL_TABLES_TX_ERROR_HANDLING_COUNTER_TABLE,
    NPL_TABLES_TX_PUNT_ETH_ENCAP_TABLE,
    NPL_TABLES_TX_REDIRECT_CODE_TABLE,
    NPL_TABLES_TXPDR_MC_LIST_SIZE_TABLE,
    NPL_TABLES_TXPDR_TC_MAP_TABLE,
    NPL_TABLES_TXPP_DLP_PROFILE_TABLE,
    NPL_TABLES_TXPP_ENCAP_QOS_MAPPING_TABLE,
    NPL_TABLES_TXPP_FIRST_ENC_TYPE_TO_SECOND_ENC_TYPE_OFFSET,
    NPL_TABLES_TXPP_FWD_HEADER_TYPE_IS_L2_TABLE,
    NPL_TABLES_TXPP_FWD_QOS_MAPPING_TABLE,
    NPL_TABLES_TXPP_IBM_ENABLES_TABLE,
    NPL_TABLES_TXPP_INITIAL_NPE_MACRO_TABLE,
    NPL_TABLES_TXPP_MAPPING_QOS_TAG_TABLE,
    NPL_TABLES_UC_IBM_TC_MAP_TABLE,
    NPL_TABLES_URPF_IPSA_DEST_IS_LPTS_STATIC_TABLE,
    NPL_TABLES_VLAN_EDIT_TPID1_PROFILE_HW_TABLE,
    NPL_TABLES_VLAN_EDIT_TPID2_PROFILE_HW_TABLE,
    NPL_TABLES_VLAN_FORMAT_TABLE,
    NPL_TABLES_VNI_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_BUFFERS_CONSUMPTION_LUT_FOR_ENQ_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_DRAM_CGM_PROFILE_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_PD_CONSUMPTION_LUT_FOR_ENQ_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_PROFILE_BUFF_REGION_THRESHOLDS_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_PROFILE_PKT_ENQ_TIME_REGION_THRESHOLDS_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_PROFILE_PKT_REGION_THRESHOLDS_TABLE,
    NPL_TABLES_VOQ_CGM_SLICE_SLICE_CGM_PROFILE_TABLE,
    NPL_TABLES_VSID_TABLE,
    NPL_TABLES_VXLAN_L2_DLP_TABLE,
    NPL_TABLES_NUM
} npl_tables_e;


extern const char * npl_table_names[NPL_TABLES_NUM+1];

#endif
