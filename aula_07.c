void
void

main(){
    insere(10, lista);

}

void insere(int nr, struct no *)

void exibir(struct no *plista){
	struct no *aux;
	aux = plista;
	if(aux!=NULL){
		while(aux != NULL){
			printf("[%x] %d -> %x\n", aux, aux->info, aux->prox);
			aux = aux->prox;
		}
	}
	else{
		printf("A lista esta vazia\n");
	}
}