/* CPtr.chpl:21 */
 void chpl__init_CPtr(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_CPtr_p) {
    goto _exit_chpl__init_CPtr;
  }
  modFormatStr = "%*s\n";
  modStr = "CPtr";
  printModuleInit(modFormatStr, modStr, INT64(4));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_CPtr_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CPtr:;
  return;
}

