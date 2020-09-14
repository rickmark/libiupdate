//
// Created by Rick Mark on 9/14/20.
//

#include "libiupdate/libiupdate.h"
#include <curl/curl.h>

libiupdate_error_t iupdate_get_mac_catalog_url(char* version, char* seed, char** url) {


    return IUPDATE_E_SUCCESS;
}


libiupdate_error_t iupdate_open_mac_catalog_by_url(char* url, iupdate_mac_catalog* catalog) {
    if (url == NULL) {
        url = iupdate_mac_default_catalog;
    }

    return IUPDATE_E_SUCCESS;
}
