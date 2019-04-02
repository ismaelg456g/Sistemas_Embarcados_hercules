1. Considerando a biblioteca-padrão da linguagem C, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
	
	FILE *fopen(const char *pathname, const char *mode);

        FILE *fdopen(int fd, const char *mode);

        FILE *freopen(const char *pathname, const char *mode, FILE *stream);
	int fclose(FILE *stream);

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
	int fprintf(FILE *stream, const char *format, ...);

	int fputc(int c, FILE *stream);

        int fputs(const char *s, FILE *stream);

	size_t fwrite(const void *ptr, size_t size, size_t nmemb,
                     FILE *stream);	
(c) Quais são as funções (e seus protótipos) para ler arquivos?
	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
	
(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
       int fseek(FILE *stream, long offset, int whence);

       long ftell(FILE *stream);

       void rewind(FILE *stream);

       int fgetpos(FILE *stream, fpos_t *pos);

       int fsetpos(FILE *stream, const fpos_t *pos);
	
(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
	#include <stdio.h>

2. O que é a norma POSIX?
	É uma família de normas definidas pela IEEE para a manutenção de compatibilidade entre sistemas operacionais. Ela tem o objetivo de garantir a compatibilidade entre sistemas que sigam esta norma, de modo que um mesmo programa possa ser utilizado em múltiplas plataformas.

3. Considerando a norma POSIX, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
	int open(const char *pathname, int flags); --> #include <fcntl.h>

	int close(int fd); --> #include <unistd.h>
(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
	size_t write(int fd, const void *buf, size_t count); --> #include <unistd.h>

(c) Quais são as funções (e seus protótipos) para ler arquivos?
	ssize_t read(int fd, void *buf, size_t count); --> #include <unistd.h>

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
	off_t lseek(int fildes, off_t offset, int whence); --> #include <unistd.h>

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
	#include <unistd.h>
	#include <fcntl.h>	
