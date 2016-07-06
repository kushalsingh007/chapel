/* ChapelIO.chpl:179 */
 void chpl__init_ChapelIO(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelIO_p) {
    goto _exit_chpl__init_ChapelIO;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelIO";
  printModuleInit(modFormatStr, modStr, INT64(8));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelIO_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(179), INT32(29));
    chpl__init_SysBasic(INT64(179), INT32(29));
    chpl__init_IO(INT64(179), INT32(29));
  }
  chpl__testParOn = UINT8(false);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIO:;
  return;
}

/* ChapelIO.chpl:215 */
 void _stringify_index(_tuple_1_star_int64_t* const tup, _ref_string _retArg) {
  string local__str_literal_541;
  string str;
  string call_tmp;
  int64_t coerce_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  local__str_literal_541 = _str_literal_541;
  str = chpl__autoCopy5(&local__str_literal_541);
  coerce_tmp = *(*(tup) + INT64(0));
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast3(coerce_tmp, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &str;
  _ref_tmp_2 = &call_tmp;
  chpl___PLUS__ASSIGN_(_ref_tmp_, _ref_tmp_2);
  _ref_tmp_3 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_3);
  _ref_tmp_4 = &str;
  _ref_tmp_5 = &_str_literal_387;
  chpl___PLUS__ASSIGN_(_ref_tmp_4, _ref_tmp_5);
  *(_retArg) = str;
  return;
}

/* ChapelIO.chpl:688 */
 void halt(string* const s, int64_t _ln, int32_t _fn) {
  string local__str_literal_306;
  string call_tmp;
  string call_tmp2;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp4;
  _ref_string _ref_tmp_ = NULL;
  local__str_literal_306 = _str_literal_306;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  string2(s, UINT8(false), ret_to_arg_ref_tmp_);
  call_tmp = call_tmp2;
  coerce_tmp = (&call_tmp)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_306, _ln, _fn);
  }
  coerce_tmp2 = (&call_tmp)->buff;
  call_tmp4 = ((c_string)(coerce_tmp2));
  halt2(call_tmp4, _ln, _fn);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return;
}

/* ChapelIO.chpl:693 */
 void halt2(c_string s, int64_t _ln, int32_t _fn) {
  c_string_copy call_tmp;
  call_tmp = string_concat("halt reached - ", s, _ln, _fn);
  chpl_error(call_tmp, _ln, _fn);
  return;
}

/* ChapelIO.chpl:702 */
 void halt3(string* const _e0_args, int64_t _e1_args, int64_t _ln, int32_t _fn) {
  string local__str_literal_306;
  string local__str_literal_1551;
  string tmpstring;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp4;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_1551 = _str_literal_1551;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  stringify_chpl(_e0_args, _e1_args, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  chpl___PLUS_(&local__str_literal_1551, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2);
  tmpstring = call_tmp2;
  coerce_tmp = (&tmpstring)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_306, _ln, _fn);
  }
  coerce_tmp2 = (&tmpstring)->buff;
  call_tmp4 = ((c_string)(coerce_tmp2));
  chpl_error(call_tmp4, _ln, _fn);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  _ref_tmp_2 = &tmpstring;
  chpl___TILDE_string(_ref_tmp_2);
  return;
}

