#ifndef IMAGEEDITOR_GLOBAL_H
#define IMAGEEDITOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(IMAGEEDITOR_LIBRARY)
#  define IMAGEEDITORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define IMAGEEDITORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IMAGEEDITOR_GLOBAL_H
