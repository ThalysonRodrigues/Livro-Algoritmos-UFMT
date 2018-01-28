Program NovelaFinal ;

var 
	dias : integer;
	pessoas : integer;
	quantidade : integer; 

Begin

	dias := 1;    // Inicio no dia 01
	pessoas := 2; // Primeiro dia 02 pessoas sabem o final pelo funcionario 
	quantidade := pessoas;

	while (dias <> 25) do begin 
		dias := dias + 1;        // Loop de dias ate 25 dias
		pessoas := pessoas * 2;  // Dobra a quantidade pessoas sabendo
		quantidade := quantidade + pessoas; // Soma-se a quantidade anterior
	end;
			
  		quantidade := quantidade + 1; // O funcionario e acrescentado a quantidade 	
  	
    if (quantidade > 20000) then
     	writeln('Funcionario demitido!') // Caso ultrapasse 20.000 pessoas sabendo do desfecho
    else
		writeln('Funcionario com sorte!');
			  
		writeln('Quantidade de pessoas sabendo: ', quantidade); 
End.
