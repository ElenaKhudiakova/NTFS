#pragma hdrstop
#pragma argsused

#include <fileapi.h>
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include "NTFSDriverPCH1.h"

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{   /*
	BYTE databuffer[512];
	NTFS_BootRecord *pNTFS_BootRecord = (NTFS_BootRecord*)databuffer;

	HANDLE filehandle = CreateFileW(
	L"\\\\.\\C:",
	GENERIC_READ,
	FILE_SHARE_READ | FILE_SHARE_WRITE,
	NULL,
	OPEN_EXISTING,
	FILE_ATTRIBUTE_NORMAL,
	NULL);

	if (filehandle == INVALID_HANDLE_VALUE) {
		std::cout << "Error: the file cannot be opened, administrator rights are required.\nTry again. :)\n";
		system("pause");
		exit(-1);
	}

	LARGE_INTEGER sectoroffset;
	sectoroffset.QuadPart = 0;

	unsigned long currentposition = SetFilePointer(
	filehandle,
	sectoroffset.LowPart,
	&sectoroffset.HighPart,
	FILE_BEGIN);

	if (currentposition != sectoroffset.LowPart)
	{
		std::cout << "Offset error.\nTry again. :)\n";
		system("pause");
		exit(-1);
	}

	DWORD bytestoread = 512;
	DWORD bytesread;

	bool readresult = ReadFile(
	filehandle,
	databuffer,
	bytestoread,
	&bytesread,
	NULL);

	if(readresult == false || bytesread != bytestoread)
	{
		std::cout << "Error: The file cannot be read or there is a discrepancy in the number of bytes read.\nTry again. :)\n";
		system("pause");
		exit(-1);
	}

	UINT name_lo = pNTFS_BootRecord->name_lo;
	UINT name_hi = pNTFS_BootRecord->name_hi;
	USHORT sec_size = pNTFS_BootRecord->sec_size;
	BYTE secs_cluster = pNTFS_BootRecord->secs_cluster;
	ULONGLONG num_secs = pNTFS_BootRecord->num_secs;
	ULONGLONG mft_clus = pNTFS_BootRecord->mft_clus;
	ULONGLONG mft2_clus = pNTFS_BootRecord->mft2_clus;
	UINT mft_rec_size = pNTFS_BootRecord->mft_rec_size;
	UINT volume_id_lo = pNTFS_BootRecord->volume_id_lo;
	UINT volume_id_hi = pNTFS_BootRecord->volume_id_hi;
    USHORT sign = pNTFS_BootRecord->sign;

	if (name_lo != 1397118030 && name_hi != 538976288) {
		std::cout << "Error: The transition to the bootstrap program was not detected.\nTry again.\n";
		system("pause");
		exit(-1);
	}
	if (sign != 43605) {
		std::cout << "Error: The signature not detected.\nTry again.\n";
		system("pause");
		exit(-1);
	}

	int otv;
	std::cout << "To get information about the file system of my computer\n";
	std::cout << "It is necessary to correctly answer the question in the topic History.";
	std::cout << "\nHow many years did the Hundred Years' War last?\n";
	std::cin >> otv;
	if (otv == 116) {
		std::cout << "Great, good job.\n";
		std::cout << "\nThe developer is Roman Ivanov, a student of the RI-571227 group.\n";
		std::cout << "The value of the NTFS boot sector fields:\n";
		std::cout << "Number of bytes per sector: " << sec_size;
		std::cout << "\nNumber of sectors per cluster: " << static_cast<int>(secs_cluster);
		std::cout << "\nThe total number of sectors in the section: " << num_secs;
		std::cout << "\nThe cluster number in which the MFT table begins: " << mft_clus;
		std::cout << "\nThe cluster number in which the copy of the MFT table begins: " << mft2_clus;
		std::cout << "\nMFT record size in clusters: " << mft_rec_size;
		std::cout << "\nThe lowest word of the disk serial number: " << volume_id_lo;
		std::cout << "\nThe highest word of the disk serial number: " << volume_id_hi;
	}
	else
	{
		std::cout << "Bad, try again. ^_^";
    }

	std::cout << "\n";
	system("pause");
	CloseHandle(filehandle); */
	return 0;
}
