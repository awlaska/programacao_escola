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
- r+ - ler e escrever ficheiro
- a+ - ler e escrever(append) no ficheiro
- wb - escrever em binario
- rb - ler em binario
- ab - append em binario
- wb+ - ler e escrever em binario
- rb+ - ler e escrever em binario
- ab+ - ler e escrever(append) em binario

## Close a file
> fclose(FILE fp);
## Other
- FILE char nome[]
- FILE *fopen(char *nome, char *modo)
- int fprintf(FILE *fp, "%i", variavel)
- int fclose(FILE *fp);
- int fputc(int ch, FILE *fp)
- int fputs(char *st, FILE *fp)
- int fscan(FILE *fp, "...", "...")
- int fgetc(FILE *fp) -> character
- char *fgets(char *str, int n, FILE *fp) -> string
- int feof(FILE *fp) -> end of file
### Binary
