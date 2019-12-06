#include "libmx.h"

void mx_print_unicode(wchar_t c){
    char s[4];
    if(c<0x80){
       s[0]=(c>>0 & 0x7F) | (0x00);
       s[1]='\0';
       s[2]='\0';
       s[3]='\0';
}
    else if(c<0x0800){
       s[0]=((c>>6 & 0x1F) | (0xC0));
       s[1]=((c>>0 & 0x3F) | (0x80));
       s[2]='\0';
       s[3]='\0';
}
    else if(c<0x10000){
       s[0]=((c>>12 & 0x0F) | (0xE0));
       s[1]=((c>>6 & 0x3F) | (0x80));
       s[2]=((c>>0 & 0x3F) | (0x80));
       s[3]='\0';
}
    else if(c<0x110000){
       s[0]=((c>>18 & 0x07) | (0xF0));
       s[1]=((c>>12 & 0x3F) | (0x80));
       s[2]=((c>>6 & 0x3F) | (0x80));
       s[3]=((c>>0 & 0x3F) | (0x80));
}
    write(1,s,4);
}

/*int main() {
    wchar_t i = 0x72d7;
    mx_print_unicode(i);
    //printw(i);
    //fwrite(1, )
}*/
