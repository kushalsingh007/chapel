/* MemConsistency.chpl:20 */
 void chpl__init_MemConsistency(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_MemConsistency_p) {
    goto _exit_chpl__init_MemConsistency;
  }
  modFormatStr = "%*s\n";
  modStr = "MemConsistency";
  printModuleInit(modFormatStr, modStr, INT64(14));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_MemConsistency_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemConsistency:;
  return;
}

