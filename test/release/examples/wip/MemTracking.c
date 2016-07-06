/* MemTracking.chpl:22 */
 void chpl__init_MemTracking(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  chpl_bool const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool const_tmp4;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  c_string call_tmp12;
  uint64_t const_tmp5;
  chpl_bool call_tmp13;
  chpl_bool call_tmp14;
  uint64_t call_tmp15;
  c_string call_tmp16;
  uint64_t const_tmp6;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  uint64_t call_tmp19;
  c_string call_tmp20;
  string const_tmp7;
  chpl_bool call_tmp21;
  chpl_bool call_tmp22;
  string this7;
  c_ptr_uint8_t call_tmp23 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  c_string call_tmp24;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string const_tmp8;
  chpl_bool call_tmp25;
  chpl_bool call_tmp26;
  string this8;
  c_ptr_uint8_t call_tmp27 = NULL;
  int32_t default_arglocale_id2;
  string wrap_call_tmp2;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  c_string call_tmp28;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string const_tmp9;
  chpl_bool call_tmp29;
  chpl_bool call_tmp30;
  string this9;
  c_ptr_uint8_t call_tmp31 = NULL;
  int32_t default_arglocale_id3;
  string wrap_call_tmp3;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  c_string call_tmp32;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  uint64_t call_tmp33;
  uint64_t call_tmp34;
  if (chpl__init_MemTracking_p) {
    goto _exit_chpl__init_MemTracking;
  }
  modFormatStr = "%*s\n";
  modStr = "MemTracking";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_MemTracking_p = UINT8(true);
  call_tmp = chpl_config_has_value("memTrack", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    const_tmp = UINT8(false);
  } else {
    call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
    const_tmp = _command_line_cast3(call_tmp3);
  }
  memTrack = const_tmp;
  call_tmp4 = chpl_config_has_value("memStats", "Built-in");
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    const_tmp2 = UINT8(false);
  } else {
    call_tmp6 = chpl_config_get_value("memStats", "Built-in");
    const_tmp2 = _command_line_cast2(call_tmp6);
  }
  memStats = const_tmp2;
  call_tmp7 = chpl_config_has_value("memLeaksByType", "Built-in");
  call_tmp8 = (! call_tmp7);
  if (call_tmp8) {
    const_tmp3 = UINT8(false);
  } else {
    call_tmp9 = chpl_config_get_value("memLeaksByType", "Built-in");
    const_tmp3 = _command_line_cast5(call_tmp9);
  }
  memLeaksByType = const_tmp3;
  call_tmp10 = chpl_config_has_value("memLeaks", "Built-in");
  call_tmp11 = (! call_tmp10);
  if (call_tmp11) {
    const_tmp4 = UINT8(false);
  } else {
    call_tmp12 = chpl_config_get_value("memLeaks", "Built-in");
    const_tmp4 = _command_line_cast8(call_tmp12);
  }
  memLeaks = const_tmp4;
  call_tmp13 = chpl_config_has_value("memMax", "Built-in");
  call_tmp14 = (! call_tmp13);
  if (call_tmp14) {
    call_tmp15 = ((uint64_t)(INT64(0)));
    const_tmp5 = call_tmp15;
  } else {
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
    const_tmp5 = _command_line_cast(call_tmp16);
  }
  memMax = const_tmp5;
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
  call_tmp18 = (! call_tmp17);
  if (call_tmp18) {
    call_tmp19 = ((uint64_t)(INT64(0)));
    const_tmp6 = call_tmp19;
  } else {
    call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
    const_tmp6 = _command_line_cast9(call_tmp20);
  }
  memThreshold = const_tmp6;
  call_tmp21 = chpl_config_has_value("memLog", "Built-in");
  call_tmp22 = (! call_tmp21);
  if (call_tmp22) {
    (&this7)->len = INT64(0);
    (&this7)->_size = INT64(0);
    (&this7)->buff = nil;
    (&this7)->owned = UINT8(false);
    (&this7)->locale_id = INT32(0);
    (&this7)->len = INT64(0);
    (&this7)->_size = INT64(0);
    call_tmp23 = ((c_ptr_uint8_t)(nil));
    (&this7)->buff = call_tmp23;
    (&this7)->owned = UINT8(true);
    default_arglocale_id = chpl_nodeID;
    (&this7)->locale_id = default_arglocale_id;
    ret_to_arg_ref_tmp_ = &wrap_call_tmp;
    _construct_string(INT64(0), INT64(0), call_tmp23, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
    const_tmp7 = wrap_call_tmp;
  } else {
    call_tmp24 = chpl_config_get_value("memLog", "Built-in");
    ret_to_arg_ref_tmp_2 = &const_tmp7;
    _command_line_cast10(call_tmp24, ret_to_arg_ref_tmp_2);
  }
  memLog = const_tmp7;
  call_tmp25 = chpl_config_has_value("memLeaksLog", "Built-in");
  call_tmp26 = (! call_tmp25);
  if (call_tmp26) {
    (&this8)->len = INT64(0);
    (&this8)->_size = INT64(0);
    (&this8)->buff = nil;
    (&this8)->owned = UINT8(false);
    (&this8)->locale_id = INT32(0);
    (&this8)->len = INT64(0);
    (&this8)->_size = INT64(0);
    call_tmp27 = ((c_ptr_uint8_t)(nil));
    (&this8)->buff = call_tmp27;
    (&this8)->owned = UINT8(true);
    default_arglocale_id2 = chpl_nodeID;
    (&this8)->locale_id = default_arglocale_id2;
    ret_to_arg_ref_tmp_3 = &wrap_call_tmp2;
    _construct_string(INT64(0), INT64(0), call_tmp27, UINT8(true), default_arglocale_id2, &this8, ret_to_arg_ref_tmp_3);
    const_tmp8 = wrap_call_tmp2;
  } else {
    call_tmp28 = chpl_config_get_value("memLeaksLog", "Built-in");
    ret_to_arg_ref_tmp_4 = &const_tmp8;
    _command_line_cast14(call_tmp28, ret_to_arg_ref_tmp_4);
  }
  memLeaksLog = const_tmp8;
  call_tmp29 = chpl_config_has_value("memLeaksByDesc", "Built-in");
  call_tmp30 = (! call_tmp29);
  if (call_tmp30) {
    (&this9)->len = INT64(0);
    (&this9)->_size = INT64(0);
    (&this9)->buff = nil;
    (&this9)->owned = UINT8(false);
    (&this9)->locale_id = INT32(0);
    (&this9)->len = INT64(0);
    (&this9)->_size = INT64(0);
    call_tmp31 = ((c_ptr_uint8_t)(nil));
    (&this9)->buff = call_tmp31;
    (&this9)->owned = UINT8(true);
    default_arglocale_id3 = chpl_nodeID;
    (&this9)->locale_id = default_arglocale_id3;
    ret_to_arg_ref_tmp_5 = &wrap_call_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp31, UINT8(true), default_arglocale_id3, &this9, ret_to_arg_ref_tmp_5);
    const_tmp9 = wrap_call_tmp3;
  } else {
    call_tmp32 = chpl_config_get_value("memLeaksByDesc", "Built-in");
    ret_to_arg_ref_tmp_6 = &const_tmp9;
    _command_line_cast12(call_tmp32, ret_to_arg_ref_tmp_6);
  }
  memLeaksByDesc = const_tmp9;
  call_tmp33 = memMax;
  cMemMax = call_tmp33;
  call_tmp34 = memThreshold;
  cMemThreshold = call_tmp34;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemTracking:;
  return;
}

