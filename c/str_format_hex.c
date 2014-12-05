char* str_format_hex(char *buf, int len) {
    
    int l = len * 2;
    char *hex = malloc(sizeof(char)*l);
    
    for (int i = 0; i < len; i++) {
        
        if (isalpha(buf[i])) {
            sprintf(&hex[i*2]," %c", buf[i]);
        } else {
            sprintf(&hex[i*2],"%02x", buf[i]);
        }
//        if ((i + 1) % 8 == 0) {
//            bytebuf_append_bytes(out_buf, "\n", 2);
//        }
    }
    
    return hex;
}
