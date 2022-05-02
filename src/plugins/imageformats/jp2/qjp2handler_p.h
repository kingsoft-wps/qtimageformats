/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Copyright (C) 2016 Petroules Corporation.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the JP2 plugins in the Qt ImageFormats module.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QJP2HANDLER_H
#define QJP2HANDLER_H

#include <QtCore/qscopedpointer.h>
#include <QtGui/qimageiohandler.h>

QT_BEGIN_NAMESPACE

class QImage;
class QByteArray;
class QIODevice;
class QVariant;
class QJp2HandlerPrivate;

class QJp2Handler : public QImageIOHandler
{
public:
    QJp2Handler();
    ~QJp2Handler();
    static bool canRead(QIODevice *iod, QByteArray *subType);
    bool canRead() const override;
    bool read(QImage *image) override;
    bool write(const QImage &image) override;
    QVariant option(ImageOption option) const override;
    void setOption(ImageOption option, const QVariant &value) override;
    bool supportsOption(ImageOption option) const override;

private:
    Q_DECLARE_PRIVATE(QJp2Handler)
    QScopedPointer<QJp2HandlerPrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QJP2HANDLER_P_H
