/* Sys.chpl:44 */
 void chpl__init_Sys(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Sys_p) {
    goto _exit_chpl__init_Sys_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "Sys";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(3));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Sys_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(44), INT32(48));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Sys_chpl:;
  return;
}

