#ifndef _STYLE_HELPER_H_
#define _STYLE_HELPER_H_

//#include <clientcommon_global.h>
#include <QtCore/QObject>
#include <QtCore/QHash>

class QWidget;
class QString;
class QStringList;

class StyleHelper : public QObject
{
	friend class ClientApp;

public:
	enum StyleName { 
		//GLOBAL = 0 // ȫ����ʽ������app���ڸ���ȫ����ʽʱ���������Ӱ��
		CUSTOM = 10 // ����widget������ʽ���ڸ���ȫ����ʽʱ�������Ӱ��
		, DARK // ��ɫ
		, LIGHT // ��ɫ
		, TEST // ����
	};

private:
	explicit StyleHelper(QObject *parent = 0);
	~StyleHelper();
	Q_DISABLE_COPY(StyleHelper)

	void applyStyle(StyleName);

	void registGlobalStyle(const QString &url);
	void registGlobalStyle(StyleName name, const QString &url);

public:
	static void registStyle(StyleName name, QWidget *target, const QString &url);
	static void applyButtonColor(QWidget *widget, const QString &color);
	static void applyBoldFont(QWidget *widget);

	static void polishStyle(QWidget *);

	static void loadStyleSheet(const QString &file, QWidget *widget = 0);
	static void loadStyleSheet(const QStringList &files, QWidget *widget = 0);

private:
	static void replaceColorDefines(QString &);
};

#endif //_STYLE_HELPER_H_