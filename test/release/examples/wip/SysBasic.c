/* SysBasic.chpl:42 */
 void chpl__init_SysBasic(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_SysBasic_p) {
    goto _exit_chpl__init_SysBasic_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "SysBasic";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(8));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_SysBasic_p = UINT8(true);
  {
    chpl__init_SysCTypes(INT64(42), INT32(51));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_SysBasic_chpl:;
  return;
}

