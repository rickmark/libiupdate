//
// Created by Rick Mark on 9/14/20.
//

#ifndef LIBIUPDATE_LIBIUPDATE_H
#define LIBIUPDATE_LIBIUPDATE_H

typedef enum {
    IUPDATE_E_SUCCESS = 0
} libiupdate_error_t;

typedef void* iupdate_mac_catalog;

/*
 * https://mesu.apple.com/assets/audio/
https://mesu.apple.com/assets/tv/
https://basejumper.apple.com/livability/audio/%s/
https://basejumper.apple.com/livability/%s/
https://mesu.apple.com/systemassets/
 https://basejumper.apple.com/systemassets/
 https://gdmf.apple.com/v2/pmv
 https://gdmf-staging-int.apple.com/v2/assets
https://gdmf.apple.com/v2/assets
 https://xp.apple.com/report/2/psr_ota
 http://gg.apple.com/fdrtrustobject
 http://gs.apple.com:80/
http://vega-dr.apple.com:8080/vegads/fuser
http://treecko-dr.apple.com:8080/TREECKO/controller
 */
const char* iupdate_mac_developer_seed = "DeveloperSeed";
const char* iupdate_mac_customer_seed = "CustomerSeed";
const char* iupdate_mac_public_seed = "PublicSeed";
const char* iupdate_mac_default_catalog = "https://swscan.apple.com/content/catalogs/others/index-10.15-10.14-10.13-10.12-10.11-10.10-10.9-mountainlion-lion-snowleopard-leopard.merged-1.sucatalog";

const char* iupdate_bridgeos_url = "https://mesu.apple.com/assets/bridgeos/com_apple_bridgeOSIPSW/com_apple_bridgeOSIPSW.xml";

const char* iupdate_tv_assts = "https://mesu.apple.com/assets/tv/";

const char* iupdate_gdmf = "https://gdmf.apple.com/v2/assets";

const char* iupdate_mobileasset_url_base = "https://mesu.apple.com/assets/";
const char* iupdate_mobileasset_softwareupdate = "com_apple_MobileAsset_SoftwareUpdate/com_apple_MobileAsset_SoftwareUpdate.xml";
const char* iupdate_mobileasset_softwareupdatebrain = "com_apple_MobileAsset_MobileSoftwareUpdate_UpdateBrain/com_apple_MobileAsset_MobileSoftwareUpdate_UpdateBrain.xml"



libiupdate_error_t iupdate_get_mac_catalog_url(char* version, char* seed, char** url);
libiupdate_error_t iupdate_open_mac_catalog_by_url(char* url, iupdate_mac_catalog* catalog);

#endif //LIBIUPDATE_LIBIUPDATE_H
