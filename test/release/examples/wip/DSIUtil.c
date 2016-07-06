/* DSIUtil.chpl:1 */
 void chpl__init_DSIUtil(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_DSIUtil_p) {
    goto _exit_chpl__init_DSIUtil_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "DSIUtil";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(7));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_DSIUtil_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_DSIUtil_chpl:;
  return;
}

/* DSIUtil.chpl:37 */
 void createTuple_chpl(int64_t val_chpl, _ref__tuple_1_star_int64_t _retArg_chpl) {
  int64_t tup_x1_chpl;
  _ref_int64_t call_tmp_chpl = NULL;
  tup_x1_chpl = INT64(0);
  call_tmp_chpl = &tup_x1_chpl;
  *(call_tmp_chpl) = val_chpl;
  *(*(_retArg_chpl) + INT64(0)) = tup_x1_chpl;
  return;
}

