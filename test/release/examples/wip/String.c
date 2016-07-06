/* String.chpl:63 */
 void chpl__init_String(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  uint8_t call_tmp;
  uint8_t call_tmp2;
  uint8_t call_tmp3;
  uint8_t call_tmp4;
  uint8_t call_tmp5;
  uint8_t call_tmp6;
  uint8_t call_tmp7;
  uint8_t call_tmp8;
  uint8_t call_tmp9;
  uint8_t call_tmp10;
  if (chpl__init_String_p) {
    goto _exit_chpl__init_String;
  }
  modFormatStr = "%*s\n";
  modStr = "String";
  printModuleInit(modFormatStr, modStr, INT64(6));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_String_p = UINT8(true);
  {
    chpl__init_BaseStringType(INT64(63), INT32(8));
    chpl__init_CString(INT64(63), INT32(8));
    chpl__init_SysCTypes(INT64(63), INT32(8));
    chpl__init_StringCasts(INT64(63), INT32(8));
  }
  call_tmp = ((uint8_t)(INT64(65)));
  uint_A = call_tmp;
  call_tmp2 = ((uint8_t)(INT64(90)));
  uint_Z = call_tmp2;
  call_tmp3 = ((uint8_t)(INT64(97)));
  uint_a = call_tmp3;
  call_tmp4 = ((uint8_t)(INT64(122)));
  uint_z = call_tmp4;
  call_tmp5 = ((uint8_t)(INT64(48)));
  uint_0 = call_tmp5;
  call_tmp6 = ((uint8_t)(INT64(57)));
  uint_9 = call_tmp6;
  call_tmp7 = ((uint8_t)(INT64(32)));
  uint_space = call_tmp7;
  call_tmp8 = ((uint8_t)(INT64(9)));
  uint_tab = call_tmp8;
  call_tmp9 = ((uint8_t)(INT64(10)));
  uint_newline = call_tmp9;
  call_tmp10 = ((uint8_t)(INT64(13)));
  uint_return = call_tmp10;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_String:;
  return;
}

/* String.chpl:93 */
 c_ptr_uint8_t copyRemoteBuffer(int64_t src_loc_id, c_ptr_uint8_t src_addr, int64_t len) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_REMOTE;
  c_ptr_uint8_t dest = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp2 = NULL;
  chpl_bool call_tmp3;
  uint64_t call_tmp4;
  _ref_uint8_t call_tmp5 = NULL;
  uint8_t call_tmp6;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_REMOTE = CHPL_RT_MD_STR_COPY_REMOTE;
  call_tmp = (len + INT64(1));
  cast_tmp = chpl_here_alloc(call_tmp, local_CHPL_RT_MD_STR_COPY_REMOTE);
  call_tmp2 = ((c_ptr_uint8_t)(cast_tmp));
  dest = call_tmp2;
  call_tmp3 = (len < INT64(0));
  if (call_tmp3) {
    halt(&local__str_literal_2657, INT64(95), INT32(8));
  }
  call_tmp4 = ((uint64_t)(len));
  chpl_gen_comm_get(((void*)(dest)), src_loc_id, src_addr, call_tmp4, -1, INT64(95), INT32(8));
  call_tmp5 = (dest + len);
  call_tmp6 = ((uint8_t)(INT64(0)));
  *(call_tmp5) = call_tmp6;
  return call_tmp2;
}

/* String.chpl:110 */
 void _construct_string(int64_t len, int64_t _size, c_ptr_uint8_t buff, chpl_bool owned, int32_t locale_id, string* const meme, _ref_string _retArg) {
  string this7;
  this7 = *(meme);
  (&this7)->len = len;
  (&this7)->_size = _size;
  (&this7)->buff = buff;
  (&this7)->owned = owned;
  (&this7)->locale_id = locale_id;
  *(_retArg) = this7;
  return;
}

/* String.chpl:132 */
 void string2(string* const s, chpl_bool owned, _ref_string _retArg) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string this7;
  string this8;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  _ref_chpl_bool call_tmp2 = NULL;
  chpl_bool call_tmp3;
  _ref_int64_t call_tmp4 = NULL;
  chpl_bool coerce_tmp2;
  int64_t call_tmp5;
  int64_t call_tmp6;
  _ref_c_ptr_uint8_t call_tmp7 = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp8 = NULL;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  int64_t coerce_tmp5;
  chpl_bool call_tmp9;
  uint64_t call_tmp10;
  c_void_ptr call_tmp11;
  c_void_ptr call_tmp12;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  _ref_uint8_t call_tmp13 = NULL;
  uint8_t call_tmp14;
  _ref_int64_t call_tmp15 = NULL;
  _ref_c_ptr_uint8_t call_tmp16 = NULL;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  _ref_int64_t call_tmp17 = NULL;
  int64_t coerce_tmp8;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp;
  (&this8)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_);
  this7 = wrap_call_tmp;
  coerce_tmp = (s)->len;
  call_tmp2 = &((&this7)->owned);
  *(call_tmp2) = owned;
  call_tmp3 = (coerce_tmp != INT64(0));
  if (call_tmp3) {
    call_tmp4 = &((&this7)->len);
    *(call_tmp4) = coerce_tmp;
    coerce_tmp2 = (&this7)->owned;
    if (coerce_tmp2) {
      call_tmp5 = (coerce_tmp + INT64(1));
      call_tmp6 = chpl_here_good_alloc_size(call_tmp5);
      call_tmp7 = &((&this7)->buff);
      cast_tmp = chpl_here_alloc(call_tmp6, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp8 = ((c_ptr_uint8_t)(cast_tmp));
      *(call_tmp7) = call_tmp8;
      coerce_tmp3 = (&this7)->buff;
      coerce_tmp4 = (s)->buff;
      coerce_tmp5 = (s)->len;
      call_tmp9 = (coerce_tmp5 < INT64(0));
      if (call_tmp9) {
        halt(&local__str_literal_2657, INT64(149), INT32(8));
      }
      call_tmp10 = ((uint64_t)(coerce_tmp5));
      call_tmp11 = ((c_void_ptr)(coerce_tmp3));
      call_tmp12 = ((c_void_ptr)(coerce_tmp4));
      memcpy(call_tmp11, call_tmp12, call_tmp10);
      coerce_tmp6 = (&this7)->buff;
      call_tmp13 = (coerce_tmp6 + coerce_tmp);
      call_tmp14 = ((uint8_t)(INT64(0)));
      *(call_tmp13) = call_tmp14;
      call_tmp15 = &((&this7)->_size);
      *(call_tmp15) = call_tmp6;
    } else {
      call_tmp16 = &((&this7)->buff);
      coerce_tmp7 = (s)->buff;
      *(call_tmp16) = coerce_tmp7;
      call_tmp17 = &((&this7)->_size);
      coerce_tmp8 = (s)->_size;
      *(call_tmp17) = coerce_tmp8;
    }
  }
  *(_retArg) = this7;
  return;
}

/* String.chpl:168 */
 void string3(c_string cs, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg) {
  string this7;
  string this8;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_chpl_bool call_tmp2 = NULL;
  int64_t call_tmp3;
  c_ptr_uint8_t call_tmp4 = NULL;
  int64_t call_tmp5;
  _ref_string _ref_tmp_ = NULL;
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp;
  (&this8)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_);
  this7 = wrap_call_tmp;
  call_tmp2 = &((&this7)->owned);
  *(call_tmp2) = owned;
  call_tmp3 = string_length(cs);
  call_tmp4 = ((c_ptr_uint8_t)(cs));
  call_tmp5 = (call_tmp3 + INT64(1));
  _ref_tmp_ = &this7;
  chpl_check_nil(_ref_tmp_, INT64(171), INT64(8));
  reinitString(_ref_tmp_, call_tmp4, call_tmp3, call_tmp5, needToCopy);
  *(_retArg) = this7;
  return;
}

/* String.chpl:185 */
 void string4(c_ptr_uint8_t buff, int64_t length2, int64_t size, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg) {
  string this7;
  string this8;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_chpl_bool call_tmp2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp;
  (&this8)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_);
  this7 = wrap_call_tmp;
  call_tmp2 = &((&this7)->owned);
  *(call_tmp2) = owned;
  _ref_tmp_ = &this7;
  chpl_check_nil(_ref_tmp_, INT64(188), INT64(8));
  reinitString(_ref_tmp_, buff, length2, size, needToCopy);
  *(_retArg) = this7;
  return;
}

