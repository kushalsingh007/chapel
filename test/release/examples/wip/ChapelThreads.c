/* ChapelThreads.chpl:29 */
 void chpl__init_ChapelThreads(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t call_tmp;
  int64_t call_tmp2;
  if (chpl__init_ChapelThreads_p) {
    goto _exit_chpl__init_ChapelThreads;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelThreads";
  printModuleInit(modFormatStr, modStr, INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelThreads_p = UINT8(true);
  call_tmp = chpl_task_getenvNumThreadsPerLocale();
  call_tmp2 = ((int64_t)(call_tmp));
  numThreadsPerLocale = call_tmp2;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelThreads:;
  return;
}

