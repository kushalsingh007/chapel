/* ChapelUtil.chpl:24 */
 void chpl__init_ChapelUtil(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelUtil_p) {
    goto _exit_chpl__init_ChapelUtil;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelUtil";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelUtil_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelUtil:;
  return;
}

