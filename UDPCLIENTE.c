#include <stdio.h>      /* for printf() and fprintf() */
#include <sys/socket.h> /* for socket(), connect(), sendto(), and recvfrom() */ 
#include <arpa/inet.h>  /* sockaddr_in and inet_addr() */
#include <stdlib.h>     /* for atoi() */
#include <string.h>     /* for memset() */
#include <unistd.h>     /* for close() */ 

#define ECHOMAX 255     /* Longest string to echo */

void DieWithError(char *errorMessage);  // External error handling function */ 
void datosMotor(char *argv[],char echoBuffer[]);

int main(int argc, char *argv[])
{ 
    int sock;                        /* Socket descriptor */ 
    struct sockaddr_in echoServAddr; /* Echo server address */
    struct sockaddr_in fromAddr;     /* Source address of echo */ 
    unsigned short echoServPort;     /* Echo server port */
    unsigned int fromSize;           /*   In-out of address size for recvfrom() */                
    char *servIP;                    // IP address of server */ 
    char *echoString;                // String to send to echo server */ 
    char echoBuffer[ECHOMAX + 1];    /* Buffer for receiving echoed string */ 
    int echoStringLen;               /* Length of string to echo */ 
    int respStringLen;               /* Length of received response */ 
 
    if ((argc < 1) || (argc > 2)) /* Test for correct number of arguments */
    {
        fprintf(stderr,"Usage: %s <Server IP> <Echo Word> [<Echo Port>]\n", argv[0]); 
        exit(1);
    } 
    
    servIP = "186.155.208.171" ;       /* First arg' server IP address (dotted quad)*/
    echoString = argv[1] ;   /* Second arg' string to echo */

    if ((echoStringLen = strlen(echoString))> ECHOMAX) /* Check input length */ 
        DieWithError("Echo word too long");
        
    if (argc == 2) 
        echoServPort = 65000 ; /* Use given port, if any */ 
    else
        echoServPort = 65000; /* 7 is the well-known port for the echo service */ 
    
    /* Create a datagram/UDP socket */ 
    if ((sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0) 
        DieWithError( "socket () failed") ;
    
    /* Construct the server address structure */ 
    memset(&echoServAddr, 0, sizeof(echoServAddr));    /* Zero out structure */ 
    echoServAddr.sin_family = AF_INET;                 /* Internet addr family */ 
    echoServAddr.sin_addr.s_addr = inet_addr(servIP);  /* Server IP address */ 
    echoServAddr.sin_port = htons(echoServPort);       /* Server port */ 
    
    /* Send the string to the server */ 
    if (sendto(sock, echoString, echoStringLen, 0, (struct sockaddr *) 
               &echoServAddr, sizeof(echoServAddr)) != echoStringLen) 
        DieWithError("sendto() sent a different number of bytes than expected"); 
 
    /* Recv a response */ 
    fromSize = sizeof(fromAddr); 
    if ((respStringLen = recvfrom(sock, echoBuffer, ECHOMAX, 0, 
        (struct sockaddr *) &fromAddr, &fromSize)) != echoStringLen)
		{
        //DieWithError("recvfrom() failed") ; 
		}
    if (echoServAddr.sin_addr.s_addr != fromAddr.sin_addr.s_addr) 
    { 
        fprintf(stderr,"Error: received a packet from unknown source.\n"); 
        exit(1); 
    } 
    
    /* null-terminate the received data */ 
    echoBuffer[respStringLen] = '\0' ; 
    //printf("Received: %s\n", echoBuffer); /* Print the echoed arg */
	
	datosMotor(argv,echoBuffer);
	close(sock);
    exit(0);    
}

void DieWithError(char *errorMessage)  /*Definición función DieWithError*/
{
	printf("%s \n\n",errorMessage);
}

void datosMotor(char *argv[],char echoBuffer[])
{
		int tam=0,tam2=0;
		tam=strlen(echoBuffer);
		//printf("tamaño del archivo es %d",tam);
		int cont=0,j=0,ban=0;
		unsigned char pos[10];
		char contenido[tam],buffer2[tam];
		strcpy(buffer2,echoBuffer);
		buffer2[tam-1]=',';
		for(int i=0;i<tam-1;i++)
		{
			if(buffer2[i]==':')
			{
				cont++;
				pos[j]=i;
				//printf("\n\n %c ---> %d \n\n",buffer2[i],pos[j]);
				j++;
			}
		}
		
		int pos1=0,posr=0;
		for(int i=1;i<7;i++)
		{
			pos1=pos[i]+1;
			for(int j=pos1;j<tam-1;j++)
			{
			if(buffer2[j]!=',' && buffer2[j]!='}')
				{
					contenido[ban]=buffer2[j];
					ban++;
				}
			if(buffer2[j]==',' || buffer2[j]=='\0')
				{
					contenido[ban]=' ';
					ban++;
					j=tam;
				}
			}
				
		}
		contenido[ban]=' ';
		contenido[ban+1]='\0';
		
		//printf("\n\t aaaaaaaaaaa %s ---- %d\n\n",contenido,ban );
			
		FILE *fp;
		fp=fopen("/home/alse/UPD_cliente/datos_motor.txt","w");
		if(fp==NULL)
		{
			printf("\n\t el archivo no se creo \n\n");
		}
		fputs(contenido,fp);
		//printf("\n\t se guardaron los datos del motor \n\n");
		fclose(fp);	
	
}