/* String.chpl:192 */
 void chpl___TILDE_string(_ref_string this7) {
  int32_t local_c_sublocid_any;
  chpl_bool T;
  chpl_bool coerce_tmp;
  int64_t coerce_tmp2;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  int32_t coerce_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  c_void_ptr call_tmp3;
  local_c_sublocid_any = c_sublocid_any;
  chpl_check_nil(this7, INT64(193), INT64(8));
  coerce_tmp = (this7)->owned;
  if (coerce_tmp) {
    chpl_check_nil(this7, INT64(193), INT64(8));
    coerce_tmp2 = (this7)->len;
    call_tmp = (coerce_tmp2 == INT64(0));
    call_tmp2 = (! call_tmp);
    T = call_tmp2;
  } else {
    T = UINT8(false);
  }
  if (T) {
    chpl_check_nil(this7, INT64(195), INT64(8));
    coerce_tmp3 = (this7)->locale_id;
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
    chpl_buildLocaleID(coerce_tmp3, local_c_sublocid_any, ret_to_arg_ref_tmp_, INT64(195), INT32(8));
    chpl_check_nil(this7, INT64(196), INT64(8));
    coerce_tmp4 = (this7)->buff;
    call_tmp3 = ((c_void_ptr)(coerce_tmp4));
    chpl_here_free(call_tmp3);
  }
  return;
}

/* String.chpl:203 */
 void reinitString(_ref_string this7, c_ptr_uint8_t buf, int64_t s_len, int64_t size, chpl_bool needToCopy) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  c_void_ptr local_c_nil;
  int64_t coerce_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  chpl_bool T;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool coerce_tmp2;
  chpl_bool call_tmp5;
  chpl_bool T2;
  int64_t call_tmp6;
  int64_t coerce_tmp3;
  chpl_bool call_tmp7;
  chpl_bool T3;
  chpl_bool coerce_tmp4;
  int64_t coerce_tmp5;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  c_void_ptr call_tmp10;
  int64_t call_tmp11;
  int64_t call_tmp12;
  _ref_c_ptr_uint8_t call_tmp13 = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp14 = NULL;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  _ref_uint8_t call_tmp15 = NULL;
  uint8_t call_tmp16;
  _ref_int64_t call_tmp17 = NULL;
  _ref_chpl_bool call_tmp18 = NULL;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  chpl_bool call_tmp19;
  uint64_t call_tmp20;
  c_void_ptr call_tmp21;
  c_void_ptr call_tmp22;
  chpl_bool T4;
  chpl_bool coerce_tmp9;
  int64_t coerce_tmp10;
  chpl_bool call_tmp23;
  chpl_bool call_tmp24;
  c_ptr_uint8_t coerce_tmp11 = NULL;
  c_void_ptr call_tmp25;
  _ref_c_ptr_uint8_t call_tmp26 = NULL;
  _ref_int64_t call_tmp27 = NULL;
  chpl_bool T5;
  chpl_bool coerce_tmp12;
  int64_t coerce_tmp13;
  chpl_bool call_tmp28;
  chpl_bool call_tmp29;
  c_ptr_uint8_t coerce_tmp14 = NULL;
  c_void_ptr call_tmp30;
  _ref_c_ptr_uint8_t call_tmp31 = NULL;
  _ref_int64_t call_tmp32 = NULL;
  _ref_int64_t call_tmp33 = NULL;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  local_c_nil = c_nil;
  chpl_check_nil(this7, INT64(205), INT64(8));
  coerce_tmp = (this7)->len;
  call_tmp = (coerce_tmp == INT64(0));
  if (call_tmp) {
    call_tmp2 = (s_len == INT64(0));
    if (call_tmp2) {
      T = UINT8(true);
    } else {
      call_tmp3 = (buf == local_c_nil);
      T = call_tmp3;
    }
    if (T) {
      goto _end_reinitString;
    }
  }
  call_tmp4 = (s_len != INT64(0));
  if (call_tmp4) {
    if (needToCopy) {
      chpl_check_nil(this7, INT64(213), INT64(8));
      coerce_tmp2 = (this7)->owned;
      call_tmp5 = (! coerce_tmp2);
      if (call_tmp5) {
        T2 = UINT8(true);
      } else {
        call_tmp6 = (s_len + INT64(1));
        chpl_check_nil(this7, INT64(213), INT64(8));
        coerce_tmp3 = (this7)->_size;
        call_tmp7 = (call_tmp6 > coerce_tmp3);
        T2 = call_tmp7;
      }
      if (T2) {
        chpl_check_nil(this7, INT64(216), INT64(8));
        coerce_tmp4 = (this7)->owned;
        if (coerce_tmp4) {
          chpl_check_nil(this7, INT64(216), INT64(8));
          coerce_tmp5 = (this7)->len;
          call_tmp8 = (coerce_tmp5 == INT64(0));
          call_tmp9 = (! call_tmp8);
          T3 = call_tmp9;
        } else {
          T3 = UINT8(false);
        }
        if (T3) {
          chpl_check_nil(this7, INT64(217), INT64(8));
          coerce_tmp6 = (this7)->buff;
          call_tmp10 = ((c_void_ptr)(coerce_tmp6));
          chpl_here_free(call_tmp10);
        }
        call_tmp11 = (s_len + INT64(1));
        call_tmp12 = chpl_here_good_alloc_size(call_tmp11);
        chpl_check_nil(this7, INT64(220), INT64(8));
        call_tmp13 = &((this7)->buff);
        cast_tmp = chpl_here_alloc(call_tmp12, local_CHPL_RT_MD_STR_COPY_DATA);
        call_tmp14 = ((c_ptr_uint8_t)(cast_tmp));
        *(call_tmp13) = call_tmp14;
        chpl_check_nil(this7, INT64(222), INT64(8));
        coerce_tmp7 = (this7)->buff;
        call_tmp15 = (coerce_tmp7 + s_len);
        call_tmp16 = ((uint8_t)(INT64(0)));
        *(call_tmp15) = call_tmp16;
        chpl_check_nil(this7, INT64(223), INT64(8));
        call_tmp17 = &((this7)->_size);
        *(call_tmp17) = call_tmp12;
        chpl_check_nil(this7, INT64(225), INT64(8));
        call_tmp18 = &((this7)->owned);
        *(call_tmp18) = UINT8(true);
      }
      chpl_check_nil(this7, INT64(227), INT64(8));
      coerce_tmp8 = (this7)->buff;
      call_tmp19 = (s_len < INT64(0));
      if (call_tmp19) {
        halt(&local__str_literal_2657, INT64(227), INT32(8));
      }
      call_tmp20 = ((uint64_t)(s_len));
      call_tmp21 = ((c_void_ptr)(coerce_tmp8));
      call_tmp22 = ((c_void_ptr)(buf));
      memmove(call_tmp21, call_tmp22, call_tmp20);
    } else {
      chpl_check_nil(this7, INT64(229), INT64(8));
      coerce_tmp9 = (this7)->owned;
      if (coerce_tmp9) {
        chpl_check_nil(this7, INT64(229), INT64(8));
        coerce_tmp10 = (this7)->len;
        call_tmp23 = (coerce_tmp10 == INT64(0));
        call_tmp24 = (! call_tmp23);
        T4 = call_tmp24;
      } else {
        T4 = UINT8(false);
      }
      if (T4) {
        chpl_check_nil(this7, INT64(230), INT64(8));
        coerce_tmp11 = (this7)->buff;
        call_tmp25 = ((c_void_ptr)(coerce_tmp11));
        chpl_here_free(call_tmp25);
      }
      chpl_check_nil(this7, INT64(231), INT64(8));
      call_tmp26 = &((this7)->buff);
      *(call_tmp26) = buf;
      chpl_check_nil(this7, INT64(232), INT64(8));
      call_tmp27 = &((this7)->_size);
      *(call_tmp27) = size;
    }
  } else {
    chpl_check_nil(this7, INT64(236), INT64(8));
    coerce_tmp12 = (this7)->owned;
    if (coerce_tmp12) {
      chpl_check_nil(this7, INT64(236), INT64(8));
      coerce_tmp13 = (this7)->len;
      call_tmp28 = (coerce_tmp13 == INT64(0));
      call_tmp29 = (! call_tmp28);
      T5 = call_tmp29;
    } else {
      T5 = UINT8(false);
    }
    if (T5) {
      chpl_check_nil(this7, INT64(236), INT64(8));
      coerce_tmp14 = (this7)->buff;
      call_tmp30 = ((c_void_ptr)(coerce_tmp14));
      chpl_here_free(call_tmp30);
    }
    chpl_check_nil(this7, INT64(237), INT64(8));
    call_tmp31 = &((this7)->buff);
    *(call_tmp31) = local_c_nil;
    chpl_check_nil(this7, INT64(238), INT64(8));
    call_tmp32 = &((this7)->_size);
    *(call_tmp32) = INT64(0);
  }
  chpl_check_nil(this7, INT64(241), INT64(8));
  call_tmp33 = &((this7)->len);
  *(call_tmp33) = s_len;
  _end_reinitString:;
  return;
}

