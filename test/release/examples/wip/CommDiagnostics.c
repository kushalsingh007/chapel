/* CommDiagnostics.chpl:168 */
 void chpl__init_CommDiagnostics(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_CommDiagnostics_p) {
    goto _exit_chpl__init_CommDiagnostics_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "CommDiagnostics";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_CommDiagnostics_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_CommDiagnostics_chpl:;
  return;
}

