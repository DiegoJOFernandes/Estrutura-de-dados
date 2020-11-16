#define TAM 10000
main()
{
 int inicio, final, tempo_decorrido;
 int vetor[TAM],x,y,aux;
 x = 0;
 y = 0;
 aux = 0;
 printf("\nGerando um vetor com %d inteiros aleatorios:\n",TAM);
 for(x = 0; x < TAM; x++ )
{
 vetor[x] = rand() % 100;
 printf("%d\t", vetor[x]);
}
 getchar();
inicio = GetTickCount();
 for( x = 0; x < TAM; x++ )
 {
 for( y = x + 1; y < TAM; y++ )
 {
 if ( vetor[x] > vetor[y] )
 {
 aux = vetor[x];
 vetor[x] = vetor[y];
 vetor[y] = aux;
 }
 }
 }
 final = GetTickCount();
 tempo_decorrido = final - inicio;
 printf("\nTempo de Ordenacao = : %d milisegundos ",tempo_decorrido);
 getchar();
 printf("\nVetor Ordenado\n ");
 for( x = 0; x < TAM; x++ )
 printf("%d\t",vetor[x]);
system("pause");
}