/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.9.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/fridr/source/repos/GLViewer/GLViewer/vshader.glsl
  0x0,0x0,0x0,0x0,
  
    // C:/Users/fridr/source/repos/GLViewer/GLViewer/fshader.glsl
  0x0,0x0,0x0,0x0,
  
  
};

static const unsigned char qt_resource_name[] = {
  // Shaders
  0x0,0x7,
  0x9,0xe7,0xac,0x33,
  0x0,0x53,
  0x0,0x68,0x0,0x61,0x0,0x64,0x0,0x65,0x0,0x72,0x0,0x73,
    // vshader.glsl
  0x0,0xc,
  0x3,0xe7,0x2c,0xdc,
  0x0,0x76,
  0x0,0x73,0x0,0x68,0x0,0x61,0x0,0x64,0x0,0x65,0x0,0x72,0x0,0x2e,0x0,0x67,0x0,0x6c,0x0,0x73,0x0,0x6c,
    // fshader.glsl
  0x0,0xc,
  0x1,0xe7,0x2c,0xdc,
  0x0,0x66,
  0x0,0x73,0x0,0x68,0x0,0x61,0x0,0x64,0x0,0x65,0x0,0x72,0x0,0x2e,0x0,0x67,0x0,0x6c,0x0,0x73,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/Shaders
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/Shaders/fshader.glsl
  0x0,0x0,0x0,0x32,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,
0x0,0x0,0x1,0x60,0x65,0x59,0x8e,0xd3,
  // :/Shaders/vshader.glsl
  0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x60,0x65,0x59,0x8e,0xd3,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_GLViewer)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_GLViewer)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_GLViewer)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_GLViewer)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_GLViewer)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_GLViewer)(); }
   } dummy;
}
