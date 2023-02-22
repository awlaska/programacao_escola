# FILES
## Open a file
> FILE *fopen(char *nome, char *modo);   
## Write on a file
> int fprintf(FILE *fp, "nome.", "...");
### Parâmetros
- w - write - abrir para escrita
- r - read - abrir para leitura
- a - append - abrir para escrita - acrescenta informação
- w+ - ler e escrever no ficheiro
- r+ - ler e ecrever no ficheiro
- a+ - ler e escrever no ficheiro
## Close a file
> fclose(FILE fp);
## Other
- FILE char nome[]
- FILE *fopen(char *nome, char *modo)
- int fprintf(FILE *fp, "...", "...")
- int fclose(FILE *fp);
- int fputc(int ch, FILE *fp)
- int fputs(char *st, FILE *fp)
- int fscan(FILE *fp, "...", "...")
- int fgetc(FILE *fp)
- char *fgets(char *str, int n, FILE *fp)
- int feof(FILE *fp)