/* String.chpl:368 */
 void _getView(_ref_string this7, range_int64_t_bounded_F* const r, _ref_range_int64_t_bounded_F _retArg) {
  string local__str_literal_311;
  int64_t ret;
  chpl_bool call_tmp;
  int64_t ret2;
  chpl_bool call_tmp2;
  chpl_bool T;
  int64_t ret3;
  int64_t coerce_tmp;
  chpl_bool call_tmp3;
  range_int64_t_bounded_F const_tmp;
  range_int64_t_boundedLow_F call_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp5;
  int64_t coerce_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  local__str_literal_311 = _str_literal_311;
  ret = (r)->_low;
  call_tmp = (ret <= INT64(0));
  if (call_tmp) {
    halt(&local__str_literal_311, INT64(373), INT32(8));
  }
  ret2 = (r)->_high;
  call_tmp2 = (ret2 < INT64(0));
  if (call_tmp2) {
    T = UINT8(true);
  } else {
    ret3 = (r)->_high;
    chpl_check_nil(this7, INT64(377), INT64(8));
    coerce_tmp = (this7)->len;
    call_tmp3 = (ret3 > coerce_tmp);
    T = call_tmp3;
  }
  if (T) {
    halt(&local__str_literal_311, INT64(378), INT32(8));
  }
  ret_to_arg_ref_tmp_ = &call_tmp4;
  chpl_build_low_bounded_range(INT64(1), ret_to_arg_ref_tmp_);
  chpl_check_nil(this7, INT64(382), INT64(8));
  coerce_tmp2 = (this7)->len;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  chpl___POUND_(&call_tmp4, coerce_tmp2, ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &const_tmp;
  _ref_tmp_ = r;
  chpl_check_nil(_ref_tmp_, INT64(382), INT64(8));
  this3(_ref_tmp_, &call_tmp5, ret_to_arg_ref_tmp_3);
  *(_retArg) = const_tmp;
  return;
}

/* String.chpl:396 */
 void this6(_ref_string this7, range_int64_t_bounded_F* const r, _ref_string _retArg) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string local__str_literal_318;
  string ret;
  string ret2;
  string this8;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  chpl_bool call_tmp2;
  range_int64_t_bounded_F const_tmp;
  range_int64_t_bounded_F r2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  _ref_string _ref_tmp_2 = NULL;
  _ref_int64_t call_tmp5 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  int64_t call_tmp6;
  int64_t coerce_tmp2;
  int64_t call_tmp7;
  int64_t call_tmp8;
  _ref_int64_t call_tmp9 = NULL;
  int64_t T;
  chpl_bool call_tmp10;
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
  int64_t coerce_tmp3;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp12 = NULL;
  c_ptr_uint8_t thisBuff = NULL;
  chpl_bool remoteThis;
  int32_t coerce_tmp4;
  chpl_bool call_tmp13;
  c_ptr_uint8_t call_tmp14 = NULL;
  int32_t coerce_tmp5;
  int64_t call_tmp15;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  int64_t coerce_tmp7;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  range_int64_t_boundedLow_F call_tmp16;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t _ic__value;
  int64_t _ic__F1_end;
  range_int64_t_boundedLow_F _ic__F0_this2;
  int64_t _ic__value2;
  _ref_range_int64_t_bounded_F T2 = NULL;
  int64_t ret3;
  int64_t ret4;
  int64_t ret5;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  _ref_uint8_t call_tmp17 = NULL;
  int64_t call_tmp18;
  _ref_uint8_t call_tmp19 = NULL;
  uint8_t coerce_tmp10;
  int64_t T3;
  int64_t T4;
  int64_t T5;
  c_ptr_uint8_t coerce_tmp11 = NULL;
  int64_t coerce_tmp12;
  _ref_uint8_t call_tmp20 = NULL;
  uint8_t call_tmp21;
  c_void_ptr call_tmp22;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  local__str_literal_318 = _str_literal_318;
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp;
  (&this8)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_);
  ret2 = wrap_call_tmp;
  chpl_check_nil(this7, INT64(398), INT64(8));
  coerce_tmp = (this7)->len;
  call_tmp2 = (coerce_tmp == INT64(0));
  if (call_tmp2) {
    ret = wrap_call_tmp;
    goto _end_this;
  }
  ret_to_arg_ref_tmp_2 = &const_tmp;
  chpl_check_nil(this7, INT64(400), INT64(8));
  _getView(this7, r, ret_to_arg_ref_tmp_2);
  r2 = const_tmp;
  _ref_tmp_ = &r2;
  chpl_check_nil(_ref_tmp_, INT64(401), INT64(8));
  call_tmp3 = length(_ref_tmp_);
  call_tmp4 = (call_tmp3 <= INT64(0));
  if (call_tmp4) {
    _ref_tmp_2 = &ret2;
    chpl___ASSIGN_2(_ref_tmp_2, &local__str_literal_318);
  } else {
    call_tmp5 = &((&ret2)->len);
    _ref_tmp_3 = &r2;
    chpl_check_nil(_ref_tmp_3, INT64(405), INT64(8));
    call_tmp6 = length(_ref_tmp_3);
    *(call_tmp5) = call_tmp6;
    coerce_tmp2 = (&ret2)->len;
    call_tmp7 = (coerce_tmp2 + INT64(1));
    call_tmp8 = chpl_here_good_alloc_size(call_tmp7);
    call_tmp9 = &((&ret2)->_size);
    call_tmp10 = (INT64(16) > call_tmp8);
    if (call_tmp10) {
      T = INT64(16);
    } else {
      T = call_tmp8;
    }
    *(call_tmp9) = T;
    call_tmp11 = &((&ret2)->buff);
    coerce_tmp3 = (&ret2)->_size;
    cast_tmp = chpl_here_alloc(coerce_tmp3, local_CHPL_RT_MD_STR_COPY_DATA);
    call_tmp12 = ((c_ptr_uint8_t)(cast_tmp));
    *(call_tmp11) = call_tmp12;
    chpl_check_nil(this7, INT64(415), INT64(8));
    coerce_tmp4 = (this7)->locale_id;
    call_tmp13 = (coerce_tmp4 != chpl_nodeID);
    remoteThis = call_tmp13;
    if (call_tmp13) {
      chpl_check_nil(this7, INT64(420), INT64(8));
      coerce_tmp5 = (this7)->locale_id;
      call_tmp15 = ((int64_t)(coerce_tmp5));
      chpl_check_nil(this7, INT64(420), INT64(8));
      coerce_tmp6 = (this7)->buff;
      chpl_check_nil(this7, INT64(420), INT64(8));
      coerce_tmp7 = (this7)->len;
      call_tmp14 = copyRemoteBuffer(call_tmp15, coerce_tmp6, coerce_tmp7);
      thisBuff = call_tmp14;
    } else {
      chpl_check_nil(this7, INT64(422), INT64(8));
      coerce_tmp8 = (this7)->buff;
      thisBuff = coerce_tmp8;
    }
    ret_to_arg_ref_tmp_3 = &call_tmp16;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_3);
    _ic__F0_this = r2;
    _ic__F0_this2 = call_tmp16;
    T2 = &_ic__F0_this;
    chpl_check_nil(T2, INT64(425), INT64(8));
    checkIfIterWillOverflow(T2, UINT8(true));
    ret3 = (&_ic__F0_this)->_low;
    ret4 = (&_ic__F0_this)->_high;
    _ic__F1_end = ret4;
    ret5 = (&_ic__F0_this2)->_low;
    coerce_tmp9 = (&ret2)->buff;
    for (_ic__value = ret3,_ic__value2 = ret5; (T3 = (_ic__value <= _ic__F1_end),T3); T4 = _ic__value,T4 += INT64(1),_ic__value = T4,T5 = _ic__value2,T5 += INT64(1),_ic__value2 = T5) {
      call_tmp17 = (coerce_tmp9 + _ic__value2);
      call_tmp18 = (_ic__value - INT64(1));
      call_tmp19 = (thisBuff + call_tmp18);
      coerce_tmp10 = *(call_tmp19);
      *(call_tmp17) = coerce_tmp10;
    }
    coerce_tmp11 = (&ret2)->buff;
    coerce_tmp12 = (&ret2)->len;
    call_tmp20 = (coerce_tmp11 + coerce_tmp12);
    call_tmp21 = ((uint8_t)(INT64(0)));
    *(call_tmp20) = call_tmp21;
    if (remoteThis) {
      call_tmp22 = ((c_void_ptr)(thisBuff));
      chpl_here_free(call_tmp22);
    }
  }
  ret = ret2;
  _end_this:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:881 */
 void strip(_ref_string this7, string* const chars, chpl_bool leading, chpl_bool trailing, _ref_string _retArg) {
  string local__str_literal_341;
  string ret;
  int64_t coerce_tmp;
  chpl_bool call_tmp;
  int64_t coerce_tmp2;
  chpl_bool call_tmp2;
  string localThis;
  string type_tmp;
  string this8;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp4;
  string call_tmp5;
  string coerce_tmp3;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  string localChars;
  string type_tmp2;
  string this9;
  c_ptr_uint8_t call_tmp6 = NULL;
  int32_t default_arglocale_id2;
  string wrap_call_tmp2;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  string call_tmp7;
  string call_tmp8;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  int64_t start;
  int64_t end;
  int64_t coerce_tmp4;
  int64_t coerce_tmp5;
  int64_t call_tmp9;
  int64_t call_tmp10;
  int64_t _ic__F1_high;
  int64_t i;
  int64_t i2;
  int64_t coerce_tmp6;
  int64_t call_tmp11;
  int64_t call_tmp12;
  int64_t _ic__F1_high2;
  int64_t i3;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  _ref_uint8_t call_tmp13 = NULL;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  _ref_uint8_t call_tmp14 = NULL;
  uint8_t coerce_tmp9;
  uint8_t coerce_tmp10;
  chpl_bool call_tmp15;
  range_int64_t_boundedLow_F call_tmp16;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
  range_int64_t_bounded_F call_tmp17;
  int64_t coerce_tmp11;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_T call_tmp18;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_7 = NULL;
  range_int64_t_bounded_T _ic__F0_this;
  _ref_range_int64_t_bounded_T this10 = NULL;
  chpl_bool call_tmp19;
  _ref_range_int64_t_bounded_T this11 = NULL;
  int64_t i4;
  int64_t T;
  int64_t coerce_tmp12;
  chpl_bool call_tmp20;
  int64_t call_tmp21;
  int64_t coerce_tmp13;
  int64_t coerce_tmp14;
  int64_t coerce_tmp15;
  int64_t coerce_tmp16;
  int64_t call_tmp22;
  int64_t call_tmp23;
  int64_t coerce_tmp17;
  int64_t coerce_tmp18;
  int64_t coerce_tmp19;
  int64_t coerce_tmp20;
  int64_t call_tmp24;
  int64_t end2;
  int64_t T2;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp25;
  int64_t T3;
  int64_t coerce_tmp21;
  chpl_bool call_tmp26;
  int64_t call_tmp27;
  int64_t coerce_tmp22;
  int64_t coerce_tmp23;
  int64_t coerce_tmp24;
  int64_t coerce_tmp25;
  int64_t call_tmp28;
  int64_t call_tmp29;
  int64_t coerce_tmp26;
  int64_t coerce_tmp27;
  int64_t coerce_tmp28;
  int64_t coerce_tmp29;
  int64_t call_tmp30;
  int64_t ret4;
  int64_t call_tmp31;
  int64_t i5;
  int64_t coerce_tmp30;
  int64_t call_tmp32;
  int64_t call_tmp33;
  int64_t _ic__F1_high3;
  int64_t i6;
  c_ptr_uint8_t coerce_tmp31 = NULL;
  _ref_uint8_t call_tmp34 = NULL;
  c_ptr_uint8_t coerce_tmp32 = NULL;
  _ref_uint8_t call_tmp35 = NULL;
  uint8_t coerce_tmp33;
  uint8_t coerce_tmp34;
  chpl_bool call_tmp36;
  int64_t ret5;
  range_int64_t_bounded_F call_tmp37;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_8 = NULL;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_9 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  _ref_string _ref_tmp_6 = NULL;
  _ref_string _ref_tmp_7 = NULL;
  local__str_literal_341 = _str_literal_341;
  chpl_check_nil(this7, INT64(882), INT64(8));
  coerce_tmp = (this7)->len;
  call_tmp = (coerce_tmp == INT64(0));
  if (call_tmp) {
    ret = chpl__autoCopy5(&local__str_literal_341);
    goto _end_strip;
  }
  coerce_tmp2 = (chars)->len;
  call_tmp2 = (coerce_tmp2 == INT64(0));
  if (call_tmp2) {
    ret = *(this7);
    goto _end_strip;
  }
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp3 = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp3;
  (&this8)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_);
  type_tmp = wrap_call_tmp;
  coerce_tmp3 = *(this7);
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  string2(&coerce_tmp3, UINT8(false), ret_to_arg_ref_tmp_2);
  call_tmp4 = call_tmp5;
  _ref_tmp_ = &type_tmp;
  chpl___ASSIGN_2(_ref_tmp_, &call_tmp5);
  localThis = type_tmp;
  (&this9)->len = INT64(0);
  (&this9)->_size = INT64(0);
  (&this9)->buff = nil;
  (&this9)->owned = UINT8(false);
  (&this9)->locale_id = INT32(0);
  (&this9)->len = INT64(0);
  (&this9)->_size = INT64(0);
  call_tmp6 = ((c_ptr_uint8_t)(nil));
  (&this9)->buff = call_tmp6;
  (&this9)->owned = UINT8(true);
  default_arglocale_id2 = chpl_nodeID;
  (&this9)->locale_id = default_arglocale_id2;
  ret_to_arg_ref_tmp_3 = &wrap_call_tmp2;
  _construct_string(INT64(0), INT64(0), call_tmp6, UINT8(true), default_arglocale_id2, &this9, ret_to_arg_ref_tmp_3);
  type_tmp2 = wrap_call_tmp2;
  ret_to_arg_ref_tmp_4 = &call_tmp8;
  string2(chars, UINT8(false), ret_to_arg_ref_tmp_4);
  call_tmp7 = call_tmp8;
  _ref_tmp_2 = &type_tmp2;
  chpl___ASSIGN_2(_ref_tmp_2, &call_tmp8);
  localChars = type_tmp2;
  start = INT64(1);
  coerce_tmp4 = (&localThis)->len;
  end = coerce_tmp4;
  if (leading) {
    coerce_tmp5 = (&localThis)->len;
    call_tmp9 = (INT64(0) + coerce_tmp5);
    call_tmp10 = (call_tmp9 - INT64(1));
    _ic__F1_high = call_tmp10;
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp10, INT64(1), INT64(0), call_tmp10, UINT8(true));
    coerce_tmp6 = (&localChars)->len;
    call_tmp11 = (INT64(0) + coerce_tmp6);
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
      i2 = i;
      call_tmp12 = (call_tmp11 - INT64(1));
      _ic__F1_high2 = call_tmp12;
      chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp12, INT64(1), INT64(0), call_tmp12, UINT8(true));
      coerce_tmp7 = (&localThis)->buff;
      coerce_tmp8 = (&localChars)->buff;
      for (i3 = INT64(0); ((i3 <= _ic__F1_high2)); i3 += INT64(1)) {
        call_tmp13 = (coerce_tmp7 + i2);
        call_tmp14 = (coerce_tmp8 + i3);
        coerce_tmp9 = *(call_tmp13);
        coerce_tmp10 = *(call_tmp14);
        call_tmp15 = (coerce_tmp9 == coerce_tmp10);
        if (call_tmp15) {
          start += INT64(1);
          goto _continueLabel;
        }
      }
      goto _breakLabel;
      _continueLabel:;
    }
    _breakLabel:;
  }
  if (trailing) {
    ret_to_arg_ref_tmp_5 = &call_tmp16;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_5);
    coerce_tmp11 = (&localThis)->len;
    ret_to_arg_ref_tmp_6 = &call_tmp17;
    chpl___POUND_(&call_tmp16, coerce_tmp11, ret_to_arg_ref_tmp_6);
    ret_to_arg_ref_tmp_7 = &call_tmp18;
    chpl_by_help(&call_tmp17, INT64(-1), ret_to_arg_ref_tmp_7);
    _ic__F0_this = call_tmp18;
    this10 = &_ic__F0_this;
    chpl_check_nil(this10, INT64(904), INT64(8));
    checkIfIterWillOverflow2(this10, UINT8(true));
    this11 = &_ic__F0_this;
    chpl_check_nil(this11, INT64(904), INT64(8));
    call_tmp19 = isAmbiguous(this11);
    if (call_tmp19) {
      chpl_error("these -- Attempt to iterate over a range with ambiguous alignment.", INT64(904), INT32(8));
    }
    coerce_tmp12 = (&_ic__F0_this)->_stride;
    call_tmp20 = (coerce_tmp12 > INT64(0));
    if (call_tmp20) {
      coerce_tmp13 = (&_ic__F0_this)->_alignment;
      coerce_tmp14 = (&_ic__F0_this)->_low;
      coerce_tmp15 = (&_ic__F0_this)->_stride;
      call_tmp21 = chpl__diffMod(coerce_tmp13, coerce_tmp14, coerce_tmp15);
      coerce_tmp16 = (&_ic__F0_this)->_low;
      call_tmp22 = (coerce_tmp16 + call_tmp21);
      T = call_tmp22;
    } else {
      coerce_tmp17 = (&_ic__F0_this)->_high;
      coerce_tmp18 = (&_ic__F0_this)->_alignment;
      coerce_tmp19 = (&_ic__F0_this)->_stride;
      call_tmp23 = chpl__diffMod(coerce_tmp17, coerce_tmp18, coerce_tmp19);
      coerce_tmp20 = (&_ic__F0_this)->_high;
      call_tmp24 = (coerce_tmp20 - call_tmp23);
      T = call_tmp24;
    }
    ret2 = (&_ic__F0_this)->_low;
    ret3 = (&_ic__F0_this)->_high;
    call_tmp25 = (ret2 > ret3);
    if (call_tmp25) {
      T2 = T;
    } else {
      coerce_tmp21 = (&_ic__F0_this)->_stride;
      call_tmp26 = (coerce_tmp21 > INT64(0));
      if (call_tmp26) {
        coerce_tmp22 = (&_ic__F0_this)->_high;
        coerce_tmp23 = (&_ic__F0_this)->_alignment;
        coerce_tmp24 = (&_ic__F0_this)->_stride;
        call_tmp27 = chpl__diffMod(coerce_tmp22, coerce_tmp23, coerce_tmp24);
        coerce_tmp25 = (&_ic__F0_this)->_high;
        call_tmp28 = (coerce_tmp25 - call_tmp27);
        T3 = call_tmp28;
      } else {
        coerce_tmp26 = (&_ic__F0_this)->_alignment;
        coerce_tmp27 = (&_ic__F0_this)->_low;
        coerce_tmp28 = (&_ic__F0_this)->_stride;
        call_tmp29 = chpl__diffMod(coerce_tmp26, coerce_tmp27, coerce_tmp28);
        coerce_tmp29 = (&_ic__F0_this)->_low;
        call_tmp30 = (coerce_tmp29 + call_tmp29);
        T3 = call_tmp30;
      }
      ret4 = (&_ic__F0_this)->_stride;
      call_tmp31 = (T3 + ret4);
      T2 = call_tmp31;
    }
    end2 = T2;
    coerce_tmp30 = (&localChars)->len;
    call_tmp32 = (INT64(0) + coerce_tmp30);
    for (i4 = T; ((i4 != end2)); ret5 = (&_ic__F0_this)->_stride,i4 += ret5) {
      i5 = i4;
      call_tmp33 = (call_tmp32 - INT64(1));
      _ic__F1_high3 = call_tmp33;
      chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp33, INT64(1), INT64(0), call_tmp33, UINT8(true));
      coerce_tmp31 = (&localThis)->buff;
      coerce_tmp32 = (&localChars)->buff;
      for (i6 = INT64(0); ((i6 <= _ic__F1_high3)); i6 += INT64(1)) {
        call_tmp34 = (coerce_tmp31 + i5);
        call_tmp35 = (coerce_tmp32 + i6);
        coerce_tmp33 = *(call_tmp34);
        coerce_tmp34 = *(call_tmp35);
        call_tmp36 = (coerce_tmp33 == coerce_tmp34);
        if (call_tmp36) {
          end -= INT64(1);
          goto _continueLabel2;
        }
      }
      goto _breakLabel2;
      _continueLabel2:;
    }
    _breakLabel2:;
  }
  ret_to_arg_ref_tmp_8 = &call_tmp37;
  chpl_build_bounded_range(start, end, ret_to_arg_ref_tmp_8);
  ret_to_arg_ref_tmp_9 = &_autoCopy_tmp_;
  _ref_tmp_3 = &localThis;
  chpl_check_nil(_ref_tmp_3, INT64(915), INT64(8));
  this6(_ref_tmp_3, &call_tmp37, ret_to_arg_ref_tmp_9);
  ret = _autoCopy_tmp_;
  _ref_tmp_4 = &call_tmp7;
  chpl___TILDE_string(_ref_tmp_4);
  _ref_tmp_5 = &localChars;
  chpl___TILDE_string(_ref_tmp_5);
  _ref_tmp_6 = &call_tmp4;
  chpl___TILDE_string(_ref_tmp_6);
  _ref_tmp_7 = &localThis;
  chpl___TILDE_string(_ref_tmp_7);
  _end_strip:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:1243 */
 string chpl__autoCopy5(string* const s) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  string this7;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  chpl_bool call_tmp2;
  chpl_bool coerce_tmp2;
  _ref_c_ptr_uint8_t call_tmp3 = NULL;
  int64_t coerce_tmp3;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp4 = NULL;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  int64_t coerce_tmp6;
  chpl_bool call_tmp5;
  uint64_t call_tmp6;
  c_void_ptr call_tmp7;
  c_void_ptr call_tmp8;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  int64_t coerce_tmp8;
  _ref_uint8_t call_tmp9 = NULL;
  uint8_t call_tmp10;
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  _ref_chpl_bool call_tmp12 = NULL;
  chpl_bool coerce_tmp10;
  _ref_int64_t call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  int64_t call_tmp15;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  (&this7)->buff = nil;
  (&this7)->owned = UINT8(false);
  (&this7)->locale_id = INT32(0);
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this7)->buff = call_tmp;
  (&this7)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this7)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
  ret = wrap_call_tmp;
  coerce_tmp = (s)->len;
  call_tmp2 = (coerce_tmp != INT64(0));
  if (call_tmp2) {
    coerce_tmp2 = (s)->owned;
    if (coerce_tmp2) {
      call_tmp3 = &((&ret)->buff);
      coerce_tmp3 = (s)->_size;
      cast_tmp = chpl_here_alloc(coerce_tmp3, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp4 = ((c_ptr_uint8_t)(cast_tmp));
      *(call_tmp3) = call_tmp4;
      coerce_tmp4 = (&ret)->buff;
      coerce_tmp5 = (s)->buff;
      coerce_tmp6 = (s)->len;
      call_tmp5 = (coerce_tmp6 < INT64(0));
      if (call_tmp5) {
        halt(&local__str_literal_2657, INT64(1253), INT32(8));
      }
      call_tmp6 = ((uint64_t)(coerce_tmp6));
      call_tmp7 = ((c_void_ptr)(coerce_tmp4));
      call_tmp8 = ((c_void_ptr)(coerce_tmp5));
      memcpy(call_tmp7, call_tmp8, call_tmp6);
      coerce_tmp7 = (&ret)->buff;
      coerce_tmp8 = (s)->len;
      call_tmp9 = (coerce_tmp7 + coerce_tmp8);
      call_tmp10 = ((uint8_t)(INT64(0)));
      *(call_tmp9) = call_tmp10;
    } else {
      call_tmp11 = &((&ret)->buff);
      coerce_tmp9 = (s)->buff;
      *(call_tmp11) = coerce_tmp9;
    }
    call_tmp12 = &((&ret)->owned);
    coerce_tmp10 = (s)->owned;
    *(call_tmp12) = coerce_tmp10;
    call_tmp13 = &((&ret)->len);
    *(call_tmp13) = coerce_tmp;
    call_tmp14 = &((&ret)->_size);
    call_tmp15 = (coerce_tmp + INT64(1));
    *(call_tmp14) = call_tmp15;
  }
  return ret;
}

