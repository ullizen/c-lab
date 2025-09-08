// TCP and UDP
// TCP in order, reliable
// UDP fire and forget

// Layers
// Application layer - HTTP, FTP, SMTP
// Transport layer - TCP, UDP
// Internet layer - IP
// Network access layer - Ethernet, Wi-Fi

#include <stdio.h>
#include <netdb.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    printf("Hello, Sockets!\n");

    // print hostname
    char hostname[256];
    gethostname(hostname, sizeof(hostname));
    printf("Hostname: %s\n", hostname);

    return 0;
}