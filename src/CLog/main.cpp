#include "clog_class.h"

int main()
{
	// �Զ���log������log·��������·������ log �ļ���
	CREATE_LOG("mylog.log",".\\log\\");

	LOG_INFO("%s\n", "test!!");
	LOG_WARN("%s\n", "test!!");
	LOG_ERROR("%s\n", "test!!");
	LOG_DEBUG("%s\n", "test!!");
	
	while (1);
	return 0;
}