/* String.chpl:1283 */
 string chpl__initCopy3(string* const s) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  string this7;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  chpl_bool call_tmp2;
  chpl_bool coerce_tmp2;
  _ref_c_ptr_uint8_t call_tmp3 = NULL;
  int64_t coerce_tmp3;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp4 = NULL;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  int64_t coerce_tmp6;
  chpl_bool call_tmp5;
  uint64_t call_tmp6;
  c_void_ptr call_tmp7;
  c_void_ptr call_tmp8;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  int64_t coerce_tmp8;
  _ref_uint8_t call_tmp9 = NULL;
  uint8_t call_tmp10;
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  _ref_chpl_bool call_tmp12 = NULL;
  chpl_bool coerce_tmp10;
  _ref_int64_t call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  int64_t call_tmp15;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  (&this7)->buff = nil;
  (&this7)->owned = UINT8(false);
  (&this7)->locale_id = INT32(0);
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this7)->buff = call_tmp;
  (&this7)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this7)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
  ret = wrap_call_tmp;
  coerce_tmp = (s)->len;
  call_tmp2 = (coerce_tmp != INT64(0));
  if (call_tmp2) {
    coerce_tmp2 = (s)->owned;
    if (coerce_tmp2) {
      call_tmp3 = &((&ret)->buff);
      coerce_tmp3 = (s)->_size;
      cast_tmp = chpl_here_alloc(coerce_tmp3, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp4 = ((c_ptr_uint8_t)(cast_tmp));
      *(call_tmp3) = call_tmp4;
      coerce_tmp4 = (&ret)->buff;
      coerce_tmp5 = (s)->buff;
      coerce_tmp6 = (s)->len;
      call_tmp5 = (coerce_tmp6 < INT64(0));
      if (call_tmp5) {
        halt(&local__str_literal_2657, INT64(1293), INT32(8));
      }
      call_tmp6 = ((uint64_t)(coerce_tmp6));
      call_tmp7 = ((c_void_ptr)(coerce_tmp4));
      call_tmp8 = ((c_void_ptr)(coerce_tmp5));
      memcpy(call_tmp7, call_tmp8, call_tmp6);
      coerce_tmp7 = (&ret)->buff;
      coerce_tmp8 = (s)->len;
      call_tmp9 = (coerce_tmp7 + coerce_tmp8);
      call_tmp10 = ((uint8_t)(INT64(0)));
      *(call_tmp9) = call_tmp10;
    } else {
      call_tmp11 = &((&ret)->buff);
      coerce_tmp9 = (s)->buff;
      *(call_tmp11) = coerce_tmp9;
    }
    call_tmp12 = &((&ret)->owned);
    coerce_tmp10 = (s)->owned;
    *(call_tmp12) = coerce_tmp10;
    call_tmp13 = &((&ret)->len);
    *(call_tmp13) = coerce_tmp;
    call_tmp14 = &((&ret)->_size);
    call_tmp15 = (coerce_tmp + INT64(1));
    *(call_tmp14) = call_tmp15;
  }
  return ret;
}

