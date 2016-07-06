/* CString.chpl:41 */
 void chpl__init_CString(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_CString_p) {
    goto _exit_chpl__init_CString;
  }
  modFormatStr = "%*s\n";
  modStr = "CString";
  printModuleInit(modFormatStr, modStr, INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_CString_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CString:;
  return;
}

