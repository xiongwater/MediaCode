//==============================================================================
// �ļ�����: log.h
// ��ǰ�汾: 1.0.0
// �������: 2016-11-10
// ����ժҪ: �����־�ļ�
// �޸ļ�¼: 
// �޸ļ�¼  ��   �� ��   ��    �޸�ժҪ
//
//-------------------------------------------------------------------------------
#ifndef _LOG_H_
#define _LOG_H_

//#define LOG_FILE_PATH  ".\InfoCollectLog"
//#define LOG_FILE_PATHNAME  LOG_FILE_PATH"IOTP_FB_ITCIPCast.Log"

#include "Utils.h"

/************************************************************************/
/* Named:       writeLog
/* Description: д��־
/* Param:       operatorType  - ��������
/*				operatorResult- �������
/*				extraInfor    - ������Ϣ
/* Created:     2016-06-30 20��43��00
/************************************************************************/
void writeLog(const char* operatorType, const char* operatorResult, const char* extraInfor);

#endif //_LOG_H_