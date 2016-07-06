/* Regexp.chpl:338 */
 void chpl__init_Regexp(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Regexp_p) {
    goto _exit_chpl__init_Regexp_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "Regexp";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Regexp_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Regexp_chpl:;
  return;
}

