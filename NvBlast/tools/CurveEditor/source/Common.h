#ifndef CURVEEDITOR_COMMON_H
#define CURVEEDITOR_COMMON_H

#ifdef CURVEEDITOR_LIB
# define CURVEEDITOR_EXPORT Q_DECL_EXPORT
#else
# define CURVEEDITOR_EXPORT Q_DECL_IMPORT
#endif

#endif