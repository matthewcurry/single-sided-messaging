#ifndef __SSM_PP_VERSION_H
#define __SSM_PP_VERSION_H

#include <ssm/ext/boost/preprocessor.hpp>

#define SSM_VERSION_MAJOR 0
#define SSM_VERSION_MINOR 6
#define SSM_VERSION_PATCH 0

#define SSM_VERSION_CATMAJ \
  BOOST_PP_CAT(SSM_VERSION_MAJOR, .)

#define SSM_VERSION_CATMIN \
  BOOST_PP_CAT(SSM_VERSION_MINOR, .)

#define SSM_VERSION_CATMAJMIN \
  BOOST_PP_CAT(SSM_VESRION_CATMAJ, SSM_VERSION_CATMIN)

#define SSM_VERSION_CAT \
  BOOST_PP_CAT(SSM_VERSION_CATMAJMIN, SSM_VERSION_PATCH)

#define SSM_VERSION_STR \
  BOOST_PP_STRINGIZE(SSM_VERSION_CAT)  

#endif
