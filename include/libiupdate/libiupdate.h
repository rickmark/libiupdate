//
// Created by Rick Mark on 9/14/20.
//

#ifndef LIBIUPDATE_LIBIUPDATE_H
#define LIBIUPDATE_LIBIUPDATE_H

typedef enum {
    IUPDATE_E_SUCCESS = 0
} libiupdate_error_t;

typedef void* iupdate_mac_catalog;

const char* iupdate_mac_developer_seed = "DeveloperSeed";
const char* iupdate_mac_customer_seed = "CustomerSeed";
const char* iupdate_mac_public_seed = "PublicSeed";
const char* iupdate_mac_default_catalog = "https://swscan.apple.com/content/catalogs/others/index-10.15-10.14-10.13-10.12-10.11-10.10-10.9-mountainlion-lion-snowleopard-leopard.merged-1.sucatalog";

const char* iupdate_bridgeos_url = "https://mesu.apple.com/assets/bridgeos/com_apple_bridgeOSIPSW/com_apple_bridgeOSIPSW.xml";



libiupdate_error_t iupdate_get_mac_catalog(char* version, char* seed, char** url);
libiupdate_error_t iupdate_open_mac_catalog_by_url(char* url, iupdate_mac_catalog* catalog);

#endif //LIBIUPDATE_LIBIUPDATE_H
