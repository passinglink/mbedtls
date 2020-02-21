#ifndef MBEDTLS_CONFIG_H
#define MBEDTLS_CONFIG_H

#define MBEDTLS_PKCS1_V21
#define MBEDTLS_BIGNUM_C
#define MBEDTLS_MD_C
#define MBEDTLS_OID_C
#define MBEDTLS_RSA_C
#define MBEDTLS_RSA_NO_CRT
#define MBEDTLS_SHA256_C

#define MBEDTLS_ERROR_C

#include "mbedtls/check_config.h"

#endif /* MBEDTLS_CONFIG_H */
