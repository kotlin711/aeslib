#ifndef TGLIB_LIBRARY_H
#define TGLIB_LIBRARY_H
extern "C"{
char* encrypt_cbc(char * in,char * key ,char * iv);
char* decrypt_cbc(char * in,char * key ,char * iv);
char* encrypt_ecb(char * in,char * key);
char* decrypt_ecb(char * in,char * key);


char* lib_is_ok();
};

#endif //TGLIB_LIBRARY_H
