#include "library.h"
#include "aes.h"
#include "iostream"
using namespace std;
char *encrypt_ecb(char *in, char *key) {
    uint8_t *rkey = (uint8_t *) key;
    return AES_ECB_PKCS7_Encrypt(in, rkey);
}
char* lib_is_ok(){

    cout<<"sb"<<endl;
    return NULL;

}
char *decrypt_ecb(char *in, char *key) {
    uint8_t *rkey = (uint8_t *) key;
    return AES_ECB_PKCS7_Decrypt(in, rkey);
}

char *encrypt_cbc(char *in, char *key, char *iv) {
    uint8_t *rkey = (uint8_t *) key;
    uint8_t *riv = (uint8_t *) key;

    return AES_CBC_PKCS7_Encrypt(in, rkey, riv);
}

char *decrypt_cbc(char *in, char *key, char *iv) {
    auto *rkey = (uint8_t *) key;

    auto *riv = (uint8_t *) key;

    return AES_CBC_PKCS7_Decrypt(in, rkey, riv);
}

