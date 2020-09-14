//
// Created by Rick Mark on 9/14/20.
//

#include "libiupdate/libiupdate.h"

libiupdate_error_t iupdate_get_mac_catalog(char* version, char* seed, char** url) {
    if (seed == NULL) {
        seed = iupdate_mac_public_seed;
    }

    return IUPDATE_E_SUCCESS;
}


libiupdate_error_t iupdate_open_mac_catalog_by_url(char* url, iupdate_mac_catalog* catalog) {
    if (url == NULL) {
        url = iupdate_mac_default_catalog;
    }

    return IUPDATE_E_SUCCESS;
}