/* String.chpl:1315 */
 void chpl___ASSIGN_2(_ref_string lhs, string* const rhs) {
  c_ptr_uint8_t coerce_tmp = NULL;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  coerce_tmp = (rhs)->buff;
  coerce_tmp2 = (rhs)->len;
  coerce_tmp3 = (rhs)->_size;
  chpl_check_nil(lhs, INT64(1329), INT64(8));
  reinitString(lhs, coerce_tmp, coerce_tmp2, coerce_tmp3, UINT8(true));
  return;
}

/* String.chpl:1360 */
 void chpl___PLUS_(string* const s0, string* const s1, _ref_string _retArg) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  int64_t coerce_tmp;
  chpl_bool call_tmp;
  int64_t coerce_tmp2;
  chpl_bool call_tmp2;
  string ret2;
  string this7;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_int64_t call_tmp4 = NULL;
  int64_t call_tmp5;
  int64_t coerce_tmp3;
  int64_t call_tmp6;
  int64_t call_tmp7;
  _ref_int64_t call_tmp8 = NULL;
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp10 = NULL;
  _ref_chpl_bool call_tmp11 = NULL;
  int32_t coerce_tmp4;
  chpl_bool call_tmp12;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  int32_t coerce_tmp6;
  int64_t call_tmp13;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  chpl_bool call_tmp14;
  uint64_t call_tmp15;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  chpl_bool call_tmp16;
  uint64_t call_tmp17;
  c_void_ptr call_tmp18;
  c_void_ptr call_tmp19;
  int32_t coerce_tmp10;
  chpl_bool call_tmp20;
  c_ptr_uint8_t call_tmp21 = NULL;
  c_ptr_uint8_t coerce_tmp11 = NULL;
  c_ptr_uint8_t call_tmp22 = NULL;
  int32_t coerce_tmp12;
  int64_t call_tmp23;
  c_ptr_uint8_t coerce_tmp13 = NULL;
  chpl_bool call_tmp24;
  uint64_t call_tmp25;
  c_ptr_uint8_t coerce_tmp14 = NULL;
  c_ptr_uint8_t call_tmp26 = NULL;
  c_ptr_uint8_t coerce_tmp15 = NULL;
  chpl_bool call_tmp27;
  uint64_t call_tmp28;
  c_void_ptr call_tmp29;
  c_void_ptr call_tmp30;
  c_ptr_uint8_t coerce_tmp16 = NULL;
  int64_t coerce_tmp17;
  _ref_uint8_t call_tmp31 = NULL;
  uint8_t call_tmp32;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  coerce_tmp = (s0)->len;
  call_tmp = (coerce_tmp == INT64(0));
  if (call_tmp) {
    ret = chpl__autoCopy5(s1);
    goto _end__PLUS_;
  }
  coerce_tmp2 = (s1)->len;
  call_tmp2 = (coerce_tmp2 == INT64(0));
  if (call_tmp2) {
    ret = chpl__autoCopy5(s0);
    goto _end__PLUS_;
  }
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  (&this7)->buff = nil;
  (&this7)->owned = UINT8(false);
  (&this7)->locale_id = INT32(0);
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  call_tmp3 = ((c_ptr_uint8_t)(nil));
  (&this7)->buff = call_tmp3;
  (&this7)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this7)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
  ret2 = wrap_call_tmp;
  call_tmp4 = &((&ret2)->len);
  call_tmp5 = (coerce_tmp + coerce_tmp2);
  *(call_tmp4) = call_tmp5;
  coerce_tmp3 = (&ret2)->len;
  call_tmp6 = (coerce_tmp3 + INT64(1));
  call_tmp7 = chpl_here_good_alloc_size(call_tmp6);
  call_tmp8 = &((&ret2)->_size);
  *(call_tmp8) = call_tmp7;
  call_tmp9 = &((&ret2)->buff);
  cast_tmp = chpl_here_alloc(call_tmp7, local_CHPL_RT_MD_STR_COPY_DATA);
  call_tmp10 = ((c_ptr_uint8_t)(cast_tmp));
  *(call_tmp9) = call_tmp10;
  call_tmp11 = &((&ret2)->owned);
  *(call_tmp11) = UINT8(true);
  coerce_tmp4 = (s0)->locale_id;
  call_tmp12 = (coerce_tmp4 != chpl_nodeID);
  if (call_tmp12) {
    coerce_tmp5 = (&ret2)->buff;
    coerce_tmp6 = (s0)->locale_id;
    call_tmp13 = ((int64_t)(coerce_tmp6));
    coerce_tmp7 = (s0)->buff;
    call_tmp14 = (coerce_tmp < INT64(0));
    if (call_tmp14) {
      halt(&local__str_literal_2657, INT64(1377), INT32(8));
    }
    call_tmp15 = ((uint64_t)(coerce_tmp));
    chpl_gen_comm_get(((void*)(coerce_tmp5)), call_tmp13, coerce_tmp7, call_tmp15, -1, INT64(1377), INT32(8));
  } else {
    coerce_tmp8 = (&ret2)->buff;
    coerce_tmp9 = (s0)->buff;
    call_tmp16 = (coerce_tmp < INT64(0));
    if (call_tmp16) {
      halt(&local__str_literal_2657, INT64(1379), INT32(8));
    }
    call_tmp17 = ((uint64_t)(coerce_tmp));
    call_tmp18 = ((c_void_ptr)(coerce_tmp8));
    call_tmp19 = ((c_void_ptr)(coerce_tmp9));
    memcpy(call_tmp18, call_tmp19, call_tmp17);
  }
  coerce_tmp10 = (s1)->locale_id;
  call_tmp20 = (coerce_tmp10 != chpl_nodeID);
  if (call_tmp20) {
    coerce_tmp11 = (&ret2)->buff;
    call_tmp22 = (coerce_tmp11 + coerce_tmp);
    call_tmp21 = call_tmp22;
    coerce_tmp12 = (s1)->locale_id;
    call_tmp23 = ((int64_t)(coerce_tmp12));
    coerce_tmp13 = (s1)->buff;
    call_tmp24 = (coerce_tmp2 < INT64(0));
    if (call_tmp24) {
      halt(&local__str_literal_2657, INT64(1384), INT32(8));
    }
    call_tmp25 = ((uint64_t)(coerce_tmp2));
    chpl_gen_comm_get(((void*)(call_tmp21)), call_tmp23, coerce_tmp13, call_tmp25, -1, INT64(1384), INT32(8));
  } else {
    coerce_tmp14 = (&ret2)->buff;
    call_tmp26 = (coerce_tmp14 + coerce_tmp);
    coerce_tmp15 = (s1)->buff;
    call_tmp27 = (coerce_tmp2 < INT64(0));
    if (call_tmp27) {
      halt(&local__str_literal_2657, INT64(1386), INT32(8));
    }
    call_tmp28 = ((uint64_t)(coerce_tmp2));
    call_tmp29 = ((c_void_ptr)(call_tmp26));
    call_tmp30 = ((c_void_ptr)(coerce_tmp15));
    memcpy(call_tmp29, call_tmp30, call_tmp28);
  }
  coerce_tmp16 = (&ret2)->buff;
  coerce_tmp17 = (&ret2)->len;
  call_tmp31 = (coerce_tmp16 + coerce_tmp17);
  call_tmp32 = ((uint8_t)(INT64(0)));
  *(call_tmp31) = call_tmp32;
  ret = ret2;
  _end__PLUS_:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:1555 */
 void chpl___PLUS__ASSIGN_(_ref_string lhs, _ref_string rhs) {
  string local__str_literal_2657;
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  int32_t local_c_sublocid_any;
  int64_t coerce_tmp;
  chpl_bool call_tmp;
  int32_t coerce_tmp2;
  chpl_localeID_t _autoCopy_tmp_;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t call_tmp2;
  int64_t coerce_tmp5;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  int64_t coerce_tmp6;
  _real64 call_tmp5;
  _real64 call_tmp6;
  _real64 call_tmp7;
  _real64 T;
  chpl_bool call_tmp8;
  int64_t call_tmp9;
  int64_t call_tmp10;
  chpl_bool coerce_tmp7;
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
  c_void_ptr call_tmp12;
  c_ptr_uint8_t coerce_tmp8 = NULL;
  c_void_ptr call_tmp13;
  c_ptr_uint8_t call_tmp14 = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp15 = NULL;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  int64_t coerce_tmp10;
  chpl_bool call_tmp16;
  uint64_t call_tmp17;
  c_void_ptr call_tmp18;
  c_void_ptr call_tmp19;
  _ref_c_ptr_uint8_t call_tmp20 = NULL;
  _ref_chpl_bool call_tmp21 = NULL;
  _ref_int64_t call_tmp22 = NULL;
  int32_t coerce_tmp11;
  chpl_bool call_tmp23;
  c_ptr_uint8_t call_tmp24 = NULL;
  c_ptr_uint8_t coerce_tmp12 = NULL;
  int64_t coerce_tmp13;
  c_ptr_uint8_t call_tmp25 = NULL;
  int32_t coerce_tmp14;
  int64_t call_tmp26;
  c_ptr_uint8_t coerce_tmp15 = NULL;
  chpl_bool call_tmp27;
  uint64_t call_tmp28;
  c_ptr_uint8_t coerce_tmp16 = NULL;
  int64_t coerce_tmp17;
  c_ptr_uint8_t call_tmp29 = NULL;
  c_ptr_uint8_t coerce_tmp18 = NULL;
  chpl_bool call_tmp30;
  uint64_t call_tmp31;
  c_void_ptr call_tmp32;
  c_void_ptr call_tmp33;
  _ref_int64_t call_tmp34 = NULL;
  c_ptr_uint8_t coerce_tmp19 = NULL;
  _ref_uint8_t call_tmp35 = NULL;
  uint8_t call_tmp36;
  local__str_literal_2657 = _str_literal_2657;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  local_c_sublocid_any = c_sublocid_any;
  chpl_check_nil(rhs, INT64(1557), INT64(8));
  coerce_tmp = (rhs)->len;
  call_tmp = (coerce_tmp == INT64(0));
  if (call_tmp) {
    goto _end__PLUS__ASSIGN_;
  }
  chpl_check_nil(lhs, INT64(1560), INT64(8));
  coerce_tmp2 = (lhs)->locale_id;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  chpl_buildLocaleID(coerce_tmp2, local_c_sublocid_any, ret_to_arg_ref_tmp_, INT64(1560), INT32(8));
  chpl_check_nil(rhs, INT64(1561), INT64(8));
  coerce_tmp3 = (rhs)->len;
  chpl_check_nil(lhs, INT64(1562), INT64(8));
  coerce_tmp4 = (lhs)->len;
  call_tmp2 = (coerce_tmp4 + coerce_tmp3);
  chpl_check_nil(lhs, INT64(1563), INT64(8));
  coerce_tmp5 = (lhs)->_size;
  call_tmp3 = (coerce_tmp5 <= call_tmp2);
  if (call_tmp3) {
    call_tmp4 = (call_tmp2 + INT64(1));
    chpl_check_nil(lhs, INT64(1565), INT64(8));
    coerce_tmp6 = (lhs)->len;
    call_tmp5 = ((_real64)(coerce_tmp6));
    call_tmp6 = (call_tmp5 * 1.5);
    call_tmp7 = ((_real64)(call_tmp4));
    call_tmp8 = (call_tmp7 > call_tmp6);
    if (call_tmp8) {
      T = call_tmp7;
    } else {
      T = call_tmp6;
    }
    call_tmp9 = ((int64_t)(T));
    call_tmp10 = chpl_here_good_alloc_size(call_tmp9);
    chpl_check_nil(lhs, INT64(1567), INT64(8));
    coerce_tmp7 = (lhs)->owned;
    if (coerce_tmp7) {
      chpl_check_nil(lhs, INT64(1568), INT64(8));
      call_tmp11 = &((lhs)->buff);
      chpl_check_nil(lhs, INT64(1568), INT64(8));
      coerce_tmp8 = (lhs)->buff;
      call_tmp13 = ((c_void_ptr)(coerce_tmp8));
      call_tmp12 = chpl_here_realloc(call_tmp13, call_tmp10, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp14 = ((c_ptr_uint8_t)(call_tmp12));
      *(call_tmp11) = call_tmp14;
    } else {
      cast_tmp = chpl_here_alloc(call_tmp10, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp15 = ((c_ptr_uint8_t)(cast_tmp));
      chpl_check_nil(lhs, INT64(1573), INT64(8));
      coerce_tmp9 = (lhs)->buff;
      chpl_check_nil(lhs, INT64(1573), INT64(8));
      coerce_tmp10 = (lhs)->len;
      call_tmp16 = (coerce_tmp10 < INT64(0));
      if (call_tmp16) {
        halt(&local__str_literal_2657, INT64(1573), INT32(8));
      }
      call_tmp17 = ((uint64_t)(coerce_tmp10));
      call_tmp18 = ((c_void_ptr)(call_tmp15));
      call_tmp19 = ((c_void_ptr)(coerce_tmp9));
      memcpy(call_tmp18, call_tmp19, call_tmp17);
      chpl_check_nil(lhs, INT64(1574), INT64(8));
      call_tmp20 = &((lhs)->buff);
      *(call_tmp20) = call_tmp15;
      chpl_check_nil(lhs, INT64(1575), INT64(8));
      call_tmp21 = &((lhs)->owned);
      *(call_tmp21) = UINT8(true);
    }
    chpl_check_nil(lhs, INT64(1578), INT64(8));
    call_tmp22 = &((lhs)->_size);
    *(call_tmp22) = call_tmp10;
  }
  chpl_check_nil(rhs, INT64(1580), INT64(8));
  coerce_tmp11 = (rhs)->locale_id;
  call_tmp23 = (coerce_tmp11 != chpl_nodeID);
  if (call_tmp23) {
    chpl_check_nil(lhs, INT64(1582), INT64(8));
    coerce_tmp12 = (lhs)->buff;
    chpl_check_nil(lhs, INT64(1582), INT64(8));
    coerce_tmp13 = (lhs)->len;
    call_tmp25 = (coerce_tmp12 + coerce_tmp13);
    call_tmp24 = call_tmp25;
    chpl_check_nil(rhs, INT64(1582), INT64(8));
    coerce_tmp14 = (rhs)->locale_id;
    call_tmp26 = ((int64_t)(coerce_tmp14));
    chpl_check_nil(rhs, INT64(1582), INT64(8));
    coerce_tmp15 = (rhs)->buff;
    call_tmp27 = (coerce_tmp3 < INT64(0));
    if (call_tmp27) {
      halt(&local__str_literal_2657, INT64(1582), INT32(8));
    }
    call_tmp28 = ((uint64_t)(coerce_tmp3));
    chpl_gen_comm_get(((void*)(call_tmp24)), call_tmp26, coerce_tmp15, call_tmp28, -1, INT64(1582), INT32(8));
  } else {
    chpl_check_nil(lhs, INT64(1584), INT64(8));
    coerce_tmp16 = (lhs)->buff;
    chpl_check_nil(lhs, INT64(1584), INT64(8));
    coerce_tmp17 = (lhs)->len;
    call_tmp29 = (coerce_tmp16 + coerce_tmp17);
    chpl_check_nil(rhs, INT64(1584), INT64(8));
    coerce_tmp18 = (rhs)->buff;
    call_tmp30 = (coerce_tmp3 < INT64(0));
    if (call_tmp30) {
      halt(&local__str_literal_2657, INT64(1584), INT32(8));
    }
    call_tmp31 = ((uint64_t)(coerce_tmp3));
    call_tmp32 = ((c_void_ptr)(call_tmp29));
    call_tmp33 = ((c_void_ptr)(coerce_tmp18));
    memcpy(call_tmp32, call_tmp33, call_tmp31);
  }
  chpl_check_nil(lhs, INT64(1586), INT64(8));
  call_tmp34 = &((lhs)->len);
  *(call_tmp34) = call_tmp2;
  chpl_check_nil(lhs, INT64(1587), INT64(8));
  coerce_tmp19 = (lhs)->buff;
  call_tmp35 = (coerce_tmp19 + call_tmp2);
  call_tmp36 = ((uint8_t)(INT64(0)));
  *(call_tmp35) = call_tmp36;
  _end__PLUS__ASSIGN_:;
  return;
}

/* String.chpl:1621 */
 chpl_bool chpl___EQUALS__(string* const a, string* const b) {
  string local__str_literal_2657;
  string localA;
  string type_tmp;
  string this7;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp2;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  string localB;
  string type_tmp2;
  string this8;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id2;
  string wrap_call_tmp2;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  string call_tmp5;
  string call_tmp6;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  chpl_bool ret;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  chpl_bool call_tmp7;
  int64_t ret2;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t T;
  chpl_bool call_tmp8;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  chpl_bool call_tmp9;
  uint64_t call_tmp10;
  int32_t call_tmp11;
  c_void_ptr call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  int64_t coerce_tmp7;
  chpl_bool call_tmp15;
  int64_t coerce_tmp8;
  chpl_bool call_tmp16;
  chpl_bool call_tmp17;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  _ref_string _ref_tmp_6 = NULL;
  local__str_literal_2657 = _str_literal_2657;
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  (&this7)->buff = nil;
  (&this7)->owned = UINT8(false);
  (&this7)->locale_id = INT32(0);
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this7)->buff = call_tmp;
  (&this7)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this7)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
  type_tmp = wrap_call_tmp;
  ret_to_arg_ref_tmp_2 = &call_tmp3;
  string2(a, UINT8(false), ret_to_arg_ref_tmp_2);
  call_tmp2 = call_tmp3;
  _ref_tmp_ = &type_tmp;
  chpl___ASSIGN_2(_ref_tmp_, &call_tmp3);
  localA = type_tmp;
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  (&this8)->buff = nil;
  (&this8)->owned = UINT8(false);
  (&this8)->locale_id = INT32(0);
  (&this8)->len = INT64(0);
  (&this8)->_size = INT64(0);
  call_tmp4 = ((c_ptr_uint8_t)(nil));
  (&this8)->buff = call_tmp4;
  (&this8)->owned = UINT8(true);
  default_arglocale_id2 = chpl_nodeID;
  (&this8)->locale_id = default_arglocale_id2;
  ret_to_arg_ref_tmp_3 = &wrap_call_tmp2;
  _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id2, &this8, ret_to_arg_ref_tmp_3);
  type_tmp2 = wrap_call_tmp2;
  ret_to_arg_ref_tmp_4 = &call_tmp6;
  string2(b, UINT8(false), ret_to_arg_ref_tmp_4);
  call_tmp5 = call_tmp6;
  _ref_tmp_2 = &type_tmp2;
  chpl___ASSIGN_2(_ref_tmp_2, &call_tmp6);
  localB = type_tmp2;
  coerce_tmp = (&localA)->len;
  coerce_tmp2 = (&localB)->len;
  call_tmp7 = (coerce_tmp != coerce_tmp2);
  if (call_tmp7) {
    ret = UINT8(false);
    goto _end_doEq;
  }
  coerce_tmp3 = (&localA)->len;
  coerce_tmp4 = (&localB)->len;
  call_tmp8 = (coerce_tmp3 < coerce_tmp4);
  if (call_tmp8) {
    T = coerce_tmp3;
  } else {
    T = coerce_tmp4;
  }
  coerce_tmp5 = (&localA)->buff;
  coerce_tmp6 = (&localB)->buff;
  call_tmp9 = (T < INT64(0));
  if (call_tmp9) {
    halt(&local__str_literal_2657, INT64(1648), INT32(8));
  }
  call_tmp10 = ((uint64_t)(T));
  call_tmp12 = ((c_void_ptr)(coerce_tmp5));
  call_tmp11 = memcmp(call_tmp12, coerce_tmp6, call_tmp10);
  call_tmp13 = ((int64_t)(call_tmp11));
  call_tmp14 = (call_tmp13 == INT64(0));
  if (call_tmp14) {
    coerce_tmp7 = (&localA)->len;
    call_tmp15 = (T < coerce_tmp7);
    if (call_tmp15) {
      ret2 = INT64(1);
      goto _end__strcmp;
    }
    coerce_tmp8 = (&localB)->len;
    call_tmp16 = (T < coerce_tmp8);
    if (call_tmp16) {
      ret2 = INT64(-1);
      goto _end__strcmp;
    }
  }
  ret2 = call_tmp13;
  _end__strcmp:;
  call_tmp17 = (ret2 == INT64(0));
  ret = call_tmp17;
  _end_doEq:;
  _ref_tmp_3 = &call_tmp5;
  chpl___TILDE_string(_ref_tmp_3);
  _ref_tmp_4 = &localB;
  chpl___TILDE_string(_ref_tmp_4);
  _ref_tmp_5 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_5);
  _ref_tmp_6 = &localA;
  chpl___TILDE_string(_ref_tmp_6);
  return ret;
}

