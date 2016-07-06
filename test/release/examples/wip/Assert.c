/* Assert.chpl:31 */
 void chpl__init_Assert(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Assert_p) {
    goto _exit_chpl__init_Assert_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "Assert";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Assert_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Assert_chpl:;
  return;
}

/* Assert.chpl:41 */
 void assert_chpl(chpl_bool test_chpl) {
  chpl_bool call_tmp_chpl;
  call_tmp_chpl = (! test_chpl);
  if (call_tmp_chpl) {
    chpl_error("assert failed", INT64(43), INT32(43));
  }
  return;
}

