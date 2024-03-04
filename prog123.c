#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ip_address[20];
    printf("Enter the IP address in format A.B.C.D/M: ");
    fgets(ip_address, sizeof(ip_address), stdin);
    
    char ip[4][4];
    int subnet_mask;
    if (sscanf(ip_address, "%3[^.].%3[^.].%3[^.].%3[^/]/%d", ip[0], ip[1], ip[2], ip[3], &subnet_mask) != 5) {
        printf("Invalid input format\n");
        return 1; 
    }

    for (int i = 0; i < 4; i++) {
        int val = atoi(ip[i]);
        if (val < 0 || val > 255) {
            printf("Invalid IP address\n");
            return 1; 
        }
    } 
    if (subnet_mask < 0 || subnet_mask > 32) {
        printf("Invalid subnet mask\n");
        return 1;
    }


    unsigned int network_addr[4];
    for (int i = 0; i < 4; i++) {
        network_addr[i] = atoi(ip[i]);
    }

   int oclear = (32 - subnet_mask) / 8;

   
    for (int i = 3; i > 3 - oclear; i--) {
        network_addr[i] = 0;
    }

  printf("Network address: %u.%u.%u.%u/%d\n", network_addr[0], network_addr[1], network_addr[2], network_addr[3], subnet_mask);
 // snprintf(&ip_address,"%u.%u.%u.%u/%u",network_addr[0], network_addr[1], network_addr[2], network_addr[3]);
    return 0;
}
