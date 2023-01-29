#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int CreateSocket(int * sockfd, const char * ip, int port, struct sockaddr_in * interface_addr){

    *sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (*socket < 0) {
        printf("Erreur lors de la création de la socket\n");
        exit(EXIT_FAILURE);
    }

        // Initialisation de la structure "serv_addr" à 0.
    memset(&(*interface_addr), 0, sizeof(*interface_addr));

        // Famille d'adresses internet (IP).
    (*interface_addr).sin_family = AF_INET;

        // Numéro de port converti en format de réseau
    (*interface_addr).sin_port = htons(port);

        // Conversion de l'adresse IP en format de réseau
    if (inet_pton(AF_INET, ip, &(*interface_addr).sin_addr) <= 0) {
        printf("Erreur lors de la conversion de l'adresse IP : %s\n", ip);
    }

}