/* MemTracking.chpl:71 */
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog) {
  string local_memLeaksLog;
  string local_memLog;
  string local__str_literal_306;
  string local_memLeaksByDesc;
  int32_t local_c_sublocid_any;
  uint64_t local_cMemThreshold;
  uint64_t local_cMemMax;
  chpl_bool local_memLeaks;
  chpl_bool local_memLeaksByType;
  chpl_bool local_memStats;
  chpl_bool local_memTrack;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp = NULL;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  int64_t ret;
  chpl_bool call_tmp4;
  string local_memLeaksByDesc2;
  _ref_chpl_bool call_tmp5 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp6;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp7;
  _ref_string _ref_tmp_ = NULL;
  c_string call_tmp8;
  int64_t ret2;
  chpl_bool call_tmp9;
  string local_memLog2;
  _ref_chpl_bool call_tmp10 = NULL;
  int32_t coerce_tmp3;
  chpl_bool call_tmp11;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  c_string call_tmp12;
  _ref_string _ref_tmp_2 = NULL;
  c_string call_tmp13;
  int64_t ret3;
  chpl_bool call_tmp14;
  string local_memLeaksLog2;
  _ref_chpl_bool call_tmp15 = NULL;
  int32_t coerce_tmp5;
  chpl_bool call_tmp16;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  c_string call_tmp17;
  _ref_string _ref_tmp_3 = NULL;
  c_string call_tmp18;
  int32_t coerce_tmp7;
  chpl_bool call_tmp19;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  c_string call_tmp20;
  int32_t coerce_tmp9;
  chpl_bool call_tmp21;
  c_ptr_uint8_t coerce_tmp10 = NULL;
  c_string call_tmp22;
  int32_t coerce_tmp11;
  chpl_bool call_tmp23;
  c_ptr_uint8_t coerce_tmp12 = NULL;
  c_string call_tmp24;
  local_memLeaksLog = memLeaksLog;
  local_memLog = memLog;
  local__str_literal_306 = _str_literal_306;
  local_memLeaksByDesc = memLeaksByDesc;
  local_c_sublocid_any = c_sublocid_any;
  local_cMemThreshold = cMemThreshold;
  local_cMemMax = cMemMax;
  local_memLeaks = memLeaks;
  local_memLeaksByType = memLeaksByType;
  local_memStats = memStats;
  local_memTrack = memTrack;
  *(ret_memTrack) = local_memTrack;
  *(ret_memStats) = local_memStats;
  *(ret_memLeaksByType) = local_memLeaksByType;
  *(ret_memLeaks) = local_memLeaks;
  *(ret_memMax) = local_cMemMax;
  *(ret_memThreshold) = local_cMemThreshold;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp = chpl_localeID_to_locale(&_autoCopy_tmp_);
  chpl_check_nil(call_tmp, INT64(87), INT64(36));
  call_tmp2 = id(call_tmp);
  call_tmp3 = (call_tmp2 != INT64(0));
  if (call_tmp3) {
    ret = (&local_memLeaksByDesc)->len;
    call_tmp4 = (ret != INT64(0));
    if (call_tmp4) {
      local_memLeaksByDesc2 = chpl__initCopy3(&local_memLeaksByDesc);
      call_tmp5 = &((&local_memLeaksByDesc2)->owned);
      *(call_tmp5) = UINT8(false);
      coerce_tmp = (&local_memLeaksByDesc2)->locale_id;
      call_tmp6 = (coerce_tmp != chpl_nodeID);
      if (call_tmp6) {
        halt(&local__str_literal_306, INT64(92), INT32(36));
      }
      coerce_tmp2 = (&local_memLeaksByDesc2)->buff;
      call_tmp7 = ((c_string)(coerce_tmp2));
      *(ret_memLeaksByDesc) = call_tmp7;
      _ref_tmp_ = &local_memLeaksByDesc2;
      chpl___TILDE_string(_ref_tmp_);
    } else {
      call_tmp8 = ((c_string)(NULL));
      *(ret_memLeaksByDesc) = call_tmp8;
    }
    ret2 = (&local_memLog)->len;
    call_tmp9 = (ret2 != INT64(0));
    if (call_tmp9) {
      local_memLog2 = chpl__initCopy3(&local_memLog);
      call_tmp10 = &((&local_memLog2)->owned);
      *(call_tmp10) = UINT8(false);
      coerce_tmp3 = (&local_memLog2)->locale_id;
      call_tmp11 = (coerce_tmp3 != chpl_nodeID);
      if (call_tmp11) {
        halt(&local__str_literal_306, INT64(101), INT32(36));
      }
      coerce_tmp4 = (&local_memLog2)->buff;
      call_tmp12 = ((c_string)(coerce_tmp4));
      *(ret_memLog) = call_tmp12;
      _ref_tmp_2 = &local_memLog2;
      chpl___TILDE_string(_ref_tmp_2);
    } else {
      call_tmp13 = ((c_string)(NULL));
      *(ret_memLog) = call_tmp13;
    }
    ret3 = (&local_memLeaksLog)->len;
    call_tmp14 = (ret3 != INT64(0));
    if (call_tmp14) {
      local_memLeaksLog2 = chpl__initCopy3(&local_memLeaksLog);
      call_tmp15 = &((&local_memLeaksLog2)->owned);
      *(call_tmp15) = UINT8(false);
      coerce_tmp5 = (&local_memLeaksLog2)->locale_id;
      call_tmp16 = (coerce_tmp5 != chpl_nodeID);
      if (call_tmp16) {
        halt(&local__str_literal_306, INT64(110), INT32(36));
      }
      coerce_tmp6 = (&local_memLeaksLog2)->buff;
      call_tmp17 = ((c_string)(coerce_tmp6));
      *(ret_memLeaksLog) = call_tmp17;
      _ref_tmp_3 = &local_memLeaksLog2;
      chpl___TILDE_string(_ref_tmp_3);
    } else {
      call_tmp18 = ((c_string)(NULL));
      *(ret_memLeaksLog) = call_tmp18;
    }
  } else {
    coerce_tmp7 = (&local_memLeaksByDesc)->locale_id;
    call_tmp19 = (coerce_tmp7 != chpl_nodeID);
    if (call_tmp19) {
      halt(&local__str_literal_306, INT64(116), INT32(36));
    }
    coerce_tmp8 = (&local_memLeaksByDesc)->buff;
    call_tmp20 = ((c_string)(coerce_tmp8));
    *(ret_memLeaksByDesc) = call_tmp20;
    coerce_tmp9 = (&local_memLog)->locale_id;
    call_tmp21 = (coerce_tmp9 != chpl_nodeID);
    if (call_tmp21) {
      halt(&local__str_literal_306, INT64(117), INT32(36));
    }
    coerce_tmp10 = (&local_memLog)->buff;
    call_tmp22 = ((c_string)(coerce_tmp10));
    *(ret_memLog) = call_tmp22;
    coerce_tmp11 = (&local_memLeaksLog)->locale_id;
    call_tmp23 = (coerce_tmp11 != chpl_nodeID);
    if (call_tmp23) {
      halt(&local__str_literal_306, INT64(118), INT32(36));
    }
    coerce_tmp12 = (&local_memLeaksLog)->buff;
    call_tmp24 = ((c_string)(coerce_tmp12));
    *(ret_memLeaksLog) = call_tmp24;
  }
  return;
}

