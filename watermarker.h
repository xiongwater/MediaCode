#ifndef WATERMARKER_H
#define WATERMARKER_H


/**
 *
 * ʹ�÷����μ� Realplayer �� RealplayHandler �Ľ�ͼ��ش���
 *
 */

//#include <clientcommon_global.h>
#include <QtCore/QObject>
#include <QtCore/QVariantHash>

class QImage;

class  WaterMarker
{

public:
	static void add(QImage &, const QString &, int pos = 0);

};


/************************************************************************/
/*                                                                      */
/************************************************************************/
class  WatermarkHandler : public QObject
{
	Q_OBJECT

public slots:
	void addWatermark(QVariantHash);

};


#endif //WATERMARKER_H