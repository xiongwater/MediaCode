#include "MediaWnd.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTranslator>
#undef main
int main(int argc, char *argv[])
{

	 
	QApplication a(argc, argv);
	//����Qt�е���Դ�ļ���ʹQt��ʾ���ģ�����QMessageBox���ı����Ҽ��˵��ȣ�
	/*QTranslator translator;
	translator.load(":/FFMPEG_LEARN/qt_zh_CN");
	a.installTranslator(&translator);*/
	MediaWnd w;
	w.show();
	return a.exec();

}
