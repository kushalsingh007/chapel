/* IO.chpl:1152 */
 void chpl__init_IO(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  string local__str_literal_2069_chpl;
  string local__str_literal_2067_chpl;
  string local__str_literal_2065_chpl;
  string local__str_literal_2063_chpl;
  string local__str_literal_2061_chpl;
  string local__str_literal_367_chpl;
  string local__str_literal_1912_chpl;
  string local__str_literal_1910_chpl;
  string local__str_literal_1908_chpl;
  string local__str_literal_1906_chpl;
  int32_t const_tmp_chpl;
  int32_t const_tmp_chpl2;
  int32_t const_tmp_chpl3;
  int32_t const_tmp_chpl4;
  string call_tmp_chpl;
  string call_tmp_chpl2;
  string call_tmp_chpl3;
  string call_tmp_chpl4;
  string call_tmp_chpl5;
  string call_tmp_chpl6;
  string call_tmp_chpl7;
  string call_tmp_chpl8;
  string call_tmp_chpl9;
  string call_tmp_chpl10;
  string call_tmp_chpl11;
  string call_tmp_chpl12;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  channel_F_dynamic_T_chpl type_tmp_chpl;
  channel_F_dynamic_T_chpl this_chpl;
  locale call_tmp_chpl13 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  file_chpl call_tmp_chpl14;
  int32_t call_tmp_chpl15;
  int32_t default_arghints_chpl;
  iostyle _autoCopy_tmp__chpl;
  _ref_iostyle ret_to_arg_ref_tmp__chpl2 = NULL;
  file_chpl _autoCopy_tmp__chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl3 = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl16;
  _ref_file _ref_tmp__chpl7 = NULL;
  int32_t default_arghints_chpl2;
  iostyle _autoCopy_tmp__chpl3;
  _ref_iostyle ret_to_arg_ref_tmp__chpl4 = NULL;
  channel_F_dynamic_T_chpl _autoCopy_tmp__chpl4;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl8 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl2;
  channel_T_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl17 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl2;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl6 = NULL;
  _cfile call_tmp_chpl18;
  file_chpl call_tmp_chpl19;
  int32_t default_arghints_chpl3;
  iostyle _autoCopy_tmp__chpl5;
  _ref_iostyle ret_to_arg_ref_tmp__chpl7 = NULL;
  file_chpl _autoCopy_tmp__chpl6;
  _ref_file ret_to_arg_ref_tmp__chpl8 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl20;
  _ref_file _ref_tmp__chpl9 = NULL;
  iostyle _autoCopy_tmp__chpl7;
  _ref_iostyle ret_to_arg_ref_tmp__chpl9 = NULL;
  int32_t call_tmp_chpl21;
  channel_T_dynamic_T_chpl _autoCopy_tmp__chpl8;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl10 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl3;
  channel_T_dynamic_T_chpl this_chpl3;
  locale call_tmp_chpl22 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl3;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl3;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl11 = NULL;
  _cfile call_tmp_chpl23;
  file_chpl call_tmp_chpl24;
  int32_t default_arghints_chpl4;
  iostyle _autoCopy_tmp__chpl9;
  _ref_iostyle ret_to_arg_ref_tmp__chpl12 = NULL;
  file_chpl _autoCopy_tmp__chpl10;
  _ref_file ret_to_arg_ref_tmp__chpl13 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl25;
  _ref_file _ref_tmp__chpl11 = NULL;
  iostyle _autoCopy_tmp__chpl11;
  _ref_iostyle ret_to_arg_ref_tmp__chpl14 = NULL;
  int32_t call_tmp_chpl26;
  channel_T_dynamic_T_chpl _autoCopy_tmp__chpl12;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl15 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl12 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl13 = NULL;
  _ref_file _ref_tmp__chpl14 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl15 = NULL;
  _ref_file _ref_tmp__chpl16 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl17 = NULL;
  _ref_file _ref_tmp__chpl18 = NULL;
  if (chpl__init_IO_p) {
    goto _exit_chpl__init_IO_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "IO";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(2));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_IO_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(1152), INT32(52));
    chpl__init_Error(INT64(1152), INT32(52));
    chpl__init_Regexp(INT64(1152), INT32(52));
  }
  local__str_literal_2069_chpl = _str_literal_2069;
  local__str_literal_2067_chpl = _str_literal_2067;
  local__str_literal_2065_chpl = _str_literal_2065;
  local__str_literal_2063_chpl = _str_literal_2063;
  local__str_literal_2061_chpl = _str_literal_2061;
  local__str_literal_367_chpl = _str_literal_367;
  local__str_literal_1912_chpl = _str_literal_1912;
  local__str_literal_1910_chpl = _str_literal_1910;
  local__str_literal_1908_chpl = _str_literal_1908;
  local__str_literal_1906_chpl = _str_literal_1906;
  IOHINT_NONE_chpl = INT32(0);
  const_tmp_chpl = QIO_HINT_RANDOM;
  IOHINT_RANDOM_chpl = const_tmp_chpl;
  const_tmp_chpl2 = QIO_HINT_SEQUENTIAL;
  IOHINT_SEQUENTIAL_chpl = const_tmp_chpl2;
  const_tmp_chpl3 = QIO_HINT_CACHED;
  IOHINT_CACHED_chpl = const_tmp_chpl3;
  const_tmp_chpl4 = QIO_HINT_PARALLEL;
  IOHINT_PARALLEL_chpl = const_tmp_chpl4;
  _r_chpl = local__str_literal_1906_chpl;
  _rw_chpl = local__str_literal_1908_chpl;
  _cw_chpl = local__str_literal_1910_chpl;
  _cwr_chpl = local__str_literal_1912_chpl;
  call_tmp_chpl = chpl__initCopy3(&local__str_literal_367_chpl);
  call_tmp_chpl2 = chpl__initCopy3(&local__str_literal_2061_chpl);
  call_tmp_chpl3 = chpl__initCopy3(&local__str_literal_2063_chpl);
  call_tmp_chpl4 = chpl__initCopy3(&local__str_literal_2065_chpl);
  call_tmp_chpl5 = chpl__initCopy3(&local__str_literal_2067_chpl);
  call_tmp_chpl6 = chpl__initCopy3(&local__str_literal_2069_chpl);
  call_tmp_chpl7 = chpl__autoCopy5(&call_tmp_chpl);
  call_tmp_chpl8 = chpl__autoCopy5(&call_tmp_chpl2);
  call_tmp_chpl9 = chpl__autoCopy5(&call_tmp_chpl3);
  call_tmp_chpl10 = chpl__autoCopy5(&call_tmp_chpl4);
  call_tmp_chpl11 = chpl__autoCopy5(&call_tmp_chpl5);
  call_tmp_chpl12 = chpl__autoCopy5(&call_tmp_chpl6);
  _ref_tmp__chpl = &call_tmp_chpl6;
  chpl___TILDE_string(_ref_tmp__chpl);
  _ref_tmp__chpl2 = &call_tmp_chpl5;
  chpl___TILDE_string(_ref_tmp__chpl2);
  _ref_tmp__chpl3 = &call_tmp_chpl4;
  chpl___TILDE_string(_ref_tmp__chpl3);
  _ref_tmp__chpl4 = &call_tmp_chpl3;
  chpl___TILDE_string(_ref_tmp__chpl4);
  _ref_tmp__chpl5 = &call_tmp_chpl2;
  chpl___TILDE_string(_ref_tmp__chpl5);
  _ref_tmp__chpl6 = &call_tmp_chpl;
  chpl___TILDE_string(_ref_tmp__chpl6);
  *(_arg_to_proto_names_chpl + INT64(0)) = call_tmp_chpl7;
  *(_arg_to_proto_names_chpl + INT64(1)) = call_tmp_chpl8;
  *(_arg_to_proto_names_chpl + INT64(2)) = call_tmp_chpl9;
  *(_arg_to_proto_names_chpl + INT64(3)) = call_tmp_chpl10;
  *(_arg_to_proto_names_chpl + INT64(4)) = call_tmp_chpl11;
  *(_arg_to_proto_names_chpl + INT64(5)) = call_tmp_chpl12;
  (&this_chpl)->home_chpl = nil;
  call_tmp_chpl13 = ((locale)(nil));
  (&this_chpl)->home_chpl = call_tmp_chpl13;
  default_arg_channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
  (&this_chpl)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_channel_chpl(call_tmp_chpl13, default_arg_channel_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl15 = ((int32_t)(INT64(0)));
  default_arghints_chpl = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl2);
  ret_to_arg_ref_tmp__chpl3 = &_autoCopy_tmp__chpl2;
  openfd_chpl2(call_tmp_chpl15, default_arghints_chpl, &_autoCopy_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl14 = _autoCopy_tmp__chpl2;
  _ref_tmp__chpl7 = &call_tmp_chpl14;
  default_arghints_chpl2 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl4 = &_autoCopy_tmp__chpl3;
  chpl_check_nil(_ref_tmp__chpl7, INT64(4814), INT64(52));
  _style_chpl(_ref_tmp__chpl7, ret_to_arg_ref_tmp__chpl4);
  ret_to_arg_ref_tmp__chpl5 = &_autoCopy_tmp__chpl4;
  chpl_check_nil(_ref_tmp__chpl7, INT64(4814), INT64(52));
  reader_chpl2(_ref_tmp__chpl7, INT64(0), INT64(9223372036854775807), default_arghints_chpl2, &_autoCopy_tmp__chpl3, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl16 = _autoCopy_tmp__chpl4;
  _ref_tmp__chpl8 = &type_tmp_chpl;
  chpl___ASSIGN_4(_ref_tmp__chpl8, &_autoCopy_tmp__chpl4);
  stdin_chpl = type_tmp_chpl;
  (&this_chpl2)->home_chpl = nil;
  call_tmp_chpl17 = ((locale)(nil));
  (&this_chpl2)->home_chpl = call_tmp_chpl17;
  default_arg_channel_internal_chpl2 = QIO_CHANNEL_PTR_NULL;
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
  ret_to_arg_ref_tmp__chpl6 = &wrap_call_tmp_chpl2;
  _construct_channel_chpl2(call_tmp_chpl17, default_arg_channel_internal_chpl2, &this_chpl2, ret_to_arg_ref_tmp__chpl6);
  type_tmp_chpl2 = wrap_call_tmp_chpl2;
  call_tmp_chpl18 = chpl_cstdout();
  default_arghints_chpl3 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl7 = &_autoCopy_tmp__chpl5;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl7);
  ret_to_arg_ref_tmp__chpl8 = &_autoCopy_tmp__chpl6;
  openfp_chpl2(call_tmp_chpl18, default_arghints_chpl3, &_autoCopy_tmp__chpl5, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl19 = _autoCopy_tmp__chpl6;
  _ref_tmp__chpl9 = &call_tmp_chpl19;
  ret_to_arg_ref_tmp__chpl9 = &_autoCopy_tmp__chpl7;
  chpl_check_nil(_ref_tmp__chpl9, INT64(4816), INT64(52));
  _style_chpl(_ref_tmp__chpl9, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl21 = ((int32_t)(INT64(0)));
  ret_to_arg_ref_tmp__chpl10 = &_autoCopy_tmp__chpl8;
  chpl_check_nil(_ref_tmp__chpl9, INT64(4816), INT64(52));
  writer_chpl2(_ref_tmp__chpl9, INT64(0), INT64(9223372036854775807), call_tmp_chpl21, &_autoCopy_tmp__chpl7, ret_to_arg_ref_tmp__chpl10);
  call_tmp_chpl20 = _autoCopy_tmp__chpl8;
  _ref_tmp__chpl10 = &type_tmp_chpl2;
  chpl___ASSIGN_3(_ref_tmp__chpl10, &_autoCopy_tmp__chpl8);
  stdout_chpl = type_tmp_chpl2;
  (&this_chpl3)->home_chpl = nil;
  call_tmp_chpl22 = ((locale)(nil));
  (&this_chpl3)->home_chpl = call_tmp_chpl22;
  default_arg_channel_internal_chpl3 = QIO_CHANNEL_PTR_NULL;
  (&this_chpl3)->_channel_internal_chpl = default_arg_channel_internal_chpl3;
  ret_to_arg_ref_tmp__chpl11 = &wrap_call_tmp_chpl3;
  _construct_channel_chpl2(call_tmp_chpl22, default_arg_channel_internal_chpl3, &this_chpl3, ret_to_arg_ref_tmp__chpl11);
  type_tmp_chpl3 = wrap_call_tmp_chpl3;
  call_tmp_chpl23 = chpl_cstderr();
  default_arghints_chpl4 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl12 = &_autoCopy_tmp__chpl9;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl12);
  ret_to_arg_ref_tmp__chpl13 = &_autoCopy_tmp__chpl10;
  openfp_chpl2(call_tmp_chpl23, default_arghints_chpl4, &_autoCopy_tmp__chpl9, ret_to_arg_ref_tmp__chpl13);
  call_tmp_chpl24 = _autoCopy_tmp__chpl10;
  _ref_tmp__chpl11 = &call_tmp_chpl24;
  ret_to_arg_ref_tmp__chpl14 = &_autoCopy_tmp__chpl11;
  chpl_check_nil(_ref_tmp__chpl11, INT64(4818), INT64(52));
  _style_chpl(_ref_tmp__chpl11, ret_to_arg_ref_tmp__chpl14);
  call_tmp_chpl26 = ((int32_t)(INT64(0)));
  ret_to_arg_ref_tmp__chpl15 = &_autoCopy_tmp__chpl12;
  chpl_check_nil(_ref_tmp__chpl11, INT64(4818), INT64(52));
  writer_chpl2(_ref_tmp__chpl11, INT64(0), INT64(9223372036854775807), call_tmp_chpl26, &_autoCopy_tmp__chpl11, ret_to_arg_ref_tmp__chpl15);
  call_tmp_chpl25 = _autoCopy_tmp__chpl12;
  _ref_tmp__chpl12 = &type_tmp_chpl3;
  chpl___ASSIGN_3(_ref_tmp__chpl12, &_autoCopy_tmp__chpl12);
  stderr_chpl = type_tmp_chpl3;
  _ref_tmp__chpl13 = &call_tmp_chpl25;
  chpl___TILDE_channel(_ref_tmp__chpl13);
  _ref_tmp__chpl14 = &call_tmp_chpl24;
  chpl___TILDE_file(_ref_tmp__chpl14);
  _ref_tmp__chpl15 = &call_tmp_chpl20;
  chpl___TILDE_channel(_ref_tmp__chpl15);
  _ref_tmp__chpl16 = &call_tmp_chpl19;
  chpl___TILDE_file(_ref_tmp__chpl16);
  _ref_tmp__chpl17 = &call_tmp_chpl16;
  chpl___TILDE_channel2(_ref_tmp__chpl17);
  _ref_tmp__chpl18 = &call_tmp_chpl14;
  chpl___TILDE_file(_ref_tmp__chpl18);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_IO_chpl:;
  return;
}

/* IO.chpl:1847 */
 void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl) {
  iostyle ret_chpl;
  iostyle type_tmp_chpl;
  _ref_iostyle _ref_tmp__chpl = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  qio_style_init_default(_ref_tmp__chpl);
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1980 */
 void _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, _ref_file _retArg_chpl) {
  file_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->home_chpl = home_chpl;
  (&this_chpl)->_file_internal_chpl = _file_internal_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2014 */
 void check_chpl(_ref_file this_chpl) {
  string local__str_literal_1890_chpl;
  chpl_bool call_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  local__str_literal_1890_chpl = _str_literal_1890;
  chpl_check_nil(this_chpl, INT64(2015), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
  call_tmp_chpl = is_c_nil(coerce_tmp_chpl);
  if (call_tmp_chpl) {
    halt(&local__str_literal_1890_chpl, INT64(2016), INT32(52));
  }
  return;
}

/* IO.chpl:2021 */
 void chpl___TILDE_file(_ref_file this_chpl) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  _ref_qio_file_ptr_t call_tmp_chpl = NULL;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  chpl_check_nil(this_chpl, INT64(2023), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
  qio_file_release(coerce_tmp_chpl);
  chpl_check_nil(this_chpl, INT64(2024), INT64(52));
  call_tmp_chpl = &((this_chpl)->_file_internal_chpl);
  *(call_tmp_chpl) = local_QIO_FILE_PTR_NULL_chpl;
  return;
}

/* IO.chpl:2048 */
 void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl) {
  iostyle local_style_chpl;
  iostyle type_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  _ref_iostyle _ref_tmp__chpl = NULL;
  chpl_check_nil(this_chpl, INT64(2049), INT64(52));
  check_chpl(this_chpl);
  local_style_chpl = type_tmp_chpl;
  chpl_check_nil(this_chpl, INT64(2054), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
  _ref_tmp__chpl = &local_style_chpl;
  qio_file_get_style(coerce_tmp_chpl, _ref_tmp__chpl);
  *(_retArg_chpl) = local_style_chpl;
  return;
}

/* IO.chpl:2147 */
 void getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, _ref_string _retArg_chpl) {
  string local__str_literal_1899_chpl;
  syserr _formal_tmp_error_chpl;
  string ret_chpl;
  string this_chpl2;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  c_string_copy tmp_chpl;
  c_string_copy ret_chpl2;
  c_string_copy tmp2_chpl;
  c_string_copy ret_chpl3;
  syserr call_tmp_chpl2;
  qio_file_ptr_t coerce_tmp_chpl;
  _ref_c_string_copy _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  syserr call_tmp_chpl5;
  qio_file_ptr_t coerce_tmp_chpl2;
  c_string call_tmp_chpl6;
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
  _ref_c_string_copy _ref_tmp__chpl3 = NULL;
  c_string call_tmp_chpl7;
  c_string call_tmp_chpl8;
  int64_t call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  string call_tmp_chpl11;
  string tmp_chpl2;
  int32_t call_tmp_chpl12;
  chpl_bool call_tmp_chpl13;
  c_string call_tmp_chpl14;
  string wrap_call_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  local__str_literal_1899_chpl = _str_literal_1899;
  chpl_check_nil(this_chpl, INT64(2148), INT64(52));
  check_chpl(this_chpl);
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  (&this_chpl2)->buff = nil;
  (&this_chpl2)->owned = UINT8(false);
  (&this_chpl2)->locale_id = INT32(0);
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl2)->buff = call_tmp_chpl;
  (&this_chpl2)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl2)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  ret_chpl = wrap_call_tmp_chpl;
  ret_chpl2 = NULL;
  tmp_chpl = ret_chpl2;
  ret_chpl3 = NULL;
  tmp2_chpl = ret_chpl3;
  chpl_check_nil(this_chpl, INT64(2153), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
  _ref_tmp__chpl = &tmp_chpl;
  call_tmp_chpl2 = qio_file_path(coerce_tmp_chpl, _ref_tmp__chpl);
  _formal_tmp_error_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = qio_err_iserr(call_tmp_chpl2);
  call_tmp_chpl4 = (call_tmp_chpl3 == INT32(0));
  if (call_tmp_chpl4) {
    chpl_check_nil(this_chpl, INT64(2155), INT64(52));
    coerce_tmp_chpl2 = (this_chpl)->_file_internal_chpl;
    call_tmp_chpl6 = ((c_string)(tmp_chpl));
    _ref_tmp__chpl2 = &tmp2_chpl;
    call_tmp_chpl5 = qio_shortest_path(coerce_tmp_chpl2, _ref_tmp__chpl2, call_tmp_chpl6);
    _formal_tmp_error_chpl = call_tmp_chpl5;
  }
  _ref_tmp__chpl3 = &tmp_chpl;
  call_tmp_chpl7 = ((c_string)(tmp_chpl));
  call_tmp_chpl8 = ((c_string)(NULL));
  call_tmp_chpl9 = string_compare(call_tmp_chpl7, call_tmp_chpl8);
  call_tmp_chpl10 = (call_tmp_chpl9 != INT64(0));
  if (call_tmp_chpl10) {
    chpl_rt_free_c_string(_ref_tmp__chpl3, INT64(2157), INT32(52));
  }
  call_tmp_chpl12 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl13 = (call_tmp_chpl12 != INT32(0));
  if (call_tmp_chpl13) {
    tmp_chpl2 = chpl__autoCopy5(&local__str_literal_1899_chpl);
  } else {
    call_tmp_chpl14 = ((c_string)(tmp2_chpl));
    ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
    string3(call_tmp_chpl14, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
    tmp_chpl2 = wrap_call_tmp_chpl2;
  }
  call_tmp_chpl11 = tmp_chpl2;
  _ref_tmp__chpl4 = &ret_chpl;
  chpl___ASSIGN_2(_ref_tmp__chpl4, &tmp_chpl2);
  _ref_tmp__chpl5 = &call_tmp_chpl11;
  chpl___TILDE_string(_ref_tmp__chpl5);
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2170 */
 void tryGetPath_chpl(_ref_file this_chpl, _ref_string _retArg_chpl) {
  string local__str_literal_1899_chpl;
  string ret_chpl;
  syserr err_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  string ret_chpl2;
  string this_chpl2;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string call_tmp_chpl3;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  local__str_literal_1899_chpl = _str_literal_1899;
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  err_chpl = type_tmp_chpl;
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  (&this_chpl2)->buff = nil;
  (&this_chpl2)->owned = UINT8(false);
  (&this_chpl2)->locale_id = INT32(0);
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl2)->buff = call_tmp_chpl2;
  (&this_chpl2)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl2)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  ret_chpl2 = wrap_call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
  _ref_tmp__chpl2 = &err_chpl;
  chpl_check_nil(this_chpl, INT64(2173), INT64(52));
  getPath_chpl(this_chpl, _ref_tmp__chpl2, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl3 = _autoCopy_tmp__chpl;
  _ref_tmp__chpl3 = &ret_chpl2;
  chpl___ASSIGN_2(_ref_tmp__chpl3, &_autoCopy_tmp__chpl);
  call_tmp_chpl4 = qio_err_iserr(err_chpl);
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
  if (call_tmp_chpl5) {
    ret_chpl = chpl__autoCopy5(&local__str_literal_1899_chpl);
    _ref_tmp__chpl4 = &call_tmp_chpl3;
    chpl___TILDE_string(_ref_tmp__chpl4);
    _ref_tmp__chpl5 = &ret_chpl2;
    chpl___TILDE_string(_ref_tmp__chpl5);
    goto _end_tryGetPath_chpl;
  } else {
    ret_chpl = ret_chpl2;
    _ref_tmp__chpl6 = &call_tmp_chpl3;
    chpl___TILDE_string(_ref_tmp__chpl6);
    goto _end_tryGetPath_chpl;
  }
  _end_tryGetPath_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2421 */
 void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  iostyle local_style_chpl;
  file_chpl ret_chpl;
  file_chpl this_chpl;
  chpl_localeID_t _autoCopy_tmp__chpl;
  locale call_tmp_chpl = NULL;
  qio_file_ptr_t default_arg_file_internal_chpl;
  file_chpl wrap_call_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t _autoCopy_tmp__chpl2;
  locale call_tmp_chpl3 = NULL;
  _ref_qio_file_ptr_t call_tmp_chpl4 = NULL;
  _cfile call_tmp_chpl5;
  syserr call_tmp_chpl6;
  int32_t call_tmp_chpl7;
  _ref_iostyle _ref_tmp__chpl = NULL;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_style_chpl = *(style_chpl);
  (&this_chpl)->home_chpl = nil;
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  (&this_chpl)->home_chpl = call_tmp_chpl;
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl);
  ret_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl2 = &((&ret_chpl)->home_chpl);
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2);
  *(call_tmp_chpl2) = call_tmp_chpl3;
  call_tmp_chpl4 = &((&ret_chpl)->_file_internal_chpl);
  call_tmp_chpl5 = chpl_cnullfile();
  call_tmp_chpl7 = ((int32_t)(INT64(0)));
  _ref_tmp__chpl = &local_style_chpl;
  call_tmp_chpl6 = qio_file_init(call_tmp_chpl4, call_tmp_chpl5, fd_chpl, hints_chpl, _ref_tmp__chpl, call_tmp_chpl7);
  *(error_chpl) = call_tmp_chpl6;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2433 */
 void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl) {
  string local__str_literal_1968_chpl;
  string local__str_literal_1899_chpl;
  syserr err_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  file_chpl call_tmp_chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  c_string_copy path_cs_chpl;
  c_string_copy ret_chpl;
  syserr type_tmp_chpl2;
  _ref_syserr _ref_tmp__chpl3 = NULL;
  syserr call_tmp_chpl5;
  syserr call_tmp_chpl6;
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
  string path_chpl;
  string tmp_chpl;
  int32_t call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  c_string call_tmp_chpl9;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  local__str_literal_1968_chpl = _str_literal_1968;
  local__str_literal_1899_chpl = _str_literal_1899;
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  err_chpl = type_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
  _ref_tmp__chpl2 = &err_chpl;
  openfd_chpl(fd_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
  if (call_tmp_chpl4) {
    ret_chpl = NULL;
    path_cs_chpl = ret_chpl;
    _ref_tmp__chpl3 = &type_tmp_chpl2;
    call_tmp_chpl5 = qio_int_to_err(INT32(0));
    *(_ref_tmp__chpl3) = call_tmp_chpl5;
    _ref_tmp__chpl4 = &path_cs_chpl;
    call_tmp_chpl6 = qio_file_path_for_fd(fd_chpl, _ref_tmp__chpl4);
    call_tmp_chpl7 = qio_err_iserr(call_tmp_chpl6);
    call_tmp_chpl8 = (call_tmp_chpl7 != INT32(0));
    if (call_tmp_chpl8) {
      tmp_chpl = chpl__autoCopy5(&local__str_literal_1899_chpl);
    } else {
      call_tmp_chpl9 = ((c_string)(path_cs_chpl));
      ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl;
      string3(call_tmp_chpl9, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
      tmp_chpl = wrap_call_tmp_chpl;
    }
    path_chpl = tmp_chpl;
    ioerror_chpl(err_chpl, &local__str_literal_1968_chpl, &tmp_chpl);
    _ref_tmp__chpl5 = &path_chpl;
    chpl___TILDE_string(_ref_tmp__chpl5);
  }
  *(_retArg_chpl) = call_tmp_chpl2;
  return;
}

/* IO.chpl:2476 */
 void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  iostyle local_style_chpl;
  file_chpl ret_chpl;
  file_chpl this_chpl;
  chpl_localeID_t _autoCopy_tmp__chpl;
  locale call_tmp_chpl = NULL;
  qio_file_ptr_t default_arg_file_internal_chpl;
  file_chpl wrap_call_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t _autoCopy_tmp__chpl2;
  locale call_tmp_chpl3 = NULL;
  _ref_qio_file_ptr_t call_tmp_chpl4 = NULL;
  syserr call_tmp_chpl5;
  int32_t call_tmp_chpl6;
  int32_t call_tmp_chpl7;
  _ref_iostyle _ref_tmp__chpl = NULL;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_style_chpl = *(style_chpl);
  (&this_chpl)->home_chpl = nil;
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  (&this_chpl)->home_chpl = call_tmp_chpl;
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl);
  ret_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl2 = &((&ret_chpl)->home_chpl);
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2);
  *(call_tmp_chpl2) = call_tmp_chpl3;
  call_tmp_chpl4 = &((&ret_chpl)->_file_internal_chpl);
  call_tmp_chpl6 = ((int32_t)(INT64(-1)));
  call_tmp_chpl7 = ((int32_t)(INT64(1)));
  _ref_tmp__chpl = &local_style_chpl;
  call_tmp_chpl5 = qio_file_init(call_tmp_chpl4, fp_chpl, call_tmp_chpl6, hints_chpl, _ref_tmp__chpl, call_tmp_chpl7);
  *(error_chpl) = call_tmp_chpl5;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2488 */
 void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl) {
  string local__str_literal_1970_chpl;
  string local__str_literal_1899_chpl;
  syserr err_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  file_chpl call_tmp_chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  c_string_copy path_cs_chpl;
  c_string_copy ret_chpl;
  syserr type_tmp_chpl2;
  _ref_syserr _ref_tmp__chpl3 = NULL;
  syserr call_tmp_chpl5;
  syserr call_tmp_chpl6;
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
  string path_chpl;
  string tmp_chpl;
  int32_t call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  c_string call_tmp_chpl9;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  local__str_literal_1970_chpl = _str_literal_1970;
  local__str_literal_1899_chpl = _str_literal_1899;
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  err_chpl = type_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
  _ref_tmp__chpl2 = &err_chpl;
  openfp_chpl(fp_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
  if (call_tmp_chpl4) {
    ret_chpl = NULL;
    path_cs_chpl = ret_chpl;
    _ref_tmp__chpl3 = &type_tmp_chpl2;
    call_tmp_chpl5 = qio_int_to_err(INT32(0));
    *(_ref_tmp__chpl3) = call_tmp_chpl5;
    _ref_tmp__chpl4 = &path_cs_chpl;
    call_tmp_chpl6 = qio_file_path_for_fp(fp_chpl, _ref_tmp__chpl4);
    call_tmp_chpl7 = qio_err_iserr(call_tmp_chpl6);
    call_tmp_chpl8 = (call_tmp_chpl7 != INT32(0));
    if (call_tmp_chpl8) {
      tmp_chpl = chpl__autoCopy5(&local__str_literal_1899_chpl);
    } else {
      call_tmp_chpl9 = ((c_string)(path_cs_chpl));
      ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl;
      string3(call_tmp_chpl9, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
      tmp_chpl = wrap_call_tmp_chpl;
    }
    path_chpl = tmp_chpl;
    ioerror_chpl(err_chpl, &local__str_literal_1970_chpl, &tmp_chpl);
    _ref_tmp__chpl5 = &path_chpl;
    chpl___TILDE_string(_ref_tmp__chpl5);
  }
  *(_retArg_chpl) = call_tmp_chpl2;
  return;
}

/* IO.chpl:2609 */
 void _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, _ref_channel_F_dynamic_T _retArg_chpl) {
  channel_F_dynamic_T_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->home_chpl = home_chpl;
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2609 */
 void _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, _ref_channel_T_dynamic_T _retArg_chpl) {
  channel_T_dynamic_T_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->home_chpl = home_chpl;
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2642 */
 void chpl___ASSIGN_4(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl2;
  _ref_locale call_tmp_chpl = NULL;
  locale coerce_tmp_chpl3 = NULL;
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
  qio_channel_ptr_t coerce_tmp_chpl4;
  coerce_tmp_chpl = (x_chpl)->_channel_internal_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  chpl_check_nil(ret_chpl, INT64(2649), INT64(52));
  coerce_tmp_chpl2 = (ret_chpl)->_channel_internal_chpl;
  qio_channel_release(coerce_tmp_chpl2);
  chpl_check_nil(ret_chpl, INT64(2652), INT64(52));
  call_tmp_chpl = &((ret_chpl)->home_chpl);
  coerce_tmp_chpl3 = (x_chpl)->home_chpl;
  *(call_tmp_chpl) = coerce_tmp_chpl3;
  chpl_check_nil(ret_chpl, INT64(2653), INT64(52));
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
  coerce_tmp_chpl4 = (x_chpl)->_channel_internal_chpl;
  *(call_tmp_chpl2) = coerce_tmp_chpl4;
  return;
}

/* IO.chpl:2642 */
 void chpl___ASSIGN_3(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl2;
  _ref_locale call_tmp_chpl = NULL;
  locale coerce_tmp_chpl3 = NULL;
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
  qio_channel_ptr_t coerce_tmp_chpl4;
  coerce_tmp_chpl = (x_chpl)->_channel_internal_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  chpl_check_nil(ret_chpl, INT64(2649), INT64(52));
  coerce_tmp_chpl2 = (ret_chpl)->_channel_internal_chpl;
  qio_channel_release(coerce_tmp_chpl2);
  chpl_check_nil(ret_chpl, INT64(2652), INT64(52));
  call_tmp_chpl = &((ret_chpl)->home_chpl);
  coerce_tmp_chpl3 = (x_chpl)->home_chpl;
  *(call_tmp_chpl) = coerce_tmp_chpl3;
  chpl_check_nil(ret_chpl, INT64(2653), INT64(52));
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
  coerce_tmp_chpl4 = (x_chpl)->_channel_internal_chpl;
  *(call_tmp_chpl2) = coerce_tmp_chpl4;
  return;
}

/* IO.chpl:2657 */
 void channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_F_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  channel_F_dynamic_T_chpl this_chpl;
  channel_F_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_locale call_tmp_chpl2 = NULL;
  locale coerce_tmp_chpl = NULL;
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
  syserr call_tmp_chpl4;
  qio_file_ptr_t coerce_tmp_chpl2;
  int32_t call_tmp_chpl5;
  int32_t call_tmp_chpl6;
  _ref_iostyle _ref_tmp__chpl = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  (&this_chpl2)->home_chpl = nil;
  call_tmp_chpl = ((locale)(nil));
  (&this_chpl2)->home_chpl = call_tmp_chpl;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  this_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  *(call_tmp_chpl2) = coerce_tmp_chpl;
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
  coerce_tmp_chpl2 = (f_chpl)->_file_internal_chpl;
  call_tmp_chpl5 = ((int32_t)(UINT8(true)));
  call_tmp_chpl6 = ((int32_t)(UINT8(false)));
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, coerce_tmp_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
  *(error_chpl) = call_tmp_chpl4;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2657 */
 void channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_T_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  channel_T_dynamic_T_chpl this_chpl;
  channel_T_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_locale call_tmp_chpl2 = NULL;
  locale coerce_tmp_chpl = NULL;
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
  syserr call_tmp_chpl4;
  qio_file_ptr_t coerce_tmp_chpl2;
  int32_t call_tmp_chpl5;
  int32_t call_tmp_chpl6;
  _ref_iostyle _ref_tmp__chpl = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  (&this_chpl2)->home_chpl = nil;
  call_tmp_chpl = ((locale)(nil));
  (&this_chpl2)->home_chpl = call_tmp_chpl;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  this_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  *(call_tmp_chpl2) = coerce_tmp_chpl;
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
  coerce_tmp_chpl2 = (f_chpl)->_file_internal_chpl;
  call_tmp_chpl5 = ((int32_t)(UINT8(false)));
  call_tmp_chpl6 = ((int32_t)(UINT8(true)));
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, coerce_tmp_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
  *(error_chpl) = call_tmp_chpl4;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2671 */
 void chpl___TILDE_channel2(_ref_channel_F_dynamic_T this_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_check_nil(this_chpl, INT64(2673), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_check_nil(this_chpl, INT64(2674), INT64(52));
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
  return;
}

/* IO.chpl:2671 */
 void chpl___TILDE_channel(_ref_channel_T_dynamic_T this_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_check_nil(this_chpl, INT64(2673), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_check_nil(this_chpl, INT64(2674), INT64(52));
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
  return;
}

/* IO.chpl:2715 */
 void _construct_ioNewline_chpl(chpl_bool skipWhitespaceOnly_chpl, ioNewline_chpl* const meme_chpl, _ref_ioNewline _retArg_chpl) {
  ioNewline_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->skipWhitespaceOnly_chpl = skipWhitespaceOnly_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* IO.chpl:2789 */
 void _ch_ioerror_chpl(_ref_channel_T_dynamic_T this_chpl, syserr error_chpl, string* const msg_chpl) {
  string local__str_literal_1899_chpl;
  string path_chpl;
  string type_tmp_chpl;
  string this_chpl2;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  int64_t offset_chpl;
  c_string tmp_path_chpl;
  int64_t tmp_offset_chpl;
  syserr type_tmp_chpl2;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  syserr call_tmp_chpl2;
  syserr call_tmp_chpl3;
  int32_t call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  _ref_c_string _ref_tmp__chpl3 = NULL;
  _ref_int64_t _ref_tmp__chpl4 = NULL;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  string call_tmp_chpl7;
  string wrap_call_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl7 = NULL;
  local__str_literal_1899_chpl = _str_literal_1899;
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  (&this_chpl2)->buff = nil;
  (&this_chpl2)->owned = UINT8(false);
  (&this_chpl2)->locale_id = INT32(0);
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl2)->buff = call_tmp_chpl;
  (&this_chpl2)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl2)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = wrap_call_tmp_chpl;
  _ref_tmp__chpl = &type_tmp_chpl;
  chpl___ASSIGN_2(_ref_tmp__chpl, &local__str_literal_1899_chpl);
  path_chpl = type_tmp_chpl;
  offset_chpl = INT64(-1);
  tmp_path_chpl = "";
  tmp_offset_chpl = INT64(0);
  _ref_tmp__chpl2 = &type_tmp_chpl2;
  call_tmp_chpl2 = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl2) = call_tmp_chpl2;
  call_tmp_chpl4 = ((int32_t)(UINT8(true)));
  chpl_check_nil(this_chpl, INT64(2796), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
  _ref_tmp__chpl3 = &tmp_path_chpl;
  _ref_tmp__chpl4 = &tmp_offset_chpl;
  call_tmp_chpl3 = qio_channel_path_offset(call_tmp_chpl4, coerce_tmp_chpl, _ref_tmp__chpl3, _ref_tmp__chpl4);
  call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl3);
  call_tmp_chpl6 = (call_tmp_chpl5 == INT32(0));
  if (call_tmp_chpl6) {
    ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
    string3(tmp_path_chpl, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl7 = wrap_call_tmp_chpl2;
    _ref_tmp__chpl5 = &path_chpl;
    chpl___ASSIGN_2(_ref_tmp__chpl5, &wrap_call_tmp_chpl2);
    offset_chpl = tmp_offset_chpl;
    _ref_tmp__chpl6 = &call_tmp_chpl7;
    chpl___TILDE_string(_ref_tmp__chpl6);
  }
  ioerror_chpl2(error_chpl, msg_chpl, &path_chpl, offset_chpl);
  _ref_tmp__chpl7 = &path_chpl;
  chpl___TILDE_string(_ref_tmp__chpl7);
  return;
}

/* IO.chpl:3201 */
 void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_F_dynamic_T_chpl ret_chpl;
  channel_F_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl2;
  file_chpl coerce_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl2 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl3 = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_check_nil(this_chpl, INT64(3202), INT64(52));
  check_chpl(this_chpl);
  (&this_chpl2)->home_chpl = nil;
  call_tmp_chpl = ((locale)(nil));
  (&this_chpl2)->home_chpl = call_tmp_chpl;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  ret_chpl = wrap_call_tmp_chpl;
  coerce_tmp_chpl = *(this_chpl);
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl2;
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
  channel_chpl2(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, ret_to_arg_ref_tmp__chpl2);
  _ref_tmp__chpl2 = &ret_chpl;
  chpl___ASSIGN_4(_ref_tmp__chpl2, &call_tmp_chpl2);
  _ref_tmp__chpl3 = &call_tmp_chpl2;
  chpl___TILDE_channel2(_ref_tmp__chpl3);
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3213 */
 void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl) {
  string local__str_literal_2015_chpl;
  syserr err_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  channel_F_dynamic_T_chpl call_tmp_chpl2;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  string call_tmp_chpl5;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  local__str_literal_2015_chpl = _str_literal_2015;
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  err_chpl = type_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
  _ref_tmp__chpl2 = &err_chpl;
  chpl_check_nil(this_chpl, INT64(3215), INT64(52));
  reader_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
  if (call_tmp_chpl4) {
    ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
    chpl_check_nil(this_chpl, INT64(3216), INT64(52));
    tryGetPath_chpl(this_chpl, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl5 = _autoCopy_tmp__chpl;
    ioerror_chpl(err_chpl, &local__str_literal_2015_chpl, &_autoCopy_tmp__chpl);
    _ref_tmp__chpl3 = &call_tmp_chpl5;
    chpl___TILDE_string(_ref_tmp__chpl3);
  }
  *(_retArg_chpl) = call_tmp_chpl2;
  return;
}

/* IO.chpl:3301 */
 void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_T_dynamic_T_chpl ret_chpl;
  channel_T_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl2;
  file_chpl coerce_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl2 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl3 = NULL;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_check_nil(this_chpl, INT64(3302), INT64(52));
  check_chpl(this_chpl);
  (&this_chpl2)->home_chpl = nil;
  call_tmp_chpl = ((locale)(nil));
  (&this_chpl2)->home_chpl = call_tmp_chpl;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  ret_chpl = wrap_call_tmp_chpl;
  coerce_tmp_chpl = *(this_chpl);
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl2;
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
  channel_chpl(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, ret_to_arg_ref_tmp__chpl2);
  _ref_tmp__chpl2 = &ret_chpl;
  chpl___ASSIGN_3(_ref_tmp__chpl2, &call_tmp_chpl2);
  _ref_tmp__chpl3 = &call_tmp_chpl2;
  chpl___TILDE_channel(_ref_tmp__chpl3);
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3313 */
 void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl) {
  string local__str_literal_2022_chpl;
  syserr err_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  channel_T_dynamic_T_chpl call_tmp_chpl2;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  string call_tmp_chpl5;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  local__str_literal_2022_chpl = _str_literal_2022;
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  err_chpl = type_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
  _ref_tmp__chpl2 = &err_chpl;
  chpl_check_nil(this_chpl, INT64(3316), INT64(52));
  writer_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
  if (call_tmp_chpl4) {
    ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
    chpl_check_nil(this_chpl, INT64(3318), INT64(52));
    tryGetPath_chpl(this_chpl, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl5 = _autoCopy_tmp__chpl;
    ioerror_chpl(err_chpl, &local__str_literal_2022_chpl, &_autoCopy_tmp__chpl);
    _ref_tmp__chpl3 = &call_tmp_chpl5;
    chpl___TILDE_string(_ref_tmp__chpl3);
  }
  *(_retArg_chpl) = call_tmp_chpl2;
  return;
}

/* IO.chpl:3392 */
 syserr _write_text_internal_chpl(qio_channel_ptr_t _channel_internal_chpl, string* const x_chpl) {
  string local__str_literal_306_chpl;
  string local_x_chpl;
  string call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  int32_t coerce_tmp_chpl;
  chpl_bool call_tmp_chpl2;
  c_ptr_uint8_t coerce_tmp_chpl2 = NULL;
  c_string call_tmp_chpl3;
  int64_t ret_chpl;
  syserr call_tmp_chpl4;
  int32_t call_tmp_chpl5;
  _ref_string _ref_tmp__chpl = NULL;
  local__str_literal_306_chpl = _str_literal_306;
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl;
  string2(x_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
  local_x_chpl = call_tmp_chpl;
  coerce_tmp_chpl = (&local_x_chpl)->locale_id;
  call_tmp_chpl2 = (coerce_tmp_chpl != chpl_nodeID);
  if (call_tmp_chpl2) {
    halt(&local__str_literal_306_chpl, INT64(3416), INT32(52));
  }
  coerce_tmp_chpl2 = (&local_x_chpl)->buff;
  call_tmp_chpl3 = ((c_string)(coerce_tmp_chpl2));
  ret_chpl = (&local_x_chpl)->len;
  call_tmp_chpl5 = ((int32_t)(UINT8(false)));
  call_tmp_chpl4 = qio_channel_print_string(call_tmp_chpl5, _channel_internal_chpl, call_tmp_chpl3, ret_chpl);
  _ref_tmp__chpl = &local_x_chpl;
  chpl___TILDE_string(_ref_tmp__chpl);
  return call_tmp_chpl4;
}

/* IO.chpl:3928 */
 void stringify_chpl(string* const _e0_args_chpl, int64_t _e1_args_chpl, _ref_string _retArg_chpl) {
  string local__str_literal_2058_chpl;
  string args_x1_chpl;
  string str_chpl;
  _ref_string call_tmp_chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  string call_tmp_chpl2;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  local__str_literal_2058_chpl = _str_literal_2058;
  args_x1_chpl = *(_e0_args_chpl);
  str_chpl = chpl__autoCopy5(&local__str_literal_2058_chpl);
  call_tmp_chpl = &args_x1_chpl;
  _ref_tmp__chpl = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl, call_tmp_chpl);
  ret_to_arg_ref_tmp__chpl = &_autoCopy_tmp__chpl;
  _cast3(_e1_args_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = _autoCopy_tmp__chpl;
  _ref_tmp__chpl2 = &str_chpl;
  _ref_tmp__chpl3 = &call_tmp_chpl2;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, _ref_tmp__chpl3);
  _ref_tmp__chpl4 = &call_tmp_chpl2;
  chpl___TILDE_string(_ref_tmp__chpl4);
  *(_retArg_chpl) = str_chpl;
  return;
}

/* IO.chpl:3995 */
 void _args_to_proto_chpl(string* const _e0_args_chpl, ioNewline_chpl* const _e1_args_chpl, string* const preArg_chpl, _ref_string _retArg_chpl) {
  string local__str_literal_2713_chpl;
  string local__str_literal_2711_chpl;
  string local__str_literal_1548_chpl;
  string err_args_chpl;
  string this_chpl;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string wrap_call_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string name_chpl;
  string this_chpl2;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl2;
  string wrap_call_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  string coerce_tmp_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  string call_tmp_chpl3;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl4;
  string _autoCopy_tmp__chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  string call_tmp_chpl5;
  string _autoCopy_tmp__chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl7 = NULL;
  _ref_string _ref_tmp__chpl8 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  string name_chpl2;
  string this_chpl3;
  c_ptr_uint8_t call_tmp_chpl6 = NULL;
  int32_t default_arglocale_id_chpl3;
  string wrap_call_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  string coerce_tmp_chpl2;
  _ref_string _ref_tmp__chpl10 = NULL;
  string call_tmp_chpl7;
  string _autoCopy_tmp__chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  string call_tmp_chpl8;
  string _autoCopy_tmp__chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  string call_tmp_chpl9;
  string _autoCopy_tmp__chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl11 = NULL;
  _ref_string _ref_tmp__chpl12 = NULL;
  _ref_string _ref_tmp__chpl13 = NULL;
  _ref_string _ref_tmp__chpl14 = NULL;
  _ref_string _ref_tmp__chpl15 = NULL;
  _ref_string _ref_tmp__chpl16 = NULL;
  string const_tmp_chpl;
  _ref_string _ref_tmp__chpl17 = NULL;
  local__str_literal_2713_chpl = _str_literal_2713;
  local__str_literal_2711_chpl = _str_literal_2711;
  local__str_literal_1548_chpl = _str_literal_1548;
  (&this_chpl)->len = INT64(0);
  (&this_chpl)->_size = INT64(0);
  (&this_chpl)->buff = nil;
  (&this_chpl)->owned = UINT8(false);
  (&this_chpl)->locale_id = INT32(0);
  (&this_chpl)->len = INT64(0);
  (&this_chpl)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl)->buff = call_tmp_chpl;
  (&this_chpl)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl);
  err_args_chpl = wrap_call_tmp_chpl;
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  (&this_chpl2)->buff = nil;
  (&this_chpl2)->owned = UINT8(false);
  (&this_chpl2)->locale_id = INT32(0);
  (&this_chpl2)->len = INT64(0);
  (&this_chpl2)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl2)->buff = call_tmp_chpl2;
  (&this_chpl2)->owned = UINT8(true);
  default_arglocale_id_chpl2 = chpl_nodeID;
  (&this_chpl2)->locale_id = default_arglocale_id_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl2, &this_chpl2, ret_to_arg_ref_tmp__chpl2);
  name_chpl = wrap_call_tmp_chpl2;
  coerce_tmp_chpl = *(_arg_to_proto_names_chpl + INT64(0));
  coerce_tmp_chpl = chpl__autoCopy5(&coerce_tmp_chpl);
  _ref_tmp__chpl = &name_chpl;
  chpl___ASSIGN_2(_ref_tmp__chpl, &coerce_tmp_chpl);
  ret_to_arg_ref_tmp__chpl3 = &_autoCopy_tmp__chpl;
  chpl___PLUS_(preArg_chpl, &name_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl3 = _autoCopy_tmp__chpl;
  ret_to_arg_ref_tmp__chpl4 = &_autoCopy_tmp__chpl2;
  chpl___PLUS_(&_autoCopy_tmp__chpl, &local__str_literal_1548_chpl, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl4 = _autoCopy_tmp__chpl2;
  ret_to_arg_ref_tmp__chpl5 = &_autoCopy_tmp__chpl3;
  chpl___PLUS_(&_autoCopy_tmp__chpl2, &local__str_literal_2711_chpl, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl5 = _autoCopy_tmp__chpl3;
  _ref_tmp__chpl2 = &err_args_chpl;
  _ref_tmp__chpl3 = &call_tmp_chpl5;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, _ref_tmp__chpl3);
  _ref_tmp__chpl4 = &err_args_chpl;
  _ref_tmp__chpl5 = &_str_literal_537;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl4, _ref_tmp__chpl5);
  _ref_tmp__chpl6 = &name_chpl;
  chpl___TILDE_string(_ref_tmp__chpl6);
  _ref_tmp__chpl7 = &call_tmp_chpl3;
  chpl___TILDE_string(_ref_tmp__chpl7);
  _ref_tmp__chpl8 = &call_tmp_chpl4;
  chpl___TILDE_string(_ref_tmp__chpl8);
  _ref_tmp__chpl9 = &call_tmp_chpl5;
  chpl___TILDE_string(_ref_tmp__chpl9);
  (&this_chpl3)->len = INT64(0);
  (&this_chpl3)->_size = INT64(0);
  (&this_chpl3)->buff = nil;
  (&this_chpl3)->owned = UINT8(false);
  (&this_chpl3)->locale_id = INT32(0);
  (&this_chpl3)->len = INT64(0);
  (&this_chpl3)->_size = INT64(0);
  call_tmp_chpl6 = ((c_ptr_uint8_t)(nil));
  (&this_chpl3)->buff = call_tmp_chpl6;
  (&this_chpl3)->owned = UINT8(true);
  default_arglocale_id_chpl3 = chpl_nodeID;
  (&this_chpl3)->locale_id = default_arglocale_id_chpl3;
  ret_to_arg_ref_tmp__chpl6 = &wrap_call_tmp_chpl3;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl6, UINT8(true), default_arglocale_id_chpl3, &this_chpl3, ret_to_arg_ref_tmp__chpl6);
  name_chpl2 = wrap_call_tmp_chpl3;
  coerce_tmp_chpl2 = *(_arg_to_proto_names_chpl + INT64(1));
  coerce_tmp_chpl2 = chpl__autoCopy5(&coerce_tmp_chpl2);
  _ref_tmp__chpl10 = &name_chpl2;
  chpl___ASSIGN_2(_ref_tmp__chpl10, &coerce_tmp_chpl2);
  ret_to_arg_ref_tmp__chpl7 = &_autoCopy_tmp__chpl4;
  chpl___PLUS_(preArg_chpl, &name_chpl2, ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl7 = _autoCopy_tmp__chpl4;
  ret_to_arg_ref_tmp__chpl8 = &_autoCopy_tmp__chpl5;
  chpl___PLUS_(&_autoCopy_tmp__chpl4, &local__str_literal_1548_chpl, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl8 = _autoCopy_tmp__chpl5;
  ret_to_arg_ref_tmp__chpl9 = &_autoCopy_tmp__chpl6;
  chpl___PLUS_(&_autoCopy_tmp__chpl5, &local__str_literal_2713_chpl, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl9 = _autoCopy_tmp__chpl6;
  _ref_tmp__chpl11 = &err_args_chpl;
  _ref_tmp__chpl12 = &call_tmp_chpl9;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl11, _ref_tmp__chpl12);
  _ref_tmp__chpl13 = &name_chpl2;
  chpl___TILDE_string(_ref_tmp__chpl13);
  _ref_tmp__chpl14 = &call_tmp_chpl7;
  chpl___TILDE_string(_ref_tmp__chpl14);
  _ref_tmp__chpl15 = &call_tmp_chpl8;
  chpl___TILDE_string(_ref_tmp__chpl15);
  _ref_tmp__chpl16 = &call_tmp_chpl9;
  chpl___TILDE_string(_ref_tmp__chpl16);
  const_tmp_chpl = chpl__initCopy3(&err_args_chpl);
  _ref_tmp__chpl17 = &err_args_chpl;
  chpl___TILDE_string(_ref_tmp__chpl17);
  *(_retArg_chpl) = const_tmp_chpl;
  return;
}

/* IO.chpl:4576 */
 chpl_bool writeln_chpl(_ref_channel_T_dynamic_T this_chpl, string* const _e0_args_chpl) {
  string local__str_literal_387_chpl;
  string local__str_literal_2109_chpl;
  string local__str_literal_2111_chpl;
  string local__str_literal_306_chpl;
  string local__str_literal_1988_chpl;
  ioNewline_chpl this_chpl2;
  ioNewline_chpl wrap_call_tmp_chpl;
  _ref_ioNewline ret_to_arg_ref_tmp__chpl = NULL;
  chpl_bool ret_chpl;
  syserr e_chpl;
  syserr type_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  syserr call_tmp_chpl;
  _ref_syserr _ref_tmp__chpl2 = NULL;
  syserr _formal_tmp_error_chpl;
  _ref_syserr _ref_tmp__chpl3 = NULL;
  syserr call_tmp_chpl2;
  syserr err_chpl;
  syserr type_tmp_chpl2;
  _ref_syserr _ref_tmp__chpl4 = NULL;
  syserr call_tmp_chpl3;
  _ref_syserr _ref_tmp__chpl5 = NULL;
  syserr _formal_tmp_error_chpl2;
  _ref_syserr _ref_tmp__chpl6 = NULL;
  syserr call_tmp_chpl4;
  syserr call_tmp_chpl5;
  qio_channel_ptr_t coerce_tmp_chpl;
  int32_t call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  int32_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  qio_channel_ptr_t coerce_tmp_chpl2;
  syserr e_chpl2;
  syserr type_tmp_chpl3;
  _ref_syserr _ref_tmp__chpl7 = NULL;
  syserr call_tmp_chpl10;
  uint8_t call_tmp_chpl11;
  uint8_t call_tmp_chpl12;
  chpl_bool call_tmp_chpl13;
  int16_t call_tmp_chpl14;
  int16_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  string local_x_chpl;
  string call_tmp_chpl17;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  int64_t call_tmp_chpl18;
  int32_t coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl19;
  c_ptr_uint8_t coerce_tmp_chpl4 = NULL;
  c_string call_tmp_chpl20;
  int64_t ret_chpl2;
  syserr call_tmp_chpl21;
  int32_t call_tmp_chpl22;
  int32_t call_tmp_chpl23;
  _ref_string _ref_tmp__chpl8 = NULL;
  int16_t call_tmp_chpl24;
  int16_t call_tmp_chpl25;
  chpl_bool call_tmp_chpl26;
  string local_x_chpl2;
  string call_tmp_chpl27;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  int64_t call_tmp_chpl28;
  int32_t coerce_tmp_chpl5;
  chpl_bool call_tmp_chpl29;
  c_ptr_uint8_t coerce_tmp_chpl6 = NULL;
  c_string call_tmp_chpl30;
  int64_t ret_chpl3;
  syserr call_tmp_chpl31;
  int32_t call_tmp_chpl32;
  int32_t call_tmp_chpl33;
  _ref_string _ref_tmp__chpl9 = NULL;
  string local_x_chpl3;
  string call_tmp_chpl34;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  int64_t call_tmp_chpl35;
  int32_t coerce_tmp_chpl7;
  chpl_bool call_tmp_chpl36;
  c_ptr_uint8_t coerce_tmp_chpl8 = NULL;
  c_string call_tmp_chpl37;
  int64_t ret_chpl4;
  syserr call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  _ref_string _ref_tmp__chpl10 = NULL;
  syserr call_tmp_chpl41;
  int32_t call_tmp_chpl42;
  chpl_bool call_tmp_chpl43;
  qio_channel_ptr_t coerce_tmp_chpl9;
  syserr type_tmp_chpl4;
  _ref_syserr _ref_tmp__chpl11 = NULL;
  syserr call_tmp_chpl44;
  syserr call_tmp_chpl45;
  int32_t call_tmp_chpl46;
  qio_channel_ptr_t coerce_tmp_chpl10;
  int32_t call_tmp_chpl47;
  chpl_bool call_tmp_chpl48;
  string call_tmp_chpl49;
  string _autoCopy_tmp__chpl;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  string call_tmp_chpl50;
  string _autoCopy_tmp__chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  string call_tmp_chpl51;
  string _autoCopy_tmp__chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  _ref_string _ref_tmp__chpl12 = NULL;
  _ref_string _ref_tmp__chpl13 = NULL;
  _ref_string _ref_tmp__chpl14 = NULL;
  local__str_literal_387_chpl = _str_literal_387;
  local__str_literal_2109_chpl = _str_literal_2109;
  local__str_literal_2111_chpl = _str_literal_2111;
  local__str_literal_306_chpl = _str_literal_306;
  local__str_literal_1988_chpl = _str_literal_1988;
  (&this_chpl2)->skipWhitespaceOnly_chpl = UINT8(false);
  (&this_chpl2)->skipWhitespaceOnly_chpl = UINT8(false);
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_ioNewline_chpl(UINT8(false), &this_chpl2, ret_to_arg_ref_tmp__chpl);
  _ref_tmp__chpl = &type_tmp_chpl;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl) = call_tmp_chpl;
  e_chpl = type_tmp_chpl;
  _ref_tmp__chpl2 = &e_chpl;
  _ref_tmp__chpl3 = &_formal_tmp_error_chpl;
  call_tmp_chpl2 = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl3) = call_tmp_chpl2;
  _ref_tmp__chpl4 = &type_tmp_chpl2;
  call_tmp_chpl3 = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl4) = call_tmp_chpl3;
  err_chpl = type_tmp_chpl2;
  _ref_tmp__chpl5 = &err_chpl;
  _ref_tmp__chpl6 = &_formal_tmp_error_chpl2;
  call_tmp_chpl4 = qio_int_to_err(INT32(0));
  *(_ref_tmp__chpl6) = call_tmp_chpl4;
  chpl_check_nil(this_chpl, INT64(4577), INT64(52));
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
  call_tmp_chpl5 = qio_channel_lock(coerce_tmp_chpl);
  _formal_tmp_error_chpl2 = call_tmp_chpl5;
  *(_ref_tmp__chpl5) = call_tmp_chpl5;
  call_tmp_chpl6 = qio_err_iserr(err_chpl);
  call_tmp_chpl7 = (call_tmp_chpl6 != INT32(0));
  if (call_tmp_chpl7) {
    chpl_check_nil(this_chpl, INT64(4577), INT64(52));
    _ch_ioerror_chpl(this_chpl, err_chpl, &local__str_literal_1988_chpl);
  }
  call_tmp_chpl8 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl9 = (call_tmp_chpl8 == INT32(0));
  if (call_tmp_chpl9) {
    chpl_check_nil(this_chpl, INT64(4577), INT64(52));
    coerce_tmp_chpl2 = (this_chpl)->_channel_internal_chpl;
    _ref_tmp__chpl7 = &type_tmp_chpl3;
    call_tmp_chpl10 = qio_int_to_err(INT32(0));
    *(_ref_tmp__chpl7) = call_tmp_chpl10;
    call_tmp_chpl11 = qio_channel_binary(coerce_tmp_chpl2);
    call_tmp_chpl12 = qio_channel_byteorder(coerce_tmp_chpl2);
    call_tmp_chpl13 = (call_tmp_chpl11 != UINT8(0));
    if (call_tmp_chpl13) {
      call_tmp_chpl14 = ((int16_t)(call_tmp_chpl12));
      call_tmp_chpl15 = ((int16_t)(iokind_chpl_big_chpl));
      call_tmp_chpl16 = (call_tmp_chpl14 == call_tmp_chpl15);
      if (call_tmp_chpl16) {
        ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl17;
        string2(_e0_args_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl2);
        local_x_chpl = call_tmp_chpl17;
        call_tmp_chpl18 = qio_channel_str_style(coerce_tmp_chpl2);
        coerce_tmp_chpl3 = (&local_x_chpl)->locale_id;
        call_tmp_chpl19 = (coerce_tmp_chpl3 != chpl_nodeID);
        if (call_tmp_chpl19) {
          halt(&local__str_literal_306_chpl, INT64(4577), INT32(52));
        }
        coerce_tmp_chpl4 = (&local_x_chpl)->buff;
        call_tmp_chpl20 = ((c_string)(coerce_tmp_chpl4));
        ret_chpl2 = (&local_x_chpl)->len;
        call_tmp_chpl22 = ((int32_t)(UINT8(false)));
        call_tmp_chpl23 = ((int32_t)(iokind_chpl_big_chpl));
        call_tmp_chpl21 = qio_channel_write_string(call_tmp_chpl22, call_tmp_chpl23, call_tmp_chpl18, coerce_tmp_chpl2, call_tmp_chpl20, ret_chpl2);
        _ref_tmp__chpl8 = &local_x_chpl;
        chpl___TILDE_string(_ref_tmp__chpl8);
        e_chpl2 = call_tmp_chpl21;
      } else {
        call_tmp_chpl24 = ((int16_t)(call_tmp_chpl12));
        call_tmp_chpl25 = ((int16_t)(iokind_chpl_little_chpl));
        call_tmp_chpl26 = (call_tmp_chpl24 == call_tmp_chpl25);
        if (call_tmp_chpl26) {
          ret_to_arg_ref_tmp__chpl3 = &call_tmp_chpl27;
          string2(_e0_args_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl3);
          local_x_chpl2 = call_tmp_chpl27;
          call_tmp_chpl28 = qio_channel_str_style(coerce_tmp_chpl2);
          coerce_tmp_chpl5 = (&local_x_chpl2)->locale_id;
          call_tmp_chpl29 = (coerce_tmp_chpl5 != chpl_nodeID);
          if (call_tmp_chpl29) {
            halt(&local__str_literal_306_chpl, INT64(4577), INT32(52));
          }
          coerce_tmp_chpl6 = (&local_x_chpl2)->buff;
          call_tmp_chpl30 = ((c_string)(coerce_tmp_chpl6));
          ret_chpl3 = (&local_x_chpl2)->len;
          call_tmp_chpl32 = ((int32_t)(UINT8(false)));
          call_tmp_chpl33 = ((int32_t)(iokind_chpl_little_chpl));
          call_tmp_chpl31 = qio_channel_write_string(call_tmp_chpl32, call_tmp_chpl33, call_tmp_chpl28, coerce_tmp_chpl2, call_tmp_chpl30, ret_chpl3);
          _ref_tmp__chpl9 = &local_x_chpl2;
          chpl___TILDE_string(_ref_tmp__chpl9);
          e_chpl2 = call_tmp_chpl31;
        } else {
          ret_to_arg_ref_tmp__chpl4 = &call_tmp_chpl34;
          string2(_e0_args_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl4);
          local_x_chpl3 = call_tmp_chpl34;
          call_tmp_chpl35 = qio_channel_str_style(coerce_tmp_chpl2);
          coerce_tmp_chpl7 = (&local_x_chpl3)->locale_id;
          call_tmp_chpl36 = (coerce_tmp_chpl7 != chpl_nodeID);
          if (call_tmp_chpl36) {
            halt(&local__str_literal_306_chpl, INT64(4577), INT32(52));
          }
          coerce_tmp_chpl8 = (&local_x_chpl3)->buff;
          call_tmp_chpl37 = ((c_string)(coerce_tmp_chpl8));
          ret_chpl4 = (&local_x_chpl3)->len;
          call_tmp_chpl39 = ((int32_t)(UINT8(false)));
          call_tmp_chpl40 = ((int32_t)(iokind_chpl_native_chpl));
          call_tmp_chpl38 = qio_channel_write_string(call_tmp_chpl39, call_tmp_chpl40, call_tmp_chpl35, coerce_tmp_chpl2, call_tmp_chpl37, ret_chpl4);
          _ref_tmp__chpl10 = &local_x_chpl3;
          chpl___TILDE_string(_ref_tmp__chpl10);
          e_chpl2 = call_tmp_chpl38;
        }
      }
    } else {
      call_tmp_chpl41 = _write_text_internal_chpl(coerce_tmp_chpl2, _e0_args_chpl);
      e_chpl2 = call_tmp_chpl41;
    }
    _formal_tmp_error_chpl = e_chpl2;
  }
  call_tmp_chpl42 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl43 = (call_tmp_chpl42 == INT32(0));
  if (call_tmp_chpl43) {
    chpl_check_nil(this_chpl, INT64(4577), INT64(52));
    coerce_tmp_chpl9 = (this_chpl)->_channel_internal_chpl;
    _ref_tmp__chpl11 = &type_tmp_chpl4;
    call_tmp_chpl44 = qio_int_to_err(INT32(0));
    *(_ref_tmp__chpl11) = call_tmp_chpl44;
    call_tmp_chpl46 = ((int32_t)(UINT8(false)));
    call_tmp_chpl45 = qio_channel_write_newline(call_tmp_chpl46, coerce_tmp_chpl9);
    _formal_tmp_error_chpl = call_tmp_chpl45;
  }
  chpl_check_nil(this_chpl, INT64(4577), INT64(52));
  coerce_tmp_chpl10 = (this_chpl)->_channel_internal_chpl;
  qio_channel_unlock(coerce_tmp_chpl10);
  qio_err_iserr(_formal_tmp_error_chpl);
  *(_ref_tmp__chpl2) = _formal_tmp_error_chpl;
  call_tmp_chpl47 = qio_err_iserr(e_chpl);
  call_tmp_chpl48 = (call_tmp_chpl47 == INT32(0));
  if (call_tmp_chpl48) {
    ret_chpl = UINT8(true);
    goto _end_write_chpl;
  } else {
    ret_to_arg_ref_tmp__chpl5 = &_autoCopy_tmp__chpl;
    _args_to_proto_chpl(_e0_args_chpl, &wrap_call_tmp_chpl, &local__str_literal_2111_chpl, ret_to_arg_ref_tmp__chpl5);
    call_tmp_chpl49 = _autoCopy_tmp__chpl;
    ret_to_arg_ref_tmp__chpl6 = &_autoCopy_tmp__chpl2;
    chpl___PLUS_(&local__str_literal_2109_chpl, &_autoCopy_tmp__chpl, ret_to_arg_ref_tmp__chpl6);
    call_tmp_chpl50 = _autoCopy_tmp__chpl2;
    ret_to_arg_ref_tmp__chpl7 = &_autoCopy_tmp__chpl3;
    chpl___PLUS_(&_autoCopy_tmp__chpl2, &local__str_literal_387_chpl, ret_to_arg_ref_tmp__chpl7);
    call_tmp_chpl51 = _autoCopy_tmp__chpl3;
    chpl_check_nil(this_chpl, INT64(4577), INT64(52));
    _ch_ioerror_chpl(this_chpl, e_chpl, &_autoCopy_tmp__chpl3);
    ret_chpl = UINT8(false);
    _ref_tmp__chpl12 = &call_tmp_chpl51;
    chpl___TILDE_string(_ref_tmp__chpl12);
    _ref_tmp__chpl13 = &call_tmp_chpl50;
    chpl___TILDE_string(_ref_tmp__chpl13);
    _ref_tmp__chpl14 = &call_tmp_chpl49;
    chpl___TILDE_string(_ref_tmp__chpl14);
    goto _end_write_chpl;
  }
  _end_write_chpl:;
  return ret_chpl;
}

/* IO.chpl:4825 */
 void writeln_chpl2(string* const _e0_args_chpl) {
  _ref_channel_T_dynamic_T _ref_tmp__chpl = NULL;
  _ref_tmp__chpl = &stdout_chpl;
  chpl_check_nil(_ref_tmp__chpl, INT64(4826), INT64(52));
  writeln_chpl(_ref_tmp__chpl, _e0_args_chpl);
  return;
}

