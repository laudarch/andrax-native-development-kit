#include <pcap.h>

/* Library Version information */
#define LIBFINDRTP_VERSION "0.4b"

/* Default interface */
#define LIBFINDRTP_IF "eth0"

/* Signaling Ports */
#define LIBFINDRTP_SIP_PORT 5060
#define LIBFINDRTP_SCCP_PORT 2000
#define LIBFINDRTP_IAX1_PORT 5036
#define LIBFINDRTP_IAX2_PORT 4569

/* Data structures */
typedef struct rtp_pair_t {
	unsigned int ip_a;			/* Address A in host byte-order */
	unsigned int ip_a_n;			/* Address A in network byte-order */
	char ip_a_a[16];				/* Address A in dotted quad ascii */
	unsigned short port_a;		/* Address A's port in host byte-order */
	unsigned short port_a_n;	/* Address A's port in network byte-order */
	unsigned int ip_b;			/* Address B in host byte-order */
	unsigned int ip_b_n;			/* Address B in network byte-order */
	char ip_b_a[16];				/* Address B in dotted quad ascii */
	unsigned short port_b;		/* Address B's port in host byte-order */
	unsigned short port_b_n;	/* Address B's port in network byte-order */
} rtp_pair;

typedef struct addr_port_pair_t {
	unsigned int addr;
	unsigned short port;
} addr_port_pair;

/* Function Delcarations */
rtp_pair *libfindrtp_find_rtp( char *interface, unsigned int promisc, char *host_a, char *host_b );
void _libfindrtp_packet_handler( u_char *null, const struct pcap_pkthdr *h, const u_char *p );
addr_port_pair *_libfindrtp_parse_sccp_packet( const u_char *p, int plen );
addr_port_pair *_libfindrtp_parse_sip_packet( const u_char *p, int plen );

