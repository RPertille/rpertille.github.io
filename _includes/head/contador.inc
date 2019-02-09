<?php 
$arquivo = "contador.txt";//arquivo do contador
if(file_exists($arquivo)){//se existe lê o valor atual e o incrementa
	$valor_atual = file_get_contents($arquivo);//lê o conteudo inteiro retornando em uma string
	$valor_atual = chop($valor_atual);//remove os espaços e quebra de linha no fim da string
	$valor_atual++;
	$ponteiro = fopen($arquivo,"w");
	fwrite($ponteiro,$valor_atual);
	fclose($ponteiro);
}
else{
	$valor_atual = 1 ;
	$ponteiro = fopen($arquivo,"w");
	fwrite($ponteiro,$valor_atual);
	fclose($ponteiro);
}
?>