/* String.chpl:1762 */
 void _cast(c_string cs, _ref_string _retArg) {
  string ret;
  string this7;
  c_ptr_uint8_t call_tmp = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_int64_t call_tmp2 = NULL;
  int64_t call_tmp3;
  _ref_int64_t call_tmp4 = NULL;
  int64_t coerce_tmp;
  int64_t call_tmp5;
  _ref_c_ptr_uint8_t call_tmp6 = NULL;
  c_ptr_uint8_t T = NULL;
  int64_t coerce_tmp2;
  chpl_bool call_tmp7;
  c_string_copy call_tmp8;
  c_ptr_uint8_t call_tmp9 = NULL;
  _nilType call_tmp10;
  c_ptr_uint8_t call_tmp11 = NULL;
  _ref_chpl_bool call_tmp12 = NULL;
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  (&this7)->buff = nil;
  (&this7)->owned = UINT8(false);
  (&this7)->locale_id = INT32(0);
  (&this7)->len = INT64(0);
  (&this7)->_size = INT64(0);
  call_tmp = ((c_ptr_uint8_t)(nil));
  (&this7)->buff = call_tmp;
  (&this7)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this7)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this7, ret_to_arg_ref_tmp_);
  ret = wrap_call_tmp;
  call_tmp2 = &((&ret)->len);
  call_tmp3 = string_length(cs);
  *(call_tmp2) = call_tmp3;
  call_tmp4 = &((&ret)->_size);
  coerce_tmp = (&ret)->len;
  call_tmp5 = (coerce_tmp + INT64(1));
  *(call_tmp4) = call_tmp5;
  call_tmp6 = &((&ret)->buff);
  coerce_tmp2 = (&ret)->len;
  call_tmp7 = (coerce_tmp2 > INT64(0));
  if (call_tmp7) {
    call_tmp8 = string_copy(cs, INT64(1766), INT32(8));
    call_tmp9 = ((c_ptr_uint8_t)(call_tmp8));
    T = call_tmp9;
  } else {
    call_tmp10 = nil;
    call_tmp11 = ((c_ptr_uint8_t)(call_tmp10));
    T = call_tmp11;
  }
  *(call_tmp6) = T;
  call_tmp12 = &((&ret)->owned);
  *(call_tmp12) = UINT8(true);
  *(_retArg) = ret;
  return;
}

