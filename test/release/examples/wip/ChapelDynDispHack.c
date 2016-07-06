/* ChapelDynDispHack.chpl:20 */
 void chpl__init_ChapelDynDispHack(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t local_c_sublocid_any;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp = NULL;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  if (chpl__init_ChapelDynDispHack_p) {
    goto _exit_chpl__init_ChapelDynDispHack;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelDynDispHack";
  printModuleInit(modFormatStr, modStr, INT64(17));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDynDispHack_p = UINT8(true);
  local_c_sublocid_any = c_sublocid_any;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp = chpl_localeID_to_locale(&_autoCopy_tmp_);
  chpl_check_nil(call_tmp, INT64(31), INT64(38));
  call_tmp2 = id(call_tmp);
  call_tmp3 = (call_tmp2 >= INT64(0));
  assert_chpl(call_tmp3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDynDispHack:;
  return;
}

