#pragma once

#define IOCTL_AFD_CONNECT       0x12007
#define IOCTL_AFD_SELECT        0x12024
#define IOCTL_AFD_GET_ADDRESS   0x1202F
#define IOCTL_AFD_GETINFO       0x1203F
#define IOCTL_AFD_SUPER_CONNECT 0x120C7



typedef struct _AFD_CONNECT_INFO {
	void* UseSAN;
	void* Root;
	void* ConnectEndpoint;
	struct sockaddr RemoteAddress;
} AFD_CONNECT_INFO, * PAFD_CONNECT_INFO;

#define PACKED
#pragma pack(push,1)
typedef struct _AFD_SUPERCONNECT_INFO {
	unsigned long long  Unknown;
	unsigned short      AddrLen;
	struct sockaddr     RemoteAddress;
}AFD_SUPERCONNECT_INFO, * PAFD_SUPERCONNECT_INFO;
#pragma pack(pop)
#undef PACKED



