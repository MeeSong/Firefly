#pragma once

#define aes_key_size		32
#define aes_iv_size			16

namespace firefly
{
	typedef unsigned char aes_key[aes_key_size];
	typedef unsigned char aes_iv[aes_iv_size];

	struct aes_buffer
	{
		aes_buffer()
		{
			memset(this->key, 0, sizeof(aes_key));
			memset(this->iv, 0, sizeof(aes_iv));
		}
		
		aes_key key;
		aes_iv iv;
	};

	const aes_key aes_hard_key =
	{
		0xbc, 0x64, 0x7c, 0xa1, 0x5f, 0xea, 0x00, 0xc5,
		0xd5, 0x38, 0xca, 0x94, 0xb7, 0x72, 0x0e, 0x49,
		0x24, 0xad, 0xd8, 0xb0, 0xa9, 0x81, 0x27, 0x0d,
		0x03, 0xf4, 0x34, 0xef, 0x41, 0x55, 0x03, 0x74
	};

	const aes_iv aes_hard_iv =
	{
		0x43, 0x19, 0xdf, 0x5d, 0x46, 0x7d, 0x5f, 0x77,
		0xb2, 0x75, 0xef, 0xe2, 0xd4, 0x78, 0x60, 0xfd
	};
}