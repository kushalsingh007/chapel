/* StringCasts.chpl:20 */
 void chpl__init_StringCasts(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_StringCasts_p) {
    goto _exit_chpl__init_StringCasts;
  }
  modFormatStr = "%*s\n";
  modStr = "StringCasts";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_StringCasts_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_StringCasts:;
  return;
}

/* StringCasts.chpl:44 */
 chpl_bool _cast2(string* const x) {
  string local__str_literal_806;
  string local__str_literal_1754;
  string local__str_literal_1752;
  string local__str_literal_520;
  string local__str_literal_339;
  chpl_bool ret;
  string str;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp;
  _ref_string _ref_tmp_2 = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_3 = NULL;
  string call_tmp3;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp4;
  string _autoCopy_tmp_3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  _ref_string _ref_tmp_6 = NULL;
  local__str_literal_806 = _str_literal_806;
  local__str_literal_1754 = _str_literal_1754;
  local__str_literal_1752 = _str_literal_1752;
  local__str_literal_520 = _str_literal_520;
  local__str_literal_339 = _str_literal_339;
  _ref_tmp_ = x;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  chpl_check_nil(_ref_tmp_, INT64(45), INT64(40));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_);
  str = _autoCopy_tmp_;
  call_tmp = chpl___EQUALS__(&_autoCopy_tmp_, &local__str_literal_520);
  if (call_tmp) {
    ret = UINT8(true);
    _ref_tmp_2 = &str;
    chpl___TILDE_string(_ref_tmp_2);
    goto _end__cast;
  } else {
    call_tmp2 = chpl___EQUALS__(&_autoCopy_tmp_, &local__str_literal_1752);
    if (call_tmp2) {
      ret = UINT8(false);
      _ref_tmp_3 = &str;
      chpl___TILDE_string(_ref_tmp_3);
      goto _end__cast;
    } else {
      ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
      chpl___PLUS_(&local__str_literal_1754, x, ret_to_arg_ref_tmp_2);
      call_tmp3 = _autoCopy_tmp_2;
      ret_to_arg_ref_tmp_3 = &_autoCopy_tmp_3;
      chpl___PLUS_(&_autoCopy_tmp_2, &local__str_literal_806, ret_to_arg_ref_tmp_3);
      call_tmp4 = _autoCopy_tmp_3;
      halt(&_autoCopy_tmp_3, INT64(51), INT32(40));
      _ref_tmp_4 = &call_tmp3;
      chpl___TILDE_string(_ref_tmp_4);
      _ref_tmp_5 = &call_tmp4;
      chpl___TILDE_string(_ref_tmp_5);
    }
  }
  _ref_tmp_6 = &str;
  chpl___TILDE_string(_ref_tmp_6);
  _end__cast:;
  return ret;
}

/* StringCasts.chpl:58 */
 void _cast3(int64_t x, _ref_string _retArg) {
  string local__str_literal_2668;
  c_string_copy call_tmp;
  uint32_t call_tmp2;
  string ret;
  string this7;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_c_ptr_uint8_t call_tmp4 = NULL;
  c_ptr_uint8_t call_tmp5 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  uint64_t call_tmp7;
  chpl_bool call_tmp8;
  int64_t call_tmp9;
  _ref_int64_t call_tmp10 = NULL;
  int64_t coerce_tmp;
  int64_t call_tmp11;
  local__str_literal_2668 = _str_literal_2668;
  call_tmp2 = ((uint32_t)(INT64(8)));
  call_tmp = integral_to_c_string_copy(x, call_tmp2, UINT8(true));
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
  ret = wrap_call_tmp;
  call_tmp4 = &((&ret)->buff);
  call_tmp5 = ((c_ptr_uint8_t)(call_tmp));
  *(call_tmp4) = call_tmp5;
  call_tmp6 = &((&ret)->len);
  call_tmp7 = strlen(call_tmp);
  call_tmp8 = (call_tmp7 > UINT64(9223372036854775807));
  if (call_tmp8) {
    halt(&local__str_literal_2668, INT64(67), INT32(40));
  }
  call_tmp9 = ((int64_t)(call_tmp7));
  *(call_tmp6) = call_tmp9;
  call_tmp10 = &((&ret)->_size);
  coerce_tmp = (&ret)->len;
  call_tmp11 = (coerce_tmp + INT64(1));
  *(call_tmp10) = call_tmp11;
  *(_retArg) = ret;
  return;
